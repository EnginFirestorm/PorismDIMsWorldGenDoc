// Copyright by EnginFirestorm, All Rights Reserved.

#include "ChunkWorld.h"

FChunkWorldHit AChunkWorld::GetChunkWorldHitByHitResult(const FHitResult hit, const bool useLocation) {
	FChunkWorldHit ret = FChunkWorldHit();

	if (!GeneratorIsRunning || hit.GetActor() != this || hit.Item == -1)
	{
		ret.CheckSuccess = false;
		return ret;
	}

	if (hit.Component == ChunkComponent[1])
	{
		auto collision = InstancedCollisions[hit.Item];
		ret.Chunk.Chunk = collision->Chunk;

		auto chunkData = collision->Chunk->ChunkData;

		for (int i = 0; i < WorldChunks.size(); i++)
		{
			if (WorldChunks[i] == chunkData)
				ret.DetailLevel = i;
		}

		ret.ChunkWasReadyToUse = ret.Chunk.Chunk->IsReady;

		ret.MaterialIndex = -(collision->MeshEntry->MeshIndex + 2);
		ret.Mesh = collision->MeshEntry->Mesh;
		ret.BlockWorldPos = collision->WorldPos;
		ret.BlockChunkPos = BlockWorldPosToBlockChunkPos(ret.BlockWorldPos, chunkData);
		ret.BlockChunkIndex = BlockChunkPosToBlockChunkIndex(ret.BlockChunkPos, chunkData);
		ret.ChunkGridPos = BlockWorldPosToChunkGridPos(ret.BlockWorldPos, chunkData);
		return ret;
	}

	auto chunk = ActiveCollisions[hit.Item];
	ret.Chunk.Chunk = chunk->OwnerChunk;
	auto chunkData = chunk->OwnerChunk->ChunkData;
	if (chunk == nullptr)
	{
		ret.CheckSuccess = false;
		return ret;
	}

	for (int i = 0; i < WorldChunks.size(); i++)
	{
		if (WorldChunks[i] == chunkData)
			ret.DetailLevel = i;
	}

	ret.ChunkWasReadyToUse = ret.Chunk.Chunk->IsReady;

	if (useLocation)
	{
		auto blockWorldPos = UEWorldPosToBlockWorldPos(hit.Location - (hit.Normal * chunkData->BlockSize / 2));

		ret.MaterialIndex = GetBlockValueByBlockWorldPosLevel(blockWorldPos, chunkData);
		ret.Material = MaterialIndexToMaterial(ret.MaterialIndex);
		ret.BlockChunkPos = BlockWorldPosToBlockChunkPos(blockWorldPos, chunkData);
		ret.BlockChunkIndex = BlockChunkPosToBlockChunkIndex(ret.BlockChunkPos, chunkData);
	}
	else
	{
		if (hit.FaceIndex == -1)
		{
			ret.CheckSuccess = false;
			return ret;
		}
		auto matIndex = chunk->LowMaterialIndexBuffer[hit.FaceIndex];
		ret.MaterialIndex = chunk->FinalMeshSections->data()[matIndex].MaterialIndex;
		ret.Material = chunk->FinalMeshSections->data()[matIndex].Material;
		ret.BlockChunkIndex = chunk->LowBlockIndexBuffer[hit.FaceIndex];
		ret.BlockChunkPos = BlockChunkIndexToBlockChunkPos(ret.BlockChunkIndex, chunkData);
	}

	ret.BlockWorldPos = BlockChunkPosToBlockWorldPos(ret.BlockChunkPos, ret.Chunk);
	ret.ChunkGridPos = BlockWorldPosToChunkGridPos(ret.BlockWorldPos, chunkData);

	return ret;
}

FIntVector AChunkWorld::UEWorldPosToBlockWorldPos(const FVector ueWorldPos) const
{
	auto chunkData = WorldChunks[WorldChunks.size() - 1];
	auto localvec = this->GetActorTransform().InverseTransformPosition(ueWorldPos);
	return FIntVector(FMath::FloorToInt(localvec.X / chunkData->BlockSize), FMath::FloorToInt(localvec.Y / chunkData->BlockSize), FMath::FloorToInt(localvec.Z / chunkData->BlockSize));
}

