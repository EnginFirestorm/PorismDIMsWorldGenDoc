// Copyright by EnginFirestorm, All Rights Reserved.

#include "ChunkWorld.h"
#include "FastNoiseEditor.h"

// Sets default values
AChunkWorld::AChunkWorld()
{
	SetReplicates(true);
	FWorldDelegates::OnPreWorldInitialization.AddUObject(this, &AChunkWorld::StopGen);
}

void AChunkWorld::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	LastDeltaTime = DeltaTime;
	if (GameThreadWorkWaitings)
	{
		GameThreadWorkWaitings = false;
		DoGameThreadWork();
	}

	if (RenderThreadWorkWaitings)
	{
		for (int i = 0; i < 8; i++)
			ChunkComponent[i]->MarkRenderStateDirty();
		ENQUEUE_RENDER_COMMAND(StaticMeshVertexBuffersLegacyInit)(
			[this](FRHICommandListImmediate& RHICmdList) {
				RenderThreadWorkWaitings = false;
				DoRenderThreadWork(RHICmdList);
			});
	}

	if (GeneratorShouldBeOnline && !GeneratorIsRunning)
	{
		StartGen();
	}
	else if (!GeneratorShouldBeOnline && GeneratorIsRunning)
	{
		StopGen();
	}

	if (!GeneratorIsRunning)
		return;

	// ----------------- WorldCache -----------------------
	auto v3 = DriveCache->GetSize() / 1024 / 1024;
	auto v5 = DriveSave->GetSize() / 1024 / 1024;
	if (v3 > 512)
	{
		PlanCacheCleanUp = true;
	}
	// ----------------- WorldCache -----------------------
	// ----------------- WorldDebug -----------------------

	auto transform = GetTransform();
	FVector viewLocation;
	FVector viewVector;
#if WITH_EDITOR
	if (WorldLoaders.Num() == 0 || !WorldLoaders[0]->GetClass()->ImplementsInterface(UChunkWorldWalker::StaticClass())) {
		viewLocation = transform.InverseTransformPosition(GCurrentLevelEditingViewportClient->GetViewTransform().GetLocation());
		viewVector = transform.InverseTransformVector(GCurrentLevelEditingViewportClient->GetViewTransform().GetRotation().Vector());
	}
	else
#endif
#if UE_BUILD_DEVELOPMENT

	{
		viewLocation = transform.InverseTransformPosition(IChunkWorldWalker::Execute_GetTracingLocation(WorldLoaders[0]));
		viewVector = transform.InverseTransformVector(IChunkWorldWalker::Execute_GetTracingVector(WorldLoaders[0]));
	}
	if (ShowDebugData) {

		ChunkTasksKey.lock();

		int chunkTasksCount = 0;
		for (auto ChunkTask : ChunkTasks)chunkTasksCount += ChunkTask->Num();
		GEngine->AddOnScreenDebugMessage(0, 1.0f, FColor::Yellow, FString("ChunkTasksOpen: ") + FString::FromInt(chunkTasksCount));

		GEngine->AddOnScreenDebugMessage(1, 1.0f, FColor::Yellow, FString("Threads: ") + FString::FromInt(TaskCount) + "+" + FString::FromInt(TaskSecCount) + "+" + FString::FromInt(TaskFileCount));
		ChunkTasksKey.unlock();
		GEngine->AddOnScreenDebugMessage(2, 1.0f, FColor::Yellow, FString("ChunksLoaded: ") + FString::FromInt(ChunksLoaded));
		GEngine->AddOnScreenDebugMessage(3, 1.0f, FColor::Yellow, FString("ViewRangeFactor: ") + FString::SanitizeFloat(FrameViewRangeFactorNow));
		int32* dat = (int32*)&ReportCounters;
		GEngine->AddOnScreenDebugMessage(4, 1.0f, FColor::Orange, FString("MeshPoints: nativ ") + FString::FromInt(dat[0]) + FString(" optimized ") + FString::FromInt(dat[1])
			+ FString(" collision ") + FString::FromInt(dat[2]));

		GEngine->AddOnScreenDebugMessage(5, 1.0f, FColor::Orange, FString("PolyCount: nativ ") + FString::FromInt(dat[3]) + FString(" optimized ") + FString::FromInt(dat[4])
			+ FString(" collision ") + FString::FromInt(dat[5]));
		auto v = DriveCache->GetStates();

		GEngine->AddOnScreenDebugMessage(6, 1.0f, FColor::Orange, FString("ActiveCache: readed ") + FString::FromInt(v.X) + FString("+") + FString::FromInt(0)
			+ FString(" writed ") + FString::FromInt(v.Y) + FString("+") + FString::FromInt(0));
		GEngine->AddOnScreenDebugMessage(7, 1.0f, FColor::Orange, FString("MemoryCacheSize: ") + FString::FromInt(v3) + FString("+") + FString::FromInt(0) + FString(" MiB"));
		GEngine->AddOnScreenDebugMessage(8, 1.0f, FColor::Orange, FString("MemorySaveSize: ") + FString::FromInt(v5) + FString(" MiB"));
		auto dist = FVector::Dist(viewLocation / WorldGenDef->BaseBlockSize, LastCamLocation);
		GEngine->AddOnScreenDebugMessage(10, 1.0f, FColor::Cyan, FString("PosInBlocks: ") + (viewLocation / WorldGenDef->BaseBlockSize).ToString());
		LastCamLocation = FMath::VInterpConstantTo(LastCamLocation, viewLocation / WorldGenDef->BaseBlockSize, DeltaTime, dist);
		GEngine->AddOnScreenDebugMessage(11, 1.0f, FColor::Cyan, FString("Block/s: ") + FString::FromInt((dist)));
	}
