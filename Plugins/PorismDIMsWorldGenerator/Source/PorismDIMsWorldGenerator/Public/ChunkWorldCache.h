// Copyright by EnginFirestorm, All Rights Reserved.

#pragma once

#include "mutex"
#include <iostream>
#include <fstream>
#include <filesystem>

struct FCacheBlock {
	std::mutex Mutex;
	int64* DataCompress = nullptr;
	size_t SizeCompress = 0;
};

struct FCacheKey
{
	int X, Y, Z, W;

	bool operator==(const FCacheKey& other) const {
		return X == other.X && Y == other.Y && Z == other.Z && W == other.W;
	}
};

class FCacheFile {
private:
	FCacheBlock Blocks[512] = {};
	size_t ChunkSize;
public:
	int64 LastUse;
	std::mutex Mutex;
	FCacheKey Key;
	int32 ReadCount = 0;
	int32 WriteCount = 0;
	int32 BlocksSaved = 0;

	FCacheFile(std::fstream* in, size_t chunkSize, int64 LastUse, FCacheKey key) : ChunkSize(chunkSize), LastUse(LastUse), Key(key)
	{
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("CacheLoad");
		Mutex.lock();

		if (in == nullptr)
		{
			Mutex.unlock();
			return;
		}

		size_t nextPosition = sizeof(FCacheKey);
		in->seekg(nextPosition);
		in->read((char*)&BlocksSaved, sizeof(int32));
		nextPosition += sizeof(int32);
		in->seekg(nextPosition);
		in->read((char*)&ReadCount, sizeof(int32));
		nextPosition += sizeof(int32);
		in->seekg(nextPosition);
		in->read((char*)&WriteCount, sizeof(int32));
		nextPosition += sizeof(int32);

		for (int i = 0; i < 512; i++)
		{
			in->seekg(nextPosition);
			in->read((char*)&Blocks[i].SizeCompress, sizeof(size_t));
			nextPosition += sizeof(size_t);
			if (Blocks[i].SizeCompress > 0)
			{
				Blocks[i].DataCompress = (int64*)malloc(Blocks[i].SizeCompress);

				in->seekg(nextPosition);
				in->read((char*)Blocks[i].DataCompress, Blocks[i].SizeCompress);
			}
			nextPosition += Blocks[i].SizeCompress;
		}

		Mutex.unlock();
	}

	~FCacheFile() {
		Mutex.lock();
		for (int i = 0; i < 512; i++) {
			if (Blocks[i].DataCompress != nullptr)
			{
				Blocks[i].Mutex.lock();
				free(Blocks[i].DataCompress);
				Blocks[i].Mutex.unlock();
			}
		}
		Mutex.unlock();
	}

	void Write(int32* data, int index, int64 lastUse) {
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("CacheWrite");
		LastUse = lastUse;
		auto* block = &Blocks[index];

		block->Mutex.lock();
		Mutex.unlock();
		WriteCount++;

		int64* tempData = (int64*)malloc(ChunkSize * 2);
		int64 newSize = 0;
		int64 countNow = 0;
		int64* data64 = (int64*)data;
		int64 numberNow = data64[0];
		int64 targetSize = ChunkSize / sizeof(int64);

		for (int64 j = 0; j < targetSize; j++)
		{
			if (numberNow == data64[j])
			{
				countNow++;
			}
			else
			{
				tempData[newSize] = numberNow;
				tempData[newSize + 1] = countNow;
				numberNow = data64[j];
				countNow = 1;
				newSize += 2;
			}
		}
		tempData[newSize] = numberNow;
		tempData[newSize + 1] = countNow;
		newSize += 2;

		if (block->DataCompress != nullptr)
			free(block->DataCompress);
		else
			BlocksSaved++;

		block->DataCompress = (int64*)malloc(newSize * sizeof(int64));
		block->SizeCompress = newSize * sizeof(int64);
		memcpy(block->DataCompress, tempData, newSize * sizeof(int64));
		free(tempData);

		block->Mutex.unlock();
		return;
	}

