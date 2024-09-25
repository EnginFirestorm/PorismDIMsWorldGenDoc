// Copyright by EnginFirestorm, All Rights Reserved.

#include "ChunkWorld.h"
#include "ChunkCubic.h"
#include "ChunkHexagonal.h"
#include "ChunkCubicXA.h"

#define ValChunk(KEY)\
{\
key = KEY;\
ChunkStackKey.lock();\
index = ChunkStackIndex.Find(key);\
chunk = nullptr;\
if (index != -1)\
chunk = ChunkStack[index];\
ChunkStackKey.unlock();\
CheckChunkPos(target, key, -1, chunk, nullptr, 0, sector);\
}

void AChunkWorld::CheckChunkPoses(FTarget& target)
{
	ChunkUpdateCallsKey.lock();

	auto& sector = WorldChunks[0];

	auto pos = BlockWorldPosToChunkGridPos(target.Pos, 0);

	ReportCounters = FUint64Vector4(0, 0, 0, 0);

	FIntVector sectorCount = (FIntVector)((FVector)sector->SectorCount * (target.Multi[0] * FrameViewRangeFactorNow > 1.0 ? target.Multi[0] * FrameViewRangeFactorNow : 1.0));
	if (WorldGenDef->AxisBehaviorX == AxisBehavior::Infinity && WorldGenDef->AxisBehaviorY == AxisBehavior::Infinity && WorldGenDef->AxisBehaviorZ == AxisBehavior::Infinity) // dont waste time for this!
		for (int x = 0; x < sectorCount.X; x++)
		{
			for (int y = 0; y < sectorCount.Y; y++)
			{
				for (int z = 0; z > -sectorCount.Z - 1; z--) // Start from top (grass)
				{
					FIntVector key;
					int index;
					FChunk* chunk;

					ValChunk(pos + FIntVector(x, y, z));
					ValChunk(pos + FIntVector(-x, -y, z));
					ValChunk(pos + FIntVector(-x, y, -z));
					ValChunk(pos + FIntVector(x, -y, -z));

					if (x != 0 && y != 0 && z != 0)
					{
						ValChunk(pos + FIntVector(-x, y, z));
						ValChunk(pos + FIntVector(x, -y, z));
						ValChunk(pos + FIntVector(x, y, -z));
						ValChunk(pos + FIntVector(-x, -y, -z));
					}
				}
			}
		}
	else // if we really need to check all
		for (int x = -sectorCount.X; x < sectorCount.X; x++)
		{
			if (WorldGenDef->AxisBehaviorX == AxisBehavior::SingleChunk)
				x = 0;

			pos.X = WorldGenDef->AxisBehaviorX == AxisBehavior::Infinity ? pos.X : 0;
			for (int y = -sectorCount.Y; y < sectorCount.Y; y++)
			{
				if (WorldGenDef->AxisBehaviorY == AxisBehavior::SingleChunk)
					y = 0;

				pos.Y = WorldGenDef->AxisBehaviorY == AxisBehavior::Infinity ? pos.Y : 0;
				for (int z = sectorCount.Z - 1; z > -sectorCount.Z - 1; z--) // Start from top (grass)
				{
					if (WorldGenDef->AxisBehaviorZ == AxisBehavior::SingleChunk)
						z = 0;

					pos.Z = WorldGenDef->AxisBehaviorZ == AxisBehavior::Infinity ? pos.Z : 0;
					auto key = pos + FIntVector(x, y, z);
					ChunkStackKey.lock();
					int index = ChunkStackIndex.Find(key);
					FChunk* chunk = nullptr;
					if (index != -1)
						chunk = ChunkStack[index];
					ChunkStackKey.unlock();
					CheckChunkPos(target, key, -1, chunk, nullptr, 0, sector);

					if (WorldGenDef->AxisBehaviorZ == AxisBehavior::SingleChunk)
						break;
				}
				if (WorldGenDef->AxisBehaviorY == AxisBehavior::SingleChunk)
					break;
			}
			if (WorldGenDef->AxisBehaviorX == AxisBehavior::SingleChunk)
				break;
		}
	ChunkUpdateCallsKey.unlock();
}