#endif
	// ----------------- WorldDebug -----------------------
	// ----------------- GeneratorTargets -----------------
	GeneratorTargetsKey.lock();
	GeneratorTargets.Empty(WorldLoaders.Num() + 1);
	for (int i = WorldLoaders.Num() - 1; i > -1; i--)
	{
		if (WorldLoaders[i]->IsUnreachable() || WorldLoaders[i]->IsValidLowLevel() == false || !WorldLoaders[0]->GetClass()->ImplementsInterface(UChunkWorldWalker::StaticClass()))
		{
			WorldLoaders.RemoveAt(i);
			continue;
		}

		auto locamLocation = transform.InverseTransformPosition(IChunkWorldWalker::Execute_GetTracingLocation(WorldLoaders[i]));
		auto locamVector = transform.InverseTransformVector(IChunkWorldWalker::Execute_GetTracingVector(WorldLoaders[i]));
		TArray<double> camMulti = IChunkWorldWalker::Execute_GetViewDistanceMultiplier(WorldLoaders[i]);
		if (camMulti.Num() != WorldLoadersMultiDummy.Num())
			camMulti = WorldLoadersMultiDummy;
		GeneratorTargets.Add({ FIntVector(locamLocation.X / WorldGenDef->BaseBlockSize, locamLocation.Y / WorldGenDef->BaseBlockSize, locamLocation.Z / WorldGenDef->BaseBlockSize), locamVector, camMulti });
	}
#if WITH_EDITOR
	if (GeneratorTargets.Num() == 0)
		GeneratorTargets.Add({ FIntVector(viewLocation.X / WorldGenDef->BaseBlockSize, viewLocation.Y / WorldGenDef->BaseBlockSize, viewLocation.Z / WorldGenDef->BaseBlockSize), viewVector, WorldLoadersMultiDummy });
#endif
	GeneratorTargetsKey.unlock();
	// ----------------- GeneratorTargets -----------------
	// ----------------- WorkImpulse ----------------------

	ThreadPool->AddQueuedWork(this);

	// ----------------- WorkImpulse ----------------------
}

void AChunkWorld::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	StopGen();
}

const FString ChunkTypeChar("ChunkWorldZoneGenerator");