	void JustWriteFromArray(TArray<int64>& data, int index, int64 lastUse) {
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("CacheWrite");
		LastUse = lastUse;
		auto* block = &Blocks[index];

		block->Mutex.lock();
		Mutex.unlock();
		WriteCount++;

		if (block->DataCompress != nullptr)
			free(block->DataCompress);
		else
			BlocksSaved++;

		block->DataCompress = (int64*)malloc(data.Num() * sizeof(int64));
		block->SizeCompress = data.Num() * sizeof(int64);
		memcpy(block->DataCompress, data.GetData(), data.Num() * sizeof(int64));

		block->Mutex.unlock();
		return;
	}

	bool Read(int32* data, int index, int64 lastUse) {
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("CacheRead");
		LastUse = lastUse;

		if (Blocks[index].DataCompress == nullptr)
		{
			Mutex.unlock();
			return false;
		}

		auto* block = &Blocks[index];

		block->Mutex.lock();
		Mutex.unlock();
		ReadCount++;
		int64* data64 = (int64*)data;
		int64 nextNewEntry = 0;
		int64 size = block->SizeCompress / sizeof(int64);
		for (int64 k = 0; k < size; k += 2)
		{
			for (int64 l = 0; l < block->DataCompress[k + 1]; l++)
			{
				data64[nextNewEntry] = block->DataCompress[k];
				nextNewEntry++;
			}
		}

		block->Mutex.unlock();
		return true;
	}

	bool JustReadToArray(TArray<int64>& data, int index, int64 lastUse) {
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("CacheJustRead");
		if (Blocks[index].DataCompress == nullptr)
		{
			Mutex.unlock();
			return false;
		}

		auto* block = &Blocks[index];

		block->Mutex.lock();
		Mutex.unlock();

		data.SetNum(block->SizeCompress / sizeof(int64));
		memcpy(data.GetData(), block->DataCompress, block->SizeCompress);

		block->Mutex.unlock();
		return true;
	}

	bool Check(int index) {
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("CacheCheck");
		auto block = &Blocks[index];
		block->Mutex.lock();
		Mutex.unlock();
		if (block->DataCompress == nullptr)
		{
			block->Mutex.unlock();
			return false;
		}
		block->Mutex.unlock();
		return true;
	}

	void Save(std::fstream& out) {
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("CacheSave");
		size_t nextPosition = sizeof(FCacheKey);
		out.seekp(nextPosition);
		out.write((char*)&BlocksSaved, sizeof(int32));
		nextPosition += sizeof(int32);
		out.seekp(nextPosition);
		out.write((char*)&ReadCount, sizeof(int32));
		nextPosition += sizeof(int32);
		out.seekp(nextPosition);
		out.write((char*)&WriteCount, sizeof(int32));
		nextPosition += sizeof(int32);
		for (int i = 0; i < 512; i++)
		{
			Blocks[i].Mutex.lock();
			out.seekp(nextPosition);
			out.write((char*)&Blocks[i].SizeCompress, sizeof(size_t));
			nextPosition += sizeof(size_t);
			out.seekp(nextPosition);
			if (Blocks[i].DataCompress != nullptr)
				out.write((char*)Blocks[i].DataCompress, Blocks[i].SizeCompress);
			nextPosition += Blocks[i].SizeCompress;
			Blocks[i].Mutex.unlock();
		}
		Mutex.unlock();
	}

	int64 GetSize() {
		int64 size = sizeof(FCacheFile);
		for (int i = 0; i < 512; i++)
		{
			size += Blocks[i].SizeCompress;
		}
		return size;
	}
};

class FCacheManager {
private:
	std::atomic<bool> IsCleaning = false;
	std::vector<FCacheFile*> CacheFiles;
	FString Path;
	int64 LastUse = 0;
	FCacheKey Hash;
public:
	std::mutex Mutex;

	FCacheManager(FString Path, FCacheKey hash) : Path(Path), Hash(hash) {}

	~FCacheManager() {
		for (auto cache : CacheFiles) {
			delete cache;
		}
	}

	inline int GetIndex(int X, int Y, int Z, int W) {
		return ((X < 0 ? -X : X)) % 8 + (((Y < 0 ? -Y : Y)) % 8) * 8 + (((Z < 0 ? -Z : Z)) % 8) * 8 * 8;
	}