bool AChunkWorld::CheckChunkDel(FChunk* chunk) {

	if (!chunk->IsReady) // To young to die
		return false;

	bool hasChildren = false;
	for (int i = 0; i < chunk->ChunkData->ChildCount; i++)
		if (chunk->Children[i])
			hasChildren = true; // First the children need to be deleted

	if (!hasChildren && (chunk->LastCheck > 200)) {
		auto parent = chunk->Parent;
		if (parent)
		{
			for (int i = 0; i < parent->ChunkData->ChildCount; i++) // This is important if we overrun the generator
				if (parent->Children[i]) {
					if (!parent->Children[i]->IsReady)
						return false; // Chunk works on change
					for (int j = 0; j < parent->Children[i]->ChunkData->ChildCount; j++)
						if (parent->Children[i]->Children[j])
							return false; // Can not change visibility of child if child has children
				}

			chunk->Parent->Children[chunk->ParentSelfIndex] = nullptr;

			if (!parent->RenderIt) {
				parent->ShouldBeVisible = true;
				ActivateChunksGameThreadKey.lock();
				ActivateChunksGameThread.push_back(parent);
				GameThreadWorkWaitings = true;
				ActivateChunksGameThreadKey.unlock();
			}
		}
		ChunksLoaded--;

		DelChunksGameThreadKey.lock();
		chunk->IsReady = false;
		DelChunksGameThread.push_back(chunk);
		GameThreadWorkWaitings = true;
		DelChunksGameThreadKey.unlock();

		return true; // Deleted
	}
	else {
		chunk->LastCheck++;

		for (int i = 0; i < chunk->ChunkData->ChildCount; i++)
			if (chunk->Children[i])
				CheckChunkDel(chunk->Children[i]);

		return false; // Not deleted
	}
}

void AChunkWorld::CheckChunkPos(FTarget& target, FIntVector key, int childIndex, FChunk* chunk, FChunk* parent, int sectorDeep, FChunkData* sector) {


	for (int i = 0; i < ChunkUpdateCalls[sectorDeep]->Num(); i++)
	{
		if (ChunkUpdateCalls[sectorDeep]->GetData()[i] == key)
		{
			if (chunk)
			{
				if (chunk->IsReady)
				{
					chunk->UpdateMode = true;
					chunk->IsReady = false;
					ChunkTasksKey.lock();
					ChunkTasks[sectorDeep]->Add(chunk);

					ChunkTasksKey.unlock();
					ChunksLoaded--;
					ChunkUpdateCalls[sectorDeep]->RemoveAt(i, EAllowShrinking::No);
				}
			}
			else
			{
				ChunkUpdateCalls[sectorDeep]->RemoveAt(i, EAllowShrinking::No);
			}
			break;
		}
	}

	//Relevant?
	auto chunkStart = key * sector->ChunkBlockFactor;
	double dis = FVector::Dist(FVector(target.Pos), FVector(chunkStart));

	// Missing chunk?
	if (!chunk)
	{
		if (GenOrderCounter > 200 && sectorDeep != 0) // We need to stop that, its to much
			return;


		GenOrderCounter++;

		{ // NewObjects

			switch (sector->ChunkType)
			{
			case ChunkTypes::ChunkCubic:
				chunk = new FCubicChunk();
				break;
			case ChunkTypes::ChunkHexagonal:
				chunk = new FHexagonalChunk();
				break;
			case ChunkTypes::ChunkCubicX2:
				chunk = new FCubicChunkX2();
				break;
			}

			chunk->World = this;
			chunk->ChunkData = sector;
		}

		chunk->Start = chunkStart;

		chunk->Children.resize(sector->ChildCount);
		chunk->Children.assign(sector->ChildCount, nullptr);

		// Is Sector 0?
		if (sectorDeep == 0) {
			chunk->RenderIt = true;
			ChunkStackKey.lock();
			ChunkStack.Add(chunk);
			ChunkStackIndex.Add(key);
			ChunkStackKey.unlock();
		}
		else
		{
			parent->Children[childIndex] = chunk;
			chunk->Parent = parent;
			chunk->ParentSelfIndex = childIndex;
		}



		// Primary or Secondary?
		auto primSec = WorldChunks[WorldChunks.size() - 1];
		if (dis > primSec->ViewDistance * primSec->BlockFactor * 2.f && FVector::DotProduct(FVector((chunkStart)-target.Pos).GetSafeNormal(), target.Cam) < 0.5f)
		{
			ChunkSecTasksKey.lock();
			ChunkSecTasks[sectorDeep]->Add(chunk);
			ChunkSecTasksKey.unlock();
		}
		else {
			ChunkTasksKey.lock();
			ChunkTasks[sectorDeep]->Add(chunk);
			ChunkTasksKey.unlock();
		}
	}
	chunk->LastCheck = 0;
#if UE_BUILD_DEVELOPMENT
	ReportCounters += chunk->ReportPolyData();
#endif
	if (parent && parent->RenderIt && parent->ChunkData->ChildCount == chunk->ParentSelfIndex + 1) {

		bool setParentOff = true;
		for (int j = 0; j < parent->ChunkData->ChildCount; j++) {
			if (!parent->Children[j] || !parent->Children[j]->IsReady) //Check if all children are ready (Generator)
				setParentOff = false;
		}
		if (setParentOff)
		{
			parent->ShouldBeVisible = false;
			ActivateChunksGameThreadKey.lock();
			ActivateChunksGameThread.push_back(parent);
			GameThreadWorkWaitings = true;
			ActivateChunksGameThreadKey.unlock();
		}
	}
	// Do Children?
	int newSectorDeep = sectorDeep + 1;
	if (WorldChunks.size() > newSectorDeep) {
		auto newSector = WorldChunks[newSectorDeep];

		if (dis > newSector->ViewDistance * target.Multi[newSectorDeep] * FrameViewRangeFactorNow)
			return;

		auto kay = FIntVector(
			key.X * sector->ChunkFactor.X / newSector->ChunkFactor.X
			, key.Y * sector->ChunkFactor.Y / newSector->ChunkFactor.Y
			, key.Z * sector->ChunkFactor.Z / newSector->ChunkFactor.Z);
		for (int x = 0; x < sector->ChildGridSize.X; x++)
			for (int y = 0; y < sector->ChildGridSize.Y; y++)
				for (int z = 0; z < sector->ChildGridSize.Z; z++)
				{
					int index = z * sector->ChildGridSize.X * sector->ChildGridSize.Y + y * sector->ChildGridSize.X + x;

					CheckChunkPos(target, FIntVector(x + kay.X, y + kay.Y, z + kay.Z), index, chunk->Children[index], chunk, newSectorDeep, newSector);
				}
	}
}