void AChunkWorld::StartGen()
{

	GeneratorShouldBeOnline = true;
	if (GeneratorIsRunning)
	{
		StopGen();
		GeneratorShouldBeOnline = true;
	}

	// Create WorldGenDef to read the data
	if (!WorldGenDef)
	{
		auto worldGenDef = NewObject<UWorldGenDef>(RootComponent, WorldGenDefType, NAME_None, RF_Transient | RF_TextExportTransient | RF_DuplicateTransient);
		WorldGenDef = NewObject<UWorldGenDef>(RootComponent, NAME_None, RF_Transient | RF_TextExportTransient | RF_DuplicateTransient);
		WorldGenDef->WriteDataFromBase(worldGenDef);
		WorldGenDef->AddToRoot();
		WorldGenDefPredefined = false;
	}
	else {
		WorldGenDefPredefined = true;
	}

	FString Result = WorldGenDef->InitNodes(this);
	// convert Chunk DT
	{
		FChunkData* lastSector = nullptr;
		WorldLoadersMultiDummy.Empty();

		int i = 0;
		for (const auto Row : WorldGenDef->WorldChunksDT->GetRowMap())
		{
			i++;
			WorldLoadersMultiDummy.Add(1.0);
			FChunkDataParams* Sector = (FChunkDataParams*)Row.Value;

			FChunkData* templateSector = nullptr;

			auto ChunkData = new FChunkData(*Sector, WorldGenDef->ChunkBlockSize, WorldGenDef->BaseBlockSize, i == WorldGenDef->WorldChunksDT->GetRowMap().Num(), templateSector);
			ChunkData->BlockTools = NewObject<UChunkBlock>(this, Sector->BlockTools, NAME_None, RF_NoFlags);
			ChunkData->BlockTools->AddToRoot();

			WorldChunks.push_back(ChunkData);

			ChunkData->Debug = DebugColors;

			if (lastSector)
			{
				lastSector->ChildGridSize = FIntVector(lastSector->ChunkSize.X / ChunkData->ChunkSize.X, lastSector->ChunkSize.Y / ChunkData->ChunkSize.Y, lastSector->ChunkSize.Z / ChunkData->ChunkSize.Z);
				lastSector->ChildCount = lastSector->ChildGridSize.X * lastSector->ChildGridSize.Y * lastSector->ChildGridSize.Z;
			}

			ChunkData->WorldMaterials = &WorldGenDef->WorldMaterialDefs;
			ChunkUpdateCalls.Add(new TArray<FIntVector>());
			ChunkTasks.Add(new TArray<FChunk*>());
			ChunkSecTasks.Add(new TArray<FChunk*>());

			lastSector = ChunkData;
		}
	}

#define def(MAT,MATID) \
{ \
	for (auto& def : WorldGenDef->WorldMaterialDefs) \
		if (def.Material == MAT) \
			MATID = def.MaterialIndex; \
}

	{
		for(auto& mesh : WorldGenDef->WorldMeshes)
		{
			if (mesh.Material)
				def(mesh.Material, mesh.MaterialIndex)
		}
	}

	// Init Biomes
	{
		for (auto& Biome : WorldGenDef->WorldBiomes)
		{
			int materialCount = 0;


			if (Biome.OceanMaterial && Biome.OverwriteWorldOcean)
				def(Biome.OceanMaterial, Biome.OceanMaterialIndex)
			else if (Biome.OverwriteWorldOcean)
			{
			}
			else if (WorldGenDef->OceanDefaultMaterial)
				def(WorldGenDef->OceanDefaultMaterial, Biome.OceanMaterialIndex)
			else
				Biome.OceanMaterialIndex = WorldGenDef->OceanDefaultMaterialIndex;
			if (!Biome.OverwriteWorldOcean)
			{
				Biome.GenerateOceanFlat = WorldGenDef->GenerateOceanFlat;
				Biome.GenerateOceanAroundCenter = WorldGenDef->GenerateOceanAroundCenter;
				Biome.StartingOceanHeight = WorldGenDef->StartingOceanHeight;
				Biome.RespectAirBubblesOcean = WorldGenDef->RespectAirBubblesOcean;
				Biome.MaximumOceanCavityExpansion = WorldGenDef->MaximumOceanCavityExpansion;
			}

			if (!Biome.GenUMaterials.IsEmpty())
			{
				Biome.NoiseOnly = false;
				for (auto& task : Biome.GenUMaterials)
				{
					// Set Material index
					if (task.Material != nullptr)
						def(task.Material, task.MaterialIndex)
					else if (!task.MeshId.IsEmpty())
						for (int i = 0; i < WorldGenDef->WorldMeshes.Num(); i++)
							if (WorldGenDef->WorldMeshes[i].MeshId == task.MeshId)
							{
								task.MaterialIndex = -(i + 2); // -2 is the first mesh -1 is air
								break;
							}
					// Set OnlyOnThisIndex
					if (!task.OnlyOnThis.IsEmpty())
					{
						task.OnlyOnThisIndex.Empty();
						for (auto& mat : task.OnlyOnThis)
						{
							for (auto& def : WorldGenDef->WorldMaterialDefs)
								if (def.Material == mat)
									task.OnlyOnThisIndex.Add(def.MaterialIndex);
						}
					}
					if (task.OnlyOnThisIndex.Num() != 0)
						task.OnlyOnThisNodeInit = true;

					if (task.SearchMeshId.IsEmpty())
					{
						if (task.SearchMaterial)
							def(task.SearchMaterial, task.SearchMaterialIndex)
					}
					else
						for (int i = 0; i < WorldGenDef->WorldMeshes.Num(); i++)
							if (WorldGenDef->WorldMeshes[i].MeshId == task.SearchMeshId)
							{
								task.SearchMaterialIndex = -(i + 2); // -2 is the first mesh -1 is air
								break;
							}
				}
				Biome.GenUMaterialsNodeInit = true;
			}
			if (!Biome.GenAMaterials.IsEmpty())
			{
				Biome.NoiseOnly = false;
				for (auto& task : Biome.GenAMaterials)
				{
					// Set Material index
					if (task.Material != nullptr)
						def(task.Material, task.MaterialIndex)
					else if (!task.MeshId.IsEmpty())
						for (int i = 0; i < WorldGenDef->WorldMeshes.Num(); i++)
							if (WorldGenDef->WorldMeshes[i].MeshId == task.MeshId)
							{
								task.MaterialIndex = -(i + 2); // -2 is the first mesh -1 is air
								break;
							}
					// Set OnlyOnThisIndex
					if (!task.OnlyOnThis.IsEmpty())
					{
						task.OnlyOnThisIndex.Empty();
						for (auto& mat : task.OnlyOnThis)
						{
							for (auto& def : WorldGenDef->WorldMaterialDefs)
								if (def.Material == mat)
									task.OnlyOnThisIndex.Add(def.MaterialIndex);
						}
					}
					if (task.OnlyOnThisIndex.Num() != 0)
						task.OnlyOnThisNodeInit = true;

					if (task.SearchMeshId.IsEmpty())
					{
						if (task.SearchMaterial)
							def(task.SearchMaterial, task.SearchMaterialIndex)
					}
					else
						for (int i = 0; i < WorldGenDef->WorldMeshes.Num(); i++)
							if (WorldGenDef->WorldMeshes[i].MeshId == task.SearchMeshId)
							{
								task.SearchMaterialIndex = -(i + 2); // -2 is the first mesh -1 is air
								break;
							}
				}
				Biome.GenAMaterialsNodeInit = true;
			}
			if (!Biome.GenBMaterials.IsEmpty())
			{
				Biome.NoiseOnly = false;
				for (auto& task : Biome.GenBMaterials)
				{
					// Set Material index
					if (task.Material != nullptr)
						def(task.Material, task.MaterialIndex)
					else if (!task.MeshId.IsEmpty())
						for (int i = 0; i < WorldGenDef->WorldMeshes.Num(); i++)
							if (WorldGenDef->WorldMeshes[i].MeshId == task.MeshId)
							{
								task.MaterialIndex = -(i + 2); // -2 is the first mesh -1 is air
								break;
							}
					// Set OnlyOnThisIndex
					if (!task.OnlyOnThis.IsEmpty())
					{
						task.OnlyOnThisIndex.Empty();
						for (auto& mat : task.OnlyOnThis)
						{
							for (auto& def : WorldGenDef->WorldMaterialDefs)
								if (def.Material == mat)
									task.OnlyOnThisIndex.Add(def.MaterialIndex);
						}
					}
					if (task.OnlyOnThisIndex.Num() != 0)
						task.OnlyOnThisNodeInit = true;

					if (task.SearchMeshId.IsEmpty())
					{
						if (task.SearchMaterial)
							def(task.SearchMaterial, task.SearchMaterialIndex)
					}
					else
						for (int i = 0; i < WorldGenDef->WorldMeshes.Num(); i++)
							if (WorldGenDef->WorldMeshes[i].MeshId == task.SearchMeshId)
							{
								task.SearchMaterialIndex = -(i + 2); // -2 is the first mesh -1 is air
								break;
							}
				}
				Biome.GenBMaterialsNodeInit = true;
			}
		}
	}

	// Init Cache
	{
		// Biom DT



		IPlatformFile& platformFile = FPlatformFileManager::Get().GetPlatformFile();

		if (SaveTarget.IsEmpty())
			SaveTarget = FString("ChunkWorldSave/");

		if (!platformFile.DirectoryExists(*SaveTarget))
			platformFile.CreateDirectory(*SaveTarget);

		DriveCache = new FCacheManager(FString(""), {0,0,0,0});
		DriveSave = new FCacheManager(SaveTarget, { 0,0,0,0 });
	}

	// Start ThreadPool
	{
		ThreadPool = FQueuedThreadPool::Allocate();
		ThreadPool->Create(1 + 1 + 1, 1024 * 1024, EThreadPriority::TPri_Lowest, *ChunkTypeChar);
	}

	// Create Component
	{
		//if (NetMode == NM_Client)
		//{
		//	auto& comps = GetComponents();
		//	for (int i = 0; i < comps.Num(); i++)
		//	{
		//		auto comp = comps.Array()[i];
		//		FString name = comp->GetName();
		//		if (comp->IsA(UChunkBase::StaticClass()) && name == FName("CompCunk" + FString::FromInt(i)))
		//		{
		//			ChunkComponent.push_back((UChunkBase*)comp);
		//		}
		//	}
		//}
		//else 
		{
			for (int i = 0; i < 8; i++) {
				ChunkComponent.push_back(NewObject<UChunkBase>(RootComponent, MeshComponent, FName("CompCunk" + FString::FromInt(i)), RF_Transient | RF_TextExportTransient | RF_DuplicateTransient));
				ChunkComponent[i]->AttachToComponent(RootComponent, FAttachmentTransformRules::SnapToTargetIncludingScale);
				ChunkComponent[i]->RegisterComponent();
				ChunkComponent[i]->SetRelativeTransform(FTransform(FRotator(0, 0, 0), FVector(0, 0, 0), FVector(1, 1, 1)));
			}
		}
		for (int i = 0; i < WorldGenDef->WorldMeshes.Num(); i++) {
			ChunkInstancedMesh.push_back(std::vector<FInstanceMeshData>());
		}
		for (int i = 0; i < 8; i++) {
			ChunkComponent[i]->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			for (int j = 0; j < WorldGenDef->WorldMaterialDefs.Num(); j++)
				ChunkComponent[i]->SetMaterial(j, WorldGenDef->WorldMaterialDefs[j].Material);
			ChunkComponent[i]->MaterialNum = WorldGenDef->WorldMaterialDefs.Num();
			ChunkComponent[i]->World = this;
			ChunkComponent[i]->SetVisibility(true);
			ChunkComponent[i]->SetVisibleInRayTracing(true);
		}
		ChunkComponent[0]->ActiveCollisions = &ActiveCollisions;
	}

	GeneratorIsRunning = true;

#if WITH_EDITOR
	GEngine->AddOnScreenDebugMessage(INDEX_NONE, 0.1f, FColor::Green, FString("Generator running"));
#endif
}