FIntVector AChunkWorld::BlockWorldPosToBlockChunkPos(const FIntVector blockWorldPos, const int detailLevel) const
{
	return BlockWorldPosToBlockChunkPos(blockWorldPos, WorldChunks[detailLevel]);
}

FIntVector AChunkWorld::BlockWorldPosToBlockChunkPos(const FIntVector blockWorldPos, const FChunkData* chunkData) const
{
	check(IsValidLowLevel());
	auto pos = FIntVector();
	if (blockWorldPos.X < 0)
		pos.X = blockWorldPos.X + (FMath::Abs(blockWorldPos.X / chunkData->ChunkBlockFactor.X) * chunkData->ChunkBlockFactor.X + chunkData->ChunkBlockFactor.X);
	else
		pos.X = blockWorldPos.X;
	if (blockWorldPos.Y < 0)
		pos.Y = blockWorldPos.Y + (FMath::Abs(blockWorldPos.Y / chunkData->ChunkBlockFactor.Y) * chunkData->ChunkBlockFactor.Y + chunkData->ChunkBlockFactor.Y);
	else
		pos.Y = blockWorldPos.Y;
	if (blockWorldPos.Z < 0)
		pos.Z = blockWorldPos.Z + (FMath::Abs(blockWorldPos.Z / chunkData->ChunkBlockFactor.Z) * chunkData->ChunkBlockFactor.Z + chunkData->ChunkBlockFactor.Z);
	else
		pos.Z = blockWorldPos.Z;

	pos = FIntVector(pos.X % chunkData->ChunkBlockFactor.X / chunkData->BlockFactor, pos.Y % chunkData->ChunkBlockFactor.Y / chunkData->BlockFactor, pos.Z % chunkData->ChunkBlockFactor.Z / chunkData->BlockFactor);


	//Why +1? Because the visual chunk starts at 1,1,1 , 0,0,0 is the border of the chunk and just there for efficiency reasons
	return pos + FIntVector(1, 1, 1);
}

FIntVector AChunkWorld::BlockChunkPosToBlockWorldPos(const FIntVector blockChunkPos, const FChunkRef chunk) const
{
	auto chunkData = chunk.Chunk->ChunkData;
	return FIntVector((chunk.Chunk->Start.X + (blockChunkPos.X - 1) * chunkData->BlockFactor), (chunk.Chunk->Start.Y + (blockChunkPos.Y - 1) * chunkData->BlockFactor), (chunk.Chunk->Start.Z + (blockChunkPos.Z - 1) * chunkData->BlockFactor));
}

FIntVector AChunkWorld::BlockWorldPosToChunkGridPos(const FIntVector blockWorldPos, const int detailLevel) const
{
	return BlockWorldPosToChunkGridPos(blockWorldPos, WorldChunks[detailLevel]);
}

FIntVector AChunkWorld::BlockWorldPosToChunkGridPos(const FIntVector blockWorldPos, const FChunkData* chunkData) const
{
	FIntVector pos;
	if (blockWorldPos.X < 0)
		pos.X = (blockWorldPos.X + 1) / chunkData->ChunkBlockFactor.X - 1;
	else
		pos.X = blockWorldPos.X / chunkData->ChunkBlockFactor.X;
	if (blockWorldPos.Y < 0)
		pos.Y = (blockWorldPos.Y + 1) / chunkData->ChunkBlockFactor.Y - 1;
	else
		pos.Y = blockWorldPos.Y / chunkData->ChunkBlockFactor.Y;
	if (blockWorldPos.Z < 0)
		pos.Z = (blockWorldPos.Z + 1) / chunkData->ChunkBlockFactor.Z - 1;
	else
		pos.Z = blockWorldPos.Z / chunkData->ChunkBlockFactor.Z;
	return pos;
}