	inline FCacheKey GetKey(int X, int Y, int Z, int W) {

		FCacheKey key = { 0,0,0,0 };
		key.X = X / 8 + (X < 0 ? -1 : 0);
		key.Y = Y / 8 + (Y < 0 ? -1 : 0);
		key.Z = Z / 8 + (Z < 0 ? -1 : 0);
		key.W = W;

		return key;
	}

	void Write(int32* data, size_t size, int X, int Y, int Z, int W, bool ignoreMutex = false) {
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("Cache");
		auto key = GetKey(X, Y, Z, W);
		int index = GetIndex(X, Y, Z, W);

		if(!ignoreMutex)
		Mutex.lock();
		for (auto cache : CacheFiles)
		{
			if (cache->Key == key)
			{
				cache->Mutex.lock();
				if (!ignoreMutex)
				Mutex.unlock();
				cache->Write(data, index, LastUse++);
				return;
			}
		}

		if (!Path.IsEmpty()) {
			std::fstream in;
			in.open(*(Path + FString::FromInt(key.X) + "o" + FString::FromInt(key.Y) + "o" + FString::FromInt(key.Z) + "o" + FString::FromInt(key.W) + ".bin"), std::ios::binary | std::ios::in);

			if (in.is_open()) {
				FCacheKey hash;
				in.seekg(0);
				in.read((char*)&hash, sizeof(FCacheKey));
				if (hash == Hash) {
					auto cache = new FCacheFile(&in, size, LastUse++, key);
					in.close();
					CacheFiles.push_back(cache);
					cache->Mutex.lock();
					if (!ignoreMutex)
					Mutex.unlock();
					cache->Write(data, index, LastUse++);
					return;
				}
				else {
					in.close();
				}
			}
		}

		auto cache = new FCacheFile(nullptr, size, LastUse++, key);
		CacheFiles.push_back(cache);
		cache->Mutex.lock();
		if (!ignoreMutex)
		Mutex.unlock();
		cache->Write(data, index, LastUse++);
		return;
	}

	void JustWriteFromArray(TArray<int64>& data, size_t size, int X, int Y, int Z, int W) {
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("Cache");
		auto key = GetKey(X, Y, Z, W);
		int index = GetIndex(X, Y, Z, W);

		Mutex.lock();
		for (auto cache : CacheFiles)
		{
			if (cache->Key == key)
			{
				cache->Mutex.lock();
				Mutex.unlock();
				cache->JustWriteFromArray(data, index, LastUse++);
				return;
			}
		}

		if (!Path.IsEmpty()) {
			std::fstream in;
			in.open(*(Path + FString::FromInt(key.X) + "o" + FString::FromInt(key.Y) + "o" + FString::FromInt(key.Z) + "o" + FString::FromInt(key.W) + ".bin"), std::ios::binary | std::ios::in);

			if (in.is_open()) {
				FCacheKey hash;
				in.seekg(0);
				in.read((char*)&hash, sizeof(FCacheKey));
				if (hash == Hash) {
					auto cache = new FCacheFile(&in, size, LastUse++, key);
					in.close();
					CacheFiles.push_back(cache);
					cache->Mutex.lock();
					Mutex.unlock();
					cache->JustWriteFromArray(data, index, LastUse++);
					return;
				}
				else {
					in.close();
				}
			}
		}

		auto cache = new FCacheFile(nullptr, size, LastUse++, key);
		CacheFiles.push_back(cache);
		cache->Mutex.lock();
		Mutex.unlock();
		cache->JustWriteFromArray(data, index, LastUse++);
		return;
	}