void AChunkWorld::PregenerateChunkFiles(char* virtualStack, FTarget target)
{
	for (auto sector : WorldChunks)
	{
		auto pos = FIntVector(target.Pos.X / sector->ChunkBlockFactor.X / 8, target.Pos.Y / sector->ChunkBlockFactor.Y / 8, target.Pos.Z / sector->ChunkBlockFactor.Z / 8);
		FCacheKey key = { 0,0,0, sector->BlockFactor };
		FIntVector nextChunkLoc = { 0,0,0 };
		for (int i = -1; i < 1; i++)
		{
			key.X = pos.X + i;
			for (int j = -1; j < 1; j++)
			{
				key.Y = pos.Y + j;
				for (int k = 1; k > -1; k--) // better to start from the top (Grass check)
				{
					key.Z = pos.Z + k;

					if (!GeneratorShouldBeOnline) // Force a generator hard stop, this makes the generator able to stop in one frame
						break;

					OrderdChunkFilesKey.lock();

					bool result = OrderdChunkFiles.Contains(key);

					if (result)
						OrderdChunkFilesKey.unlock();
					else
					{
						TRACE_CPUPROFILER_EVENT_SCOPE_STR("GenerateChunkFile");

						OrderdChunkFiles.Add(key);
						OrderdChunkFilesKey.unlock();

						if (DriveCache->FileCheck(key)) // we dont need to gen that file 2 times
							continue;

						for (int x = 0; x < 8; x++)
						{
							nextChunkLoc.X = (key.X * 8 + x) * sector->ChunkBlockFactor.X;

							for (int y = 0; y < 8; y++)
							{
								nextChunkLoc.Y = (key.Y * 8 + y) * sector->ChunkBlockFactor.Y;

								for (int z = 7; z > -1; z--) // better to start from the top (Grass check)
								{
									nextChunkLoc.Z = (key.Z * 8 + z) * sector->ChunkBlockFactor.Z;

									if (DriveCache->Check(sector->PointBufferSize, nextChunkLoc.X / sector->ChunkBlockFactor.X, nextChunkLoc.Y / sector->ChunkBlockFactor.X, nextChunkLoc.Z / sector->ChunkBlockFactor.X, sector->BlockFactor)) // we dont need to gen that chunk 2 times
										continue;

									std::vector<FTempChunkData> temp;
									GenerateChunk(&temp, sector, nextChunkLoc, virtualStack, true);
								}
							}
						}
					}
				}
			}
		}
	}
}