FIntVector AChunkWorld::ChunkGridPosToBlockWorldPos(const FIntVector chunkGridPos, const int detailLevel) const
{
	return ChunkGridPosToBlockWorldPos(chunkGridPos, WorldChunks[detailLevel]);
}

FIntVector AChunkWorld::ChunkGridPosToBlockWorldPos(const FIntVector chunkGridPos, const FChunkData* chunkData) const
{
	return chunkGridPos * chunkData->ChunkBlockFactor;
}

int AChunkWorld::BlockChunkPosToBlockChunkIndex(const FIntVector blockChunkPos, const int detailLevel) const {
	return BlockChunkPosToBlockChunkIndex(blockChunkPos, WorldChunks[detailLevel]);
}

int AChunkWorld::BlockChunkPosToBlockChunkIndex(const FIntVector blockChunkPos, const FChunkData* chunkData) const {
	return blockChunkPos.X + (blockChunkPos.Y * chunkData->PointCount.X) + (blockChunkPos.Z * chunkData->PointCount.X * chunkData->PointCount.Y);
}

FIntVector AChunkWorld::BlockChunkIndexToBlockChunkPos(const int blockChunkIndex, const int detailLevel) const {
	return BlockChunkIndexToBlockChunkPos(blockChunkIndex, WorldChunks[detailLevel]);
}

FIntVector AChunkWorld::BlockChunkIndexToBlockChunkPos(const int blockChunkIndex, const FChunkData* chunkData) const {
	FIntVector ret;
	ret.X = blockChunkIndex % chunkData->PointCount.X;
	ret.Y = (blockChunkIndex / chunkData->PointCount.X) % chunkData->PointCount.Y;
	ret.Z = blockChunkIndex / (chunkData->PointCount.X * chunkData->PointCount.Y);
	return ret;
}

int AChunkWorld::MaterialToMaterialIndex(UMaterialInterface* material) const {
	for (auto& def : WorldGenDef->WorldMaterialDefs)
		if (def.Material == material)
			return def.MaterialIndex;
	return -1;
}

UMaterialInterface* AChunkWorld::MaterialIndexToMaterial(int materialIndex) const {
	if (WorldGenDef->WorldMaterialDefs.Num() > materialIndex && materialIndex > -1)
		return WorldGenDef->WorldMaterialDefs[materialIndex].Material;
	else
		return nullptr;
}

#define addtask(newchunkPosOff, newblockChunkPos)\
blockChunkIndex = BlockChunkPosToBlockChunkIndex(newblockChunkPos, chunkData);\
blockChangeCalls.Add({ chunkGridPos + newchunkPosOff, blockChunkIndex, i, materialIndex });\

int AChunkWorld::GetBlockValueByBlockWorldPos(const FIntVector blockWorldPos)
{
	return GetBlockValueByBlockWorldPosLevel(blockWorldPos, WorldChunks.size() - 1);
}

int AChunkWorld::GetBlockValueByBlockWorldPosLevel(const FIntVector blockWorldPos, const int detailLevel)
{
	return GetBlockValueByBlockWorldPosLevel(blockWorldPos, WorldChunks[detailLevel]);
}

int AChunkWorld::GetBlockValueByBlockWorldPosLevel(const FIntVector blockWorldPos, const FChunkData* chunkData)
{
	auto chunkGridPos = BlockWorldPosToChunkGridPos(blockWorldPos, chunkData);
	auto blockChunkPos = BlockWorldPosToBlockChunkPos(blockWorldPos, chunkData);
	auto blockChunkIndex = BlockChunkPosToBlockChunkIndex(blockChunkPos, chunkData);

	int32* data = (int32*)malloc(chunkData->PointBufferSize);

	int value = 0;
	if (DriveSave->Read(data, chunkData->PointBufferSize, chunkGridPos.X, chunkGridPos.Y, chunkGridPos.Z, chunkData->BlockFactor))
		value = data[blockChunkIndex];

	if (value != 0) {
		free(data);
		return value;
	}

	if (DriveCache->Read(data, chunkData->PointBufferSize, chunkGridPos.X, chunkGridPos.Y, chunkGridPos.Z, chunkData->BlockFactor))
		value = data[blockChunkIndex];

	free(data);
	return value;
}