void AChunkWorld::StopGen()
{
	if (!GeneratorShouldBeOnline)
		return;

	GeneratorShouldBeOnline = false;

	while (TaskCount + TaskSecCount + TaskFileCount > 0)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}
	{
		DelChunksGameThreadKey.lock();
		for (auto chunk : ChunkStack)
		{
			GetThisAndChilds(chunk, &DelChunksGameThread);
		}
		DelChunksGameThreadKey.unlock();
		ChunkStack.Empty();
		ChunkStackIndex.Empty();

		DoGameThreadWork();
	}

	ChunksLoaded = 0;

	RenderChunksRenderThread.clear();
	CollisionChunksGameThread.clear();
	ActivateChunksGameThread.clear();

	delete DriveCache;
	DriveSave->Save();
	delete DriveSave;
	OrderdChunkFiles.Empty();

	for (int i = ChunkTasks.Num() - 1; i > -1; i--) {
		delete ChunkTasks[i];
		delete ChunkSecTasks[i];
	}
	for (auto sector : WorldChunks)
	{
		if (sector->BlockTools && sector->BlockTools->IsValidLowLevel())
		{
			sector->BlockTools->RemoveFromRoot();
			sector->BlockTools->ConditionalBeginDestroy();
		}
	}

	ChunkUpdateCalls.Empty();
	ChunkTasks.Empty();
	ChunkSecTasks.Empty();
	ActiveCollisions.clear();
	ThreadPool->Destroy();
	delete ThreadPool;

	for (auto coll : InstancedCollisions)
	{
		coll->BodyInstance.TermBody();
		delete coll;
	}

	InstancedCollisions.Empty();

	if (WorldGenDef && WorldGenDef->IsValidLowLevel() && !WorldGenDefPredefined)
	{
		WorldGenDef->UnLoadeGens();
		WorldGenDef->RemoveFromRoot();
		WorldGenDef->ConditionalBeginDestroy();
		WorldGenDef = nullptr;
	}

	GeneratorIsRunning = false;