void AChunkWorld::DoThreadedWork() {
	/*UGameplayStatics::GetGameInstance(GetWorld())->Shutdown();*/
	bool checkChunks = false;

	if (UseChunkAutoRefresh)
	{
		if (!CheckChunkPosesIsRunning) // Plan pos check
		{
			CheckChunkPosesIsRunning = true;
			TRACE_CPUPROFILER_EVENT_SCOPE_STR("Out of range check");
			for (int i = ChunkStack.Num() - 1; i > -1; i--) { // Check if chunk is out of range
				auto chunk = ChunkStack[i];
				if (CheckChunkDel(chunk)) {
					ChunkStackKey.lock();
					ChunkStack.RemoveAt(i, EAllowShrinking::No);
					ChunkStackIndex.RemoveAt(i, EAllowShrinking::No);
					ChunkStackKey.unlock();
				}
			}
			checkChunks = true; // Plan pos check
		}
	}
	if (PlanCacheCleanUp) // Free some memory
	{
		PlanCacheCleanUp = false;
		DriveCache->CleanUp();
		DriveSave->CleanUp();
	}

	char* virtualStack = (char*)malloc(VirtualThreadStack * 1024 * 1024);
	{
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("Primary");
		TaskCount++; // Primary Gen

		float delta;
		if(LastDeltaTime > 0.015f * 1.1)
			delta = 0.015f * 1.1; // Chill down we dont want drop the hole world, delete to much makes it worse
		else if (LastDeltaTime < 0.01f / 1.1)
		{
			delta = 0.01f / 1.1; // Same for here, dont rush it blind
		}
		else
			delta = LastDeltaTime;

		if (0.015f < delta)
			FrameViewRangeFactorNow = FMath::Min(FMath::Max(FrameViewRangeFactorNow + (0.015f - delta), 0.5f), 1.0f);
		else if (0.01f > delta)
			FrameViewRangeFactorNow = FMath::Min(FMath::Max(FrameViewRangeFactorNow + (0.01f - delta), 0.5f), 1.0f);

		ChunkTasksKey.lock();
		for (auto ChunkTask : ChunkTasks)
			while (ChunkTask->Num() > 0) {
				if (!GeneratorShouldBeOnline) // Force a generator hard stop, this makes the generator able to stop in one frame
					break;

				auto chunk = (*ChunkTask)[ChunkTask->Num() - 1];

				// Only relevant for multiplayer
				if (chunk->NeedNetSaveData)
					break;

				ChunkTask->RemoveAt(ChunkTask->Num() - 1, EAllowShrinking::No);
				GenOrderCounter--;
				ChunkTasksKey.unlock();

				auto virtualS = virtualStack;
				std::vector<FTempChunkData> temp = std::vector<FTempChunkData>();
				{
					TRACE_CPUPROFILER_EVENT_SCOPE_STR("GenerateChunkData");
					virtualS = GenerateChunk(&temp, chunk->ChunkData, chunk->Start, virtualS, true);
				}
				{
					TRACE_CPUPROFILER_EVENT_SCOPE_STR("GenerateChunkMesh");
					chunk->CreateMeshSection(&temp, virtualS);
					ChunksLoaded++;
				}
				ChunkTasksKey.lock();
			}
		ChunkTasksKey.unlock();
		TaskCount--;
	}
	if (TaskSecCount < 1) {
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("Secundary");
		TaskSecCount++; // Secundary Gen
		ChunkSecTasksKey.lock();
		for (auto ChunkTask : ChunkSecTasks)
			while (ChunkTask->Num() > 0) {
				if (!GeneratorShouldBeOnline) // Force a generator hard stop, this makes the generator able to stop in one frame
					break;

				auto chunk = (*ChunkTask)[ChunkTask->Num() - 1];

				// Only relevant for multiplayer
				if (chunk->NeedNetSaveData)
					break;

				ChunkTask->RemoveAt(ChunkTask->Num() - 1, EAllowShrinking::No);
				GenOrderCounter--;
				ChunkSecTasksKey.unlock();
				auto virtualS = virtualStack;
				std::vector<FTempChunkData> temp = std::vector<FTempChunkData>();
				{
					TRACE_CPUPROFILER_EVENT_SCOPE_STR("GenerateChunkData");
					virtualS = GenerateChunk(&temp, chunk->ChunkData, chunk->Start, virtualS, true);
				}
				{
					TRACE_CPUPROFILER_EVENT_SCOPE_STR("GenerateChunkMesh");
					chunk->CreateMeshSection(&temp, virtualS);
					ChunksLoaded++;
				}
				ChunkSecTasksKey.lock();
			}
		ChunkSecTasksKey.unlock();
		TaskSecCount--;
	}
	if (TaskFileCount < 1 || checkChunks) {
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("CheckChunkFile");
		TaskFileCount++; // File Gen is sharing with pos check
		GeneratorTargetsKey.lock();
		while (GeneratorTargets.Num() > 0) {
			if (!GeneratorShouldBeOnline) // Force a generator hard stop, this makes the generator able to stop in one frame
				break;

			auto target = GeneratorTargets[GeneratorTargets.Num() - 1];
			GeneratorTargets.RemoveAt(GeneratorTargets.Num() - 1, EAllowShrinking::No);
			GeneratorTargetsKey.unlock();

			if (checkChunks)
			{
				TRACE_CPUPROFILER_EVENT_SCOPE_STR("CheckChunkPoses");
				CheckChunkPoses(target);
			}
			else
			{
				TRACE_CPUPROFILER_EVENT_SCOPE_STR("PregenerateChunkFiles");
				PregenerateChunkFiles(virtualStack, target);
			}
			GeneratorTargetsKey.lock();
		}
		GeneratorTargetsKey.unlock();
		TaskFileCount--;
	}
	free(virtualStack);
	if (checkChunks)
		CheckChunkPosesIsRunning = false;
}