void AChunkWorld::SetBlockValueByBlockWorldPos(const FIntVector blockWorldPos, const int materialIndex, const bool refreshChunks)
{
	SetBlockValuesByBlockWorldPos(TArray<FIntVector>({ blockWorldPos }), TArray<int>({ materialIndex }), refreshChunks);
}

void AChunkWorld::SetBlockValuesByBlockWorldPosAsync(const TArray<FIntVector>& arrBlockWorldPos, const TArray<int>& arrMaterialIndex, const bool refreshChunks)
{
	AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [this, arrBlockWorldPos, arrMaterialIndex, refreshChunks]() {
		SetBlockValuesByBlockWorldPos(arrBlockWorldPos, arrMaterialIndex, refreshChunks);
		});
}

void AChunkWorld::SetBlockValuesByBlockWorldPos(const TArray<FIntVector>& arrBlockWorldPos, const TArray<int>& arrMaterialIndex, const bool refreshChunks)
{
	TArray<FBlockChangeCall> blockChangeCalls;
	for (int o = 0; o < arrBlockWorldPos.Num(); o++)
	{
		FIntVector blockWorldPos = arrBlockWorldPos[o];
		int materialIndex = arrMaterialIndex[o];
		for (int i = 0; i < WorldChunks.size(); i++)
		{
			auto chunkData = WorldChunks[i];
			auto chunkGridPos = BlockWorldPosToChunkGridPos(blockWorldPos, chunkData);
			auto blockChunkPos = BlockWorldPosToBlockChunkPos(blockWorldPos, chunkData);
			auto blockChunkIndex = BlockChunkPosToBlockChunkIndex(blockChunkPos, chunkData);


			blockChangeCalls.Add({ chunkGridPos, blockChunkIndex, i, materialIndex });

			if (blockChunkPos.X == 1) // Looks terrible, doesn't it? Unfortunately, that's the disadvantage of storing data from the neighbors redundantly.
				//But everything for the performance, fast reading and loading of data is more important than small write corrections like here
			{
				addtask(FIntVector(-1, 0, 0), FIntVector(chunkData->PointCount.X - 1, blockChunkPos.Y, blockChunkPos.Z))
					if (blockChunkPos.Y == 1)
					{
						addtask(FIntVector(-1, -1, 0), FIntVector(chunkData->PointCount.X - 1, chunkData->PointCount.Y - 1, blockChunkPos.Z))
							if (blockChunkPos.Z == 1)
							{
								addtask(FIntVector(-1, -1, -1), FIntVector(chunkData->PointCount.X - 1, chunkData->PointCount.Y - 1, chunkData->PointCount.Z - 1))
							}
							else if (blockChunkPos.Z == chunkData->BlockCount.Z)
							{
								addtask(FIntVector(-1, -1, 1), FIntVector(chunkData->PointCount.X - 1, chunkData->PointCount.Y - 1, 0))
							}
					}
					else if (blockChunkPos.Y == chunkData->BlockCount.Y)
					{
						addtask(FIntVector(-1, 1, 0), FIntVector(chunkData->PointCount.X - 1, 0, blockChunkPos.Z))
							if (blockChunkPos.Z == 1)
							{
								addtask(FIntVector(-1, 1, -1), FIntVector(chunkData->PointCount.X - 1, 0, chunkData->PointCount.Z - 1))
							}
							else if (blockChunkPos.Z == chunkData->BlockCount.Z)
							{
								addtask(FIntVector(-1, 1, 1), FIntVector(chunkData->PointCount.X - 1, 0, 0))
							}
					}
				if (blockChunkPos.Z == 1)
				{
					addtask(FIntVector(-1, 0, -1), FIntVector(chunkData->PointCount.X - 1, blockChunkPos.Y, chunkData->PointCount.Z - 1))
				}
				else if (blockChunkPos.Z == chunkData->BlockCount.Z)
				{
					addtask(FIntVector(-1, 0, 1), FIntVector(chunkData->PointCount.X - 1, blockChunkPos.Y, 0))
				}
			}
			else if (blockChunkPos.X == chunkData->BlockCount.X)
			{
				addtask(FIntVector(1, 0, 0), FIntVector(0, blockChunkPos.Y, blockChunkPos.Z))
					if (blockChunkPos.Y == 1)
					{
						addtask(FIntVector(1, -1, 0), FIntVector(0, chunkData->PointCount.Y - 1, blockChunkPos.Z))
							if (blockChunkPos.Z == 1)
							{
								addtask(FIntVector(1, -1, -1), FIntVector(0, chunkData->PointCount.Y - 1, chunkData->PointCount.Z - 1))
							}
							else if (blockChunkPos.Z == chunkData->BlockCount.Z)
							{
								addtask(FIntVector(1, -1, 1), FIntVector(0, chunkData->PointCount.Y - 1, 0))
							}
					}
					else if (blockChunkPos.Y == chunkData->BlockCount.Y)
					{
						addtask(FIntVector(1, 1, 0), FIntVector(0, 0, blockChunkPos.Z))
							if (blockChunkPos.Z == 1)
							{
								addtask(FIntVector(1, 1, -1), FIntVector(0, 0, chunkData->PointCount.Z - 1))
							}
							else if (blockChunkPos.Z == chunkData->BlockCount.Z)
							{
								addtask(FIntVector(1, 1, 1), FIntVector(0, 0, 0))
							}
					}
				if (blockChunkPos.Z == 1)
				{
					addtask(FIntVector(1, 0, -1), FIntVector(0, blockChunkPos.Y, chunkData->PointCount.Z - 1))
				}
				else if (blockChunkPos.Z == chunkData->BlockCount.Z)
				{
					addtask(FIntVector(1, 0, 1), FIntVector(0, blockChunkPos.Y, 0))
				}
			}
			if (blockChunkPos.Y == 1)
			{
				addtask(FIntVector(0, -1, 0), FIntVector(blockChunkPos.X, chunkData->PointCount.Y - 1, blockChunkPos.Z))
					if (blockChunkPos.Z == 1)
					{
						addtask(FIntVector(0, -1, -1), FIntVector(blockChunkPos.X, chunkData->PointCount.Y - 1, chunkData->PointCount.Z - 1))
					}
					else if (blockChunkPos.Z == chunkData->BlockCount.Z)
					{
						addtask(FIntVector(0, -1, 1), FIntVector(blockChunkPos.X, chunkData->PointCount.Y - 1, 0))
					}
			}
			else if (blockChunkPos.Y == chunkData->BlockCount.Y)
			{
				addtask(FIntVector(0, 1, 0), FIntVector(blockChunkPos.X, 0, blockChunkPos.Z))
					if (blockChunkPos.Z == 1)
					{
						addtask(FIntVector(0, 1, -1), FIntVector(blockChunkPos.X, 0, chunkData->PointCount.Z - 1))
					}
					else if (blockChunkPos.Z == chunkData->BlockCount.Z)
					{
						addtask(FIntVector(0, 1, 1), FIntVector(blockChunkPos.X, 0, 0))
					}
			}
			if (blockChunkPos.Z == 1)
			{
				addtask(FIntVector(0, 0, -1), FIntVector(blockChunkPos.X, blockChunkPos.Y, chunkData->PointCount.Z - 1))
			}
			else if (blockChunkPos.Z == chunkData->BlockCount.Z)
			{
				addtask(FIntVector(0, 0, 1), FIntVector(blockChunkPos.X, blockChunkPos.Y, 0))
			}
		}
	}
	WriteBlockValuesAndUpdate(blockChangeCalls, refreshChunks);
}