	bool Read(int32* data, size_t size, int X, int Y, int Z, int W, bool ignoreMutex = false) {
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("Cache");
		auto key = GetKey(X, Y, Z, W);
		int index = GetIndex(X, Y, Z, W);
		if (!ignoreMutex)
		Mutex.lock();
		for (auto cache : CacheFiles)
		{
			if (cache->Key == key)
			{
				cache->Mutex.lock();
				if (!ignoreMutex)
				Mutex.unlock();
				bool result = cache->Read(data, index, LastUse++);
				return result;
			}
		}
		if (!Path.IsEmpty()) {
			std::fstream in;
			in.open(*(Path + FString::FromInt(key.X) + "o" + FString::FromInt(key.Y) + "o" + FString::FromInt(key.Z) + "o" + FString::FromInt(key.W) + ".bin"), std::ios::binary | std::ios::in);

			if (in.is_open()) {
				FCacheKey hash;
				in.seekg(0);
				in.read((char*)&hash, sizeof(FCacheKey));
				if (hash == Hash) {
					auto cache = new FCacheFile(&in, size, LastUse++, key);
					in.close();
					CacheFiles.push_back(cache);
					cache->Mutex.lock();
					if (!ignoreMutex)
					Mutex.unlock();
					bool result = cache->Read(data, index, LastUse++);
					return result;
				}
				else {
					in.close();
				}
			}
		}
		if (!ignoreMutex)
		Mutex.unlock();
		return false;
	}

	//This function is used to read data to TArray<int64> instead of int32* no decompression, just copy good for fast transfer
	bool JustReadToArray(TArray<int64>& data, size_t size, int X, int Y, int Z, int W) {
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("Cache");
		auto key = GetKey(X, Y, Z, W);
		int index = GetIndex(X, Y, Z, W);

		Mutex.lock();
		for (auto cache : CacheFiles)
		{
			if (cache->Key == key)
			{
				cache->Mutex.lock();
				Mutex.unlock();
				bool result = cache->JustReadToArray(data, index, LastUse++);
				return result;
			}
		}
		if (!Path.IsEmpty()) {
			std::fstream in;
			in.open(*(Path + FString::FromInt(key.X) + "o" + FString::FromInt(key.Y) + "o" + FString::FromInt(key.Z) + "o" + FString::FromInt(key.W) + ".bin"), std::ios::binary | std::ios::in);

			if (in.is_open()) {
				FCacheKey hash;
				in.seekg(0);
				in.read((char*)&hash, sizeof(FCacheKey));
				if (hash == Hash) {
					auto cache = new FCacheFile(&in, size, LastUse++, key);
					in.close();
					CacheFiles.push_back(cache);
					cache->Mutex.lock();
					Mutex.unlock();
					bool result = cache->JustReadToArray(data, index, LastUse++);
					return result;
				}
				else {
					in.close();
				}
			}
		}
		Mutex.unlock();
		return false;
	}

	void HelpDecompressArray(TArray<int64>& arr, int32* data) {
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("Cache");

		auto arrex = arr.GetData();

		int64* data64 = (int64*)data;
		int64 nextNewEntry = 0;

		for (int64 k = 0; k < arr.Num(); k += 2)
		{
			for (int64 l = 0; l < arrex[k + 1]; l++)
			{
				data64[nextNewEntry] = arrex[k];
				nextNewEntry++;
			}
		}
	}

	bool Check(size_t size, int X, int Y, int Z, int W) {
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("Cache");
		auto key = GetKey(X, Y, Z, W);
		int index = GetIndex(X, Y, Z, W);

		Mutex.lock();
		for (auto cache : CacheFiles)
		{
			if (cache->Key == key)
			{
				cache->Mutex.lock();
				Mutex.unlock();
				bool result = cache->Check(index);
				return result;
			}
		}
		if (!Path.IsEmpty()) {
			std::fstream in;
			in.open(*(Path + FString::FromInt(key.X) + "o" + FString::FromInt(key.Y) + "o" + FString::FromInt(key.Z) + "o" + FString::FromInt(key.W) + ".bin"), std::ios::binary | std::ios::in);

			if (in.is_open()) {
				FCacheKey hash;
				in.seekg(0);
				in.read((char*)&hash, sizeof(FCacheKey));
				if (hash == Hash) {
					auto cache = new FCacheFile(&in, size, LastUse++, key);
					in.close();
					CacheFiles.push_back(cache);
					cache->Mutex.lock();
					Mutex.unlock();
					bool result = cache->Check(index);
					return result;
				}
				else {
					in.close();
				}
			}
		}
		Mutex.unlock();
		return false;
	}