#if WITH_EDITOR
	GEngine->AddOnScreenDebugMessage(INDEX_NONE, 0.1f, FColor::Red, FString("Generator stopped"));
#endif

	WorldChunks.clear();

	for (auto chunk : ChunkComponent)
		chunk->DestroyComponent();

	ChunkComponent.clear();

	for (auto& chunks : ChunkInstancedMesh)
		for (auto& chunk : chunks)
			chunk.Mesh->DestroyComponent();

	ChunkInstancedMesh.clear();
	if(!EndGame)
		CollectGarbage(GARBAGE_COLLECTION_KEEPFLAGS, true);
}

void AChunkWorld::DeleteCache() {
}

void AChunkWorld::DeleteSave() {
	auto path = std::filesystem::path(TCHAR_TO_ANSI(*SaveTarget));
	std::filesystem::remove_all(path);
}

void AChunkWorld::ReadDebugStats(TArray<int>& chunkTasksOpen, TArray<int>& threads, int& chunksLoaded, float& viewRangeFactor, TArray<int>& meshPoints, TArray<int>& polyCount) {
	ChunkTasksKey.lock();
	chunkTasksOpen.Empty();
	for (auto ChunkTask : ChunkTasks)chunkTasksOpen.Add(ChunkTask->Num());
	ChunkTasksKey.unlock();
	threads.Empty();
	threads.Add(TaskCount);
	threads.Add(TaskSecCount);
	threads.Add(TaskFileCount);
	chunksLoaded = ChunksLoaded;
	viewRangeFactor = FrameViewRangeFactorNow;
	int32* dat = (int32*)&ReportCounters;
	meshPoints.Empty();
	meshPoints.Add(dat[0]);
	meshPoints.Add(dat[1]);
	meshPoints.Add(dat[2]);
	polyCount.Empty();
	polyCount.Add(dat[3]);
	polyCount.Add(dat[4]);
	polyCount.Add(dat[5]);
}