void AChunkWorld::WriteBlockValuesAndUpdate(const TArray<FBlockChangeCall>& blockChangeCalls, bool refreshChunks) {
	int32* data = (int32*)malloc(VirtualThreadStack * 1024 * 1024);

	TArray<FBlockChangeCall> blockChangeCallsSort;
	blockChangeCallsSort.Append(blockChangeCalls);

	blockChangeCallsSort.Sort([](const FBlockChangeCall& A, const FBlockChangeCall& B) {
		return A.chunkDataIndex < B.chunkDataIndex || A.chunkPose.X < B.chunkPose.X;
		});

	FIntVector chunkGridPos = FIntVector();
	int chunkDataIndex = 0;

	for (int i = 0; i < blockChangeCalls.Num(); i++) {

		if ((chunkGridPos != blockChangeCallsSort[i].chunkPose || chunkDataIndex != blockChangeCallsSort[i].chunkDataIndex) || i == 0)
		{
			auto chunkData = WorldChunks[chunkDataIndex];
			if (i != 0)
			{
				DriveSave->Write(data, chunkData->PointBufferSize, chunkGridPos.X, chunkGridPos.Y, chunkGridPos.Z, chunkData->BlockFactor, true);
				DriveCache->Mutex.unlock();
			}

			chunkGridPos = blockChangeCallsSort[i].chunkPose;
			chunkDataIndex = blockChangeCallsSort[i].chunkDataIndex;
			chunkData = WorldChunks[chunkDataIndex];
			DriveCache->Mutex.lock();
			auto foundData = DriveSave->Read(data, chunkData->PointBufferSize, chunkGridPos.X, chunkGridPos.Y, chunkGridPos.Z, chunkData->BlockFactor, true);
			if (!foundData)
				memset(data, 0, chunkData->PointBufferSize);

			if (refreshChunks)
			{
				ChunkUpdateCallsKey.lock();
				bool found = false;
				for (int j = 0; j < ChunkUpdateCalls[chunkDataIndex]->Num(); j++)
					if (ChunkUpdateCalls[chunkDataIndex]->GetData()[j] == chunkGridPos)
					{
						found = true;
						break;
					}
				if (!found)
					ChunkUpdateCalls[chunkDataIndex]->Add(chunkGridPos);
				ChunkUpdateCallsKey.unlock();
			}
		}

		data[blockChangeCallsSort[i].blockChunkIndex] = blockChangeCallsSort[i].materialIndex;

		if (i == blockChangeCallsSort.Num() - 1)
		{
			auto chunkData = WorldChunks[chunkDataIndex];
			DriveSave->Write(data, chunkData->PointBufferSize, chunkGridPos.X, chunkGridPos.Y, chunkGridPos.Z, chunkData->BlockFactor, true);
			DriveCache->Mutex.unlock();
		}
	}


	free(data);
}

// Please dont use this function in c++ code, just go directly for DriveCache->Read or DriveSave->Read
TArray<int> AChunkWorld::GetBlockValuesByChunkGridPosLevel(const FIntVector ChunkGridPos, const int detailLevel, bool& found)
{
	auto chunkData = WorldChunks[detailLevel];
	TArray<int> ret;

	ret.SetNumUninitialized(chunkData->PointArraySize);

	if (!DriveCache->Read(ret.GetData(), chunkData->PointArraySize * sizeof(int32), ChunkGridPos.X, ChunkGridPos.Y, ChunkGridPos.Z, chunkData->BlockFactor))
	{
		found = false;
		return ret;
	}
	found = true;

	int32* data = (int32*)malloc(chunkData->PointBufferSize);

	if (DriveSave->Read(data, chunkData->PointBufferSize, ChunkGridPos.X, ChunkGridPos.Y, ChunkGridPos.Z, chunkData->BlockFactor))
		for (int i = 0; i < chunkData->PointArraySize; i++)
			if (data[i] != 0)
				ret[i] = data[i];

	free(data);
	return ret;
}