	bool FileCheck(FCacheKey key) {
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("Cache");
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("CacheFileCheck");
		Mutex.lock();
		for (auto cache : CacheFiles)
		{
			if (cache->Key == key)
			{
				cache->Mutex.lock();
				Mutex.unlock();
				bool result = cache->BlocksSaved == 512;
				cache->Mutex.unlock();
				return result;
			}
		}
		if (!Path.IsEmpty()) {
			std::fstream in;
			in.open(*(Path + FString::FromInt(key.X) + "o" + FString::FromInt(key.Y) + "o" + FString::FromInt(key.Z) + "o" + FString::FromInt(key.W) + ".bin"), std::ios::binary | std::ios::in);

			if (in.is_open()) {
				FCacheKey hash;
				in.seekg(0);
				in.read((char*)&hash, sizeof(FCacheKey));
				if (hash == Hash) {
					int BlocksSaved = 0;
					in.seekg(sizeof(FCacheKey));
					in.read((char*)&BlocksSaved, sizeof(int32));
					in.close();
					Mutex.unlock();
					return BlocksSaved == 512;
				}
				else {
					in.close();
				}
			}
		}
		Mutex.unlock();
		return false;
	}

	void Save() { //Main Thread Only
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("Cache");
		std::fstream out;
		for (auto cache : CacheFiles) {
			out.open(*(Path + FString::FromInt(cache->Key.X) + "o" + FString::FromInt(cache->Key.Y) + "o" + FString::FromInt(cache->Key.Z) + "o" + FString::FromInt(cache->Key.W) + ".bin"), std::ios::binary | std::ios::out | std::ios::trunc);
			out.write((char*)&Hash, sizeof(FCacheKey));
			cache->Mutex.lock();
			cache->Save(out);
			out.close();
		}
	}

	int64 GetSize() { //Main Thread Only
		if (IsCleaning)
			return 0;

		Mutex.lock();
		int64 size = sizeof(FCacheManager);
		for (auto cache : CacheFiles) {
			size += cache->GetSize();
		}
		Mutex.unlock();
		return size;
	}

	void CleanUp() { //Only function that deletes cache files
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("Cache");
		int64 lastUse = LastUse + 100;

		IsCleaning = true;

		Mutex.lock();
		std::vector<int> toDelete = std::vector<int>();
		toDelete.reserve(CacheFiles.size());
		for (int i = CacheFiles.size() - 1; i > -1; i--)
		{
			if (CacheFiles[i]->LastUse < lastUse)
			{
				lastUse = CacheFiles[i]->LastUse;
				toDelete.push_back(i);
			}
		}
		int wantedDelete = CacheFiles.size() / 10 + 1;
		int toDeleteStart = toDelete.size() - wantedDelete;
		if (toDeleteStart < 0)
			toDeleteStart = 0;
		for (int i = toDeleteStart; i < toDelete.size() && wantedDelete > 0; i++)
		{
			auto index = toDelete[i];

			if (Path.IsEmpty())
			{
				delete CacheFiles[index];
				CacheFiles.erase(CacheFiles.begin() + index);
			}
			else {

				std::fstream out;
				out.open(*(Path + FString::FromInt(CacheFiles[index]->Key.X) + "o" + FString::FromInt(CacheFiles[index]->Key.Y) + "o" + FString::FromInt(CacheFiles[index]->Key.Z) + "o" + FString::FromInt(CacheFiles[index]->Key.W) + ".bin"), std::ios::binary | std::ios::out | std::ios::trunc);
				out.write((char*)&Hash, sizeof(FCacheKey));
				CacheFiles[index]->Mutex.lock();
				CacheFiles[index]->Save(out);
				out.close();
				delete CacheFiles[index];
				CacheFiles.erase(CacheFiles.begin() + index);
			}
			wantedDelete--;
		}
		IsCleaning = false;
		Mutex.unlock();
	}

	FIntVector2 GetStates() { //Main Thread Only
		int32 read = 0;
		int32 write = 0;
		for (auto cache : CacheFiles) {
			read += cache->ReadCount;
			write += cache->WriteCount;
		}
		return FIntVector2(read, write);

	}
};
