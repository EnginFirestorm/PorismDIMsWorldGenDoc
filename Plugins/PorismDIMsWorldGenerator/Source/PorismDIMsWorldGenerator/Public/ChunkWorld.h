// Copyright by EnginFirestorm, All Rights Reserved.

#pragma once

#if WITH_EDITOR
#include "LevelEditorViewport.h"
#endif
#include "Runtime/Engine/Public/Engine.h"
#include "Math/IntVector.h"
#include "GameFramework/Actor.h"
#include "mutex"
#include "ChunkBase.h"
#include "ChunkWorldCache.h"
#include "FastNoise/FastNoise.h"
#include <chrono>
#include <ctime>  
#include <iostream>
#include "Misc/QueuedThreadPool.h"
#include <Serialization/BufferArchive.h>
#include "Serialization/JsonWriter.h"
#include "Engine/DataTable.h"
#include "ChunkWorldWalker.h"
#include <thread>
#include "ChunkWorld.generated.h"


// Hi just as a little warning. Yes I set all to public, but be aware that the most tings work strongly multithreaded, so be really carefull! Only the UPROPERTY() are safe to edit on the main thread.
// When the generator is running, it is not recommended to change the settings, as this can lead to a crash or broken data, but try your luck, easy things like distance and max counts are safe to change.
// If you need something specific, feel free to ask me. I will try to help you as good as I can.
UCLASS()
class PORISMDIMSWORLDGENERATOR_API AChunkWorld : public AActor, public IQueuedWork
{
	GENERATED_BODY()

public:

	//------------------ WorldGenDef ------------------ Only Editor

	/** The seed for the generator. If you want to have the same world, you will have to use the same seed, otherwise the world will be different */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldGenDef")
	int Seed = 0.00f;

	/** The configuration of the generator is inserted here. Please do not change or edit it while the generator is still running. Almost all changes to the generator will
	damage the save and cache data regardless of the generator state and should therefore not be edited in the game release version.
	A converter will be implemented for updating the savefile in order to be able to implement various extensions and format changes*/
	UPROPERTY(EditAnywhere, Category = "WorldGenDef")
	TSubclassOf<UWorldGenDef> WorldGenDefType;

	/** The configuration of the generator is inserted here. Please do not change or edit it while the generator is still running. Almost all changes to the generator will
	damage the save and cache data regardless of the generator state and should therefore not be edited in the game release version.
	A converter will be implemented for updating the savefile in order to be able to implement various extensions and format changes*/
	UPROPERTY(BlueprintReadWrite, Category = "WorldGenDef")
	TObjectPtr<UWorldGenDef> WorldGenDef;

	/** Not really to change, except you want to do something with it*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldGenDef")
	TSubclassOf<UChunkBase> MeshComponent = UChunkBase::StaticClass();

	bool WorldGenDefPredefined = false;
	std::vector<FChunkData*> WorldChunks;
	int64 NextChunkID = 0;

	std::vector<UChunkBase*> ChunkComponent;

	std::vector< std::vector<FInstanceMeshData>> ChunkInstancedMesh;
	bool ChunkInstancedTasks = false;
	std::mutex ChunkInstancedTasksKey;
	TArray<FInstanceCollisionData*> InstancedCollisions;

	//------------------ ChunkWorldNet ------------------

	TArray<FBlockChangeCall> BlockChangeCalls;
	std::mutex BlockChangeCallsKey;


	//------------------ ChunkWorldFeatures ------------- Runtime Save

	/** If you want to work without automatic loading, deletion and tracking of the chunks, this would be the way to go.
Deactivation during operation is possible and is comparable to a kind of pause state for the functions mentioned. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChunkWorldFeatures")
	bool UseChunkAutoRefresh = true;

	/** If deactivated, all new cache chunks are initialized with air, the save data is not affected and you can continue working as usual using the terraform functions. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChunkWorldFeatures")
	bool UseChunkNoiseGenerator = true;

	/** Decide here whether the debug data links should be visible at the top */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChunkWorldFeatures")
	bool ShowDebugData = true;

	//------------------ ChunkWorldPer ------------------ Runtime Save

	/** The amount of frames until the next Chunk check. It is a waste of performance to have this function executed to frequently */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChunkWorldPer (Needs Full Version)", meta = (EditCondition = "1==2"))
	int ChunkRefreshTime = -1;

	/** ChunkOutOfRange * ChunkRefreshTime = The time until the Chunk gets removed form the world, making this less frequent, results in less cpu load but but maybe more memory and gpu load,
	since we dont need to regenerate the Chunks that often */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChunkWorldPer (Needs Full Version)", meta = (EditCondition = "1 == 2"))
	int ChunkOutOfRange = 200;

	/** This is your expected minimum time that the game should take to do a frame. If the game is faster, the generator will try to increase the view range*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChunkWorldPer (Needs Full Version)", meta = (EditCondition = "1 == 2"))
	float TargetFrameTimeMin = 0.01f;
	/** This is your expected maximum time that the game should take to do a frame. If the game is slower, the generator will try to decrease the view range*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChunkWorldPer (Needs Full Version)", meta = (EditCondition = "1 == 2"))
	float TargetFrameTimeMax = 0.015f;

	/** The minimal allowed view range factor of the generator */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChunkWorldPer (Needs Full Version)", meta = (EditCondition = "1 == 2"))
	float FrameViewRangeFactorMin = 0.5f;
	/** The maximal allowed view range factor of the generator */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChunkWorldPer (Needs Full Version)", meta = (EditCondition = "1 == 2"))
	float FrameViewRangeFactorMax = 1.0f;

	float FrameViewRangeFactorNow = 0.25f;

	float LastDeltaTime = 1.0f;

	//------------------ ChunkWorldThreads ------------------ Runtime Save

	/** The maximal number of open threads which are reserved for primary tasks (Chunks surrounding the actor) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChunkWorldThreads (Needs Full Version)", meta = (EditCondition = "1 == 2"))
	int MaxPriTasks = 1;
	/** The maximal number of open threads for non prio generation (Overall default generator usage) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChunkWorldThreads (Needs Full Version)", meta = (EditCondition = "1 == 2"))
	int MaxSecTasks = 1;
	/** The maximal number of open threads for the data only generation (Mostly usless when you dont use the cache feature) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChunkWorldThreads (Needs Full Version)", meta = (EditCondition = "1 == 2"))
	int MaxFileTasks = 1;
	/** The range in which only primary threads are included for generation */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChunkWorldThreads (Needs Full Version)", meta = (EditCondition = "1 == 2"))
	float PrimaryRange = 2.f;
	/** The radius in which the generator tries to prepare data (1 file = 8 chunks ) Hint: Try to have more Chunks then in your ChunkDataParams */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChunkWorldThreads (Needs Full Version)", meta = (EditCondition = "1 == 2"))
	FIntVector FileRange = FIntVector(1,1,1);
	/** A simulated Stack for the generator buffers in MiB, while using a thread. This amount will be malloc in the memory */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChunkWorldThreads")
	int VirtualThreadStack = 32;
	FQueuedThreadPool* ThreadPool;
	std::atomic<int> TaskCount = 0;
	std::atomic<int> TaskSecCount = 0;
	std::atomic<int> TaskFileCount = 0;

	std::atomic<int> GenOrderCounter = 0;

	//------------------ ChunkWorldCache ------------------ Runtime Save

	/** Just the switch to turn this function on or off. Be aware, depending on the distance traveled,
	more memory will be used on the hard disk, but the advantage is clear when active: Considerably less CPU load, and depending on the hard disk faster response time */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChunkWorldCache")
	bool UseCache = true;
	/** The Cache will start to save and remove from the memory when MiB limit is reached */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChunkWorldCache (Needs Full Version)", meta = (EditCondition = "1 == 2"))
	int MaxCacheMemUse = 512;
	/** Cache target folder */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChunkWorldCache (Needs Full Version)", meta = (EditCondition = "1 == 2"))
	FString CacheTarget;
	/** Save target folder */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChunkWorldCache")
	FString SaveTarget;
	FCacheManager* DriveSave;
	FCacheManager* DriveCache;
	bool PlanCacheCleanUp = false;

	//------------------ ChunkWorldDebug ------------------ Runtime Save

	/** Switches the generator to debug colors */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ChunkWorldDebug")
	bool DebugColors = false;
	std::atomic<int> ChunksLoaded = 0;
	FVector LastCamLocation = FVector::ZeroVector;
	FUint64Vector4 ReportCounters;

	//------------------ ChunkDataHolder ------------------ Private

	TArray< UObject*> WorldLoaders; // The objects to track
	std::mutex WorldLoadersKey;

	TArray<double> WorldLoadersMultiDummy;

	TArray<FTarget> GeneratorTargets; // The playerChunk positions from the last frame
	std::mutex GeneratorTargetsKey;

	TArray<FCacheKey> OrderdChunkFiles; // Just a list to note alle checked chunkFiles
	std::mutex OrderdChunkFilesKey;

	TArray<FChunk*> ChunkStack; // Chunks that are currently loaded in layer 0
	TArray<FIntVector> ChunkStackIndex;
	std::mutex ChunkStackKey;

	TArray<TArray<FIntVector>*> ChunkUpdateCalls; // Chunks that should be updated if existing
	std::mutex ChunkUpdateCallsKey;

	TArray<TArray<FChunk*>*> ChunkTasks; // Chunks that need to be loaded
	std::mutex ChunkTasksKey;
	TArray<TArray<FChunk*>*> ChunkSecTasks; // Chunks that need to be loaded but are not prio
	std::mutex ChunkSecTasksKey;

	std::vector<UChunkBody*> ActiveCollisions; // The active collision objects

	std::atomic<bool> GameThreadWorkWaitings = false;
	std::vector<FChunk*> CollisionChunksGameThread;
	std::mutex CollisionChunksGameThreadKey;
	std::vector<FChunk*> ActivateChunksGameThread;
	std::mutex ActivateChunksGameThreadKey;
	std::vector<FChunk*> DelChunksGameThread;
	std::mutex DelChunksGameThreadKey;

	std::atomic<bool> RenderThreadWorkWaitings = false;
	std::vector<FChunk*> RenderChunksRenderThread;
	std::vector<FChunk*> DelChunksRenderThread;
	std::mutex RenderChunksRenderThreadKey;

	//------------------ GeneratorModes ------------------ Private! Please use the functions!

	bool CheckChunkPosesIsRunning = false; // If true, the generator is checking the chunks
	bool GeneratorIsRunning = false; // If true, the generator is running

	bool GeneratorShouldBeOnline = false; // If true, the generator will try to start



	AChunkWorld();

	TStatId GetStatId() const {
		RETURN_QUICK_DECLARE_CYCLE_STAT(ChunkWorldTask, STATGROUP_ThreadPoolAsyncTasks);
	}
	void DoThreadedWork();

	void Abandon() {

	}

	virtual void Tick(float DeltaTime) override;

	void DoGameThreadWork() {
		CollisionChunksGameThreadKey.lock();
		if (CollisionChunksGameThread.size() > 0)
		{
			FGCScopeGuard GCGuard;
			FChunk::CollisionChunks(CollisionChunksGameThread, GeneratorShouldBeOnline);
			CollisionChunksGameThread.clear();
		}
		CollisionChunksGameThreadKey.unlock();

		ActivateChunksGameThreadKey.lock();
		if (ActivateChunksGameThread.size() > 0)
		{
			FChunk::ActivateChunks(ActivateChunksGameThread);
			RenderThreadWorkWaitings = true;
			ActivateChunksGameThread.clear();
		}

		ActivateChunksGameThreadKey.unlock();
		DelChunksGameThreadKey.lock();
		if (DelChunksGameThread.size() > 0)
		{
			FGCScopeGuard GCGuard;
			FChunk::DestroyChunks(DelChunksGameThread, this);
			DelChunksGameThread.clear();
		}
		DelChunksGameThreadKey.unlock();

		if (ChunkInstancedTasks)
		{
			ChunkInstancedTasksKey.lock();
			TRACE_CPUPROFILER_EVENT_SCOPE_STR("ChunkInstancedMeshUpdate");
			TArray<int> removeTasks;
			TArray<int> updateTasks;
			TArray<FTransform> updateTasksTransform;
			TArray<FTransform> addTasksTransform;
			for (int i = 0; i < ChunkInstancedMesh.size(); i++)
			{
				for (auto& mesh : ChunkInstancedMesh[i])
				{
					if (mesh.NeedsUpdate)
					{
						mesh.NeedsUpdate = false;
						if (!mesh.Mesh)
						{
							mesh.Mesh = NewObject<UInstancedStaticMeshComponent>(RootComponent, WorldGenDef->WorldMeshes[i].MeshType, NAME_None, RF_Transient | RF_TextExportTransient | RF_DuplicateTransient);
							mesh.Mesh->SetStaticMesh(WorldGenDef->WorldMeshes[i].Mesh);
							mesh.Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
							mesh.Mesh->SetIsReplicated(false);
							if (mesh.ChunkData->InstancedMeshShadows)
							{
								mesh.Mesh->SetCastShadow(true);
								mesh.Mesh->SetVisibleInRayTracing(true);
							}
							else
							{
								mesh.Mesh->SetCastShadow(false);
								mesh.Mesh->SetVisibleInRayTracing(false);
							}

							mesh.Mesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
							mesh.Mesh->RegisterComponent();
						}

						if (mesh.Remove.Num() > 0)
						{
							TRACE_CPUPROFILER_EVENT_SCOPE_STR("ChunkInstancedMeshRemoveCheck");
							int lastCount = mesh.Mesh->GetInstanceCount();
							for (int chunkIndex = mesh.Chunks.Num() - 1; chunkIndex > -1; chunkIndex--)
							{
								bool found = false;
								for (int deleteIndex = 0; deleteIndex < mesh.Remove.Num(); deleteIndex++)
								{
									if (mesh.Chunks[chunkIndex] == mesh.Remove[deleteIndex])
									{
										found = true;
										for (int targetIndex = lastCount; targetIndex > lastCount - mesh.ChunksCount[chunkIndex]; targetIndex--)
										{
											removeTasks.Add(targetIndex - 1);
											mesh.RemoveCount[deleteIndex] -= 1;
										}

										lastCount -= mesh.ChunksCount[chunkIndex];
										if (mesh.RemoveCount[deleteIndex] < 1)
										{
											mesh.Remove.RemoveAt(deleteIndex, EAllowShrinking::No);
											mesh.RemoveCount.RemoveAt(deleteIndex, EAllowShrinking::No);
										}

										if (chunkIndex != mesh.Chunks.Num() - 1 && mesh.Chunks[chunkIndex + 1] == nullptr)
										{
											mesh.ChunksCount[chunkIndex] += mesh.ChunksCount[chunkIndex + 1];
											mesh.ChunksCount.RemoveAt(chunkIndex + 1, EAllowShrinking::No);
											mesh.Chunks.RemoveAt(chunkIndex + 1, EAllowShrinking::No);
										}
										mesh.Chunks[chunkIndex] = nullptr;
										break;
									}
								}
								if (!found)
									lastCount -= mesh.ChunksCount[chunkIndex];
								if (mesh.Remove.Num() < 1)
									break;
							}

							if (mesh.Remove.Num() > 0)
							{
								for (auto chunk : mesh.Remove)
								{
									int index = mesh.Add.Find(chunk);  // This desition to remove was really fast!
									mesh.Add.RemoveAt(index, EAllowShrinking::No);
									mesh.AddInfos.RemoveAt(index, EAllowShrinking::No);
								}
								mesh.Remove.SetNum(0, false);
								mesh.RemoveCount.SetNum(0, false);
							}
						}

						if (mesh.Add.Num() > 0)
						{
							TRACE_CPUPROFILER_EVENT_SCOPE_STR("ChunkInstancedMeshAdd");
							int lastNullChunk = 0;
							int count = 0;
							for (int addIndex = mesh.Add.Num() - 1; addIndex > -1; addIndex--)
							{
								for (int j = 0; j < mesh.AddInfos[addIndex]->Transforms.Num(); j++)
								{
									if (removeTasks.Num() > 0)
									{
										while (mesh.Chunks[lastNullChunk] != nullptr)
											lastNullChunk++;

										updateTasksTransform.Add(mesh.AddInfos[addIndex]->Transforms[j]);
										updateTasks.Add(removeTasks.Last());
										removeTasks.RemoveAt(removeTasks.Num() - 1, EAllowShrinking::No);
										mesh.ChunksCount[lastNullChunk] -= 1;
										count += 1;

										if (mesh.ChunksCount[lastNullChunk] == 0) // NullChunk is empty
										{
											mesh.ChunksCount[lastNullChunk] = count;
											count = 0;
											mesh.Chunks[lastNullChunk] = mesh.Add[addIndex];
										}
									}
									else // No removesLeft
									{
										addTasksTransform.Add(mesh.AddInfos[addIndex]->Transforms[j]);
										count += 1;
									}
								}

								if (removeTasks.Num() > 0) // Chunk is empty but the nullChunk is not
								{
									if (mesh.Chunks[lastNullChunk] == nullptr) // we dont have to do this if the nullChunk was empty
									{
										mesh.ChunksCount.Insert(count, lastNullChunk);
										count = 0;
										mesh.Chunks.Insert(mesh.Add[addIndex], lastNullChunk);
									}
								}
								else
								{
									mesh.ChunksCount.Add(count);
									count = 0;
									mesh.Chunks.Add(mesh.Add[addIndex]);
								}
							}
							mesh.Add.SetNum(0, false);
							mesh.AddInfos.SetNum(0, false);
						}


						if (updateTasks.Num() > 0)
						{
							for (int j = 0; j < updateTasks.Num(); j++)
							{
								mesh.Mesh->UpdateInstanceTransform(updateTasks[j], updateTasksTransform[j]);
							}
							mesh.Mesh->MarkRenderStateDirty();
							updateTasks.SetNum(0, false);
							updateTasksTransform.SetNum(0, false);
						}

						if (addTasksTransform.Num() > 0)
						{
							mesh.Mesh->AddInstances(addTasksTransform, false);
							addTasksTransform.SetNum(0, false);
						}

						if (removeTasks.Num() > 0)
						{
							mesh.Mesh->RemoveInstances(removeTasks, true);

							removeTasks.SetNum(0, false);

							for (int j = mesh.Chunks.Num() - 1; j > -1; j--)
							{
								if (mesh.Chunks[j] == nullptr)
								{
									mesh.Chunks.RemoveAt(j, EAllowShrinking::No);
									mesh.ChunksCount.RemoveAt(j, EAllowShrinking::No);
								}
							}

						}
					}
				}
			}
			ChunkInstancedTasks = false;
			ChunkInstancedTasksKey.unlock();
		}
	}

	void DoRenderThreadWork(FRHICommandListImmediate& RHICmdList) {
		RenderChunksRenderThreadKey.lock();
			FChunk::RenderChunks(RenderChunksRenderThread, RHICmdList, GeneratorShouldBeOnline,this);
			RenderChunksRenderThread.clear();
		RenderChunksRenderThreadKey.unlock();
	}

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override {
		if (GeneratorIsRunning)
			StartGen();
	}

	virtual void PostEditMove(bool bFinished) override {
		//Blocking the base function is enough to prevent the actor from crashing
	}
#endif

	void StopGen(UWorld* World, const UWorld::InitializationValues IVS)
	{
		EndGame = true;
		StopGen();
	}

	bool EndGame = false;
	virtual void BeginDestroy() override {
		EndGame = true;
		StopGen();
		Super::BeginDestroy();
	}
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	virtual bool ShouldTickIfViewportsOnly() const override
	{
		return GeneratorIsRunning;
	}

	/** Is the generator runing? */
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldGen")
	bool IsRuning() {

		return GeneratorIsRunning;
	}

	/** To request the number of detail layers/LOD levels of the chunks. The returned value corresponds to the number of entries in
	WorldGenDefType -> WorldChunksDT that you have stored. Caution! Please use the function only if the generator is already running */
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldGen")
	int GetChunkLayerCount() {

		return WorldChunks.size();
	}

	/** Adds another object to the generator, which is used as the position basis for calculating the surface */
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldGen")
	void AddChunkWorldWalker(UObject* newWorldLoader) {
		WorldLoadersKey.lock();
		WorldLoaders.AddUnique(newWorldLoader);
		WorldLoadersKey.unlock();
	}

	/** Removes the object from the generator tracing */
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldGen")
	void RemoveChunkWorldWalker(UObject* newWorldLoader) {
		WorldLoadersKey.lock();
		WorldLoaders.Remove(newWorldLoader);
		WorldLoadersKey.unlock();
	}

	/** Overwrite generator tracing. Caution! The array should no longer be edited (thread collisions) */
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldGen")
	void SetChunkWorldWalkers(TArray<UObject*> newWorldLoader) {
		WorldLoadersKey.lock();
		WorldLoaders = newWorldLoader;
		WorldLoadersKey.unlock();
	}

	/** Starts the generator. When already started, will restart it. Please trigger this only once per frame **/
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldGen")
	void StartGen();

	/** Stops the generator **/
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldGen")
	void StopGen();

	/** Will immediately delete all cache files of the generator target location when executed (the ram is remaining).
	Should also work in live mode, but be use it with caution, as the file system may have a problem with it **/
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldCache")
	void DeleteCache();

	/** Will immediately delete all save files of the generator target location when executed (the ram is remaining).
	Should also work in live mode, but use it with caution, as the file system may have a problem with it **/
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldCache")
	void DeleteSave();

	/**
	* Returns the current performance debug data
	*/
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldDebug")
	void ReadDebugStats(TArray<int>& chunkTasksOpen, TArray<int>& threads, int& chunksLoaded, float& viewRangeFactor, TArray<int>& meshPoints, TArray<int>& polyCount);

	///
	///
	///
	/**
	* Can convert an engin world position into a "blockWorldPos"
	* @param ueWorldPos The engin world pos
	* @return The block chunk pos relative to the detail level
	*/
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldTeraform")
	FIntVector UEWorldPosToBlockWorldPos(const FVector ueWorldPos) const;

	/**
	* You will need the local pos of the block in order to change the save data
	* @param blockWorldPos The pos of the block in the world
	* @param detailLevel The detail level of the block. Remember, "WorldGenDefType" -> "WorldChunksDT" -> "FChunkDataParams" the highest number is the smallest size
	* @return The block chunk pos relative to the detail level
	*/
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldTeraform")
	FIntVector BlockWorldPosToBlockChunkPos(const FIntVector blockWorldPos, const int detailLevel) const;
	FIntVector BlockWorldPosToBlockChunkPos(const FIntVector blockWorldPos, const FChunkData* chunkData) const;

	/**
	* Gives the world pos of a block in the Chunk
	* @param blockChunkPos The pos of the block in the Chunk
	* @param chunk The Chunk in which the block is located
	* @return The block world pos
	*/
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldTeraform")
	FIntVector BlockChunkPosToBlockWorldPos(const FIntVector blockChunkPos, const FChunkRef chunk) const;

	/**
	* With this function you can get the position of the Chunk. It is needed to work with the save data
	* @param blockWorldPos The pos of the block in the world
	* @param detailLevel The detail level of the block. Remember, "WorldGenDefType" -> "WorldChunksDT" -> "FChunkDataParams" the highest number is the smallest size
	* @return The Chunk pos in Chunk codinates
	*/
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldTeraform")
	FIntVector BlockWorldPosToChunkGridPos(const FIntVector blockWorldPos, const int detailLevel) const;
	FIntVector BlockWorldPosToChunkGridPos(const FIntVector blockWorldPos, const FChunkData* chunkData) const;

	/**
	* With this function you can get the position of the Chunk. It is needed to work with the save data
	* @param chunkGridPos the Chunk pos in Chunk coordinates
	* @param detailLevel The detail level of the block. Remember, "WorldGenDefType" -> "WorldChunksDT" -> "FChunkDataParams" the highest number is the smallest size
	* @return The pos of the first Chunk block in the world
	*/
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldTeraform")
	FIntVector ChunkGridPosToBlockWorldPos(const FIntVector chunkGridPos, const int detailLevel) const;
	FIntVector ChunkGridPosToBlockWorldPos(const FIntVector chunkGridPos, const FChunkData* chunkData) const;

	/**
	* With this function you get the index of a vector in the block buffer. You will need it for background tasks
	* @param blockChunkPos A vector in the chunk
	* @param detailLevel The detail level of the block. Do you remember? "WorldGenDefType" -> "WorldChunksDT" -> "FChunkDataParams" the highest number is the smallest size
	* @return The index of the vector in the block buffer (works for cache an save data)
	*/
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldTeraform")
	int BlockChunkPosToBlockChunkIndex(const FIntVector blockChunkPos, const int detailLevel) const;
	int BlockChunkPosToBlockChunkIndex(const FIntVector blockChunkPos, const FChunkData* chunkData) const;

	/**
	* With this function you may get the vector of a block index in the Chunk
	* @param blockChunkIndex The index of the vector in the block buffer
	* @param detailLevel The detail level of the block. I don't remember. "WorldGenDefType" -> "WorldChunksDT" -> "FChunkDataParams" the highest number is the smallest size
	* @return The vector of the block index in the chunk
	*/
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldTeraform")
	FIntVector BlockChunkIndexToBlockChunkPos(const int blockChunkIndex, const int detailLevel) const;
	FIntVector BlockChunkIndexToBlockChunkPos(const int blockChunkIndex, const FChunkData* chunkData) const;

	/**
	* With this function you can ask for the material index. It is just the order of the materials in the list, you will need it for the save data. This won't work, if multiMaterial is used
	* @param material Your material to check
	* @return The materialIndex of the material. Will return -1 if the material is not in the list
	*/
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldTeraform")
	int MaterialToMaterialIndex(UMaterialInterface* material) const;

	/**
	* With this function you get the material of a materialIndex back (you can receive the material index from the save data). This won't work, if multiMaterial is used
	* @param materialIndex To check
	* @return The material of it, will return nullptr if the material is not in the list
	*/
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldTeraform")
	UMaterialInterface* MaterialIndexToMaterial(int materialIndex) const;

	/**
	* If you have a HitResult from this chunkWorld, you can use the retunr of this function to terraform it. Please remember that some renderers may make precise teraforming impossible (e.g. index optimization)
	* @param hit The hit to check
	* @param useLocation This option is mandatory if you have the IndexBuffer optimized. However, it does not work well if the vertex has offsets
	* @return A hit report with all the information you need
	*/
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldTeraform")
	FChunkWorldHit GetChunkWorldHitByHitResult(const FHitResult hit, const bool useLocation);

	/**
	* Gets the block value from the blockWorldPos of the highest detail level
	* @param blockWorldPos The pos of the block in the world
	* @return The value of the block. Usely a materialIndex if not negative, 0 if the chunk is not generated
	*/
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldTeraform")
	int GetBlockValueByBlockWorldPos(const FIntVector blockWorldPos);
	/**
	* Gets the block value from the blockWorldPos of the written detail level
	* @param blockWorldPos The pos of the block in the world
	* @param detailLevel The level of detail you want to check
	* @return The value of the block. Usely a materialIndex if not negative, 0 if the chunk is not generated
	*/
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldTeraform")
	int GetBlockValueByBlockWorldPosLevel(const FIntVector blockWorldPos, const int detailLevel);
	int GetBlockValueByBlockWorldPosLevel(const FIntVector blockWorldPos, const FChunkData* chunkData);

	/**
	* Use this function to change a block value in all detail levels
	* @param blockWorldPos The pos of the block in the world
	* @param materialIndex Negative values are considered as air (Or something else if you want to save things) (Please write -1 for air, we try to compress the data, that requires homogeneous numbers)
	* @param refreshChunks Set it to false if you dont want to refresh the visual/physical Chunk(s) after the change.Saves 99% of the worktime. Caution! In case of a client sever connection,
	the client will not receive the changes at all
	* @return
	*/
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldTeraform")
	void SetBlockValueByBlockWorldPos(const FIntVector blockWorldPos, const int materialIndex = -1, const bool refreshChunks = true);

	/**
* Use this function for larger random access changes, execution takes place on a different thread and may be delayed accordingly
* @param arrBlockWorldPos A pos Array of the blocks in the world
* @param arrMaterialIndex Negative values are considered as air (Or something else if you want to save things) (Please write -1 for air, we try to compress the data, that requires homogeneous numbers)
* @param refreshChunks Set it to false if you dont want to refresh the visual/physical Chunk(s) after the change.Saves 99% of the worktime. Caution! In case of a client sever connection,
the client will not receive the changes at all
* @return
*/
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldTeraform")
	void SetBlockValuesByBlockWorldPosAsync(const TArray<FIntVector>& arrBlockWorldPos, const TArray<int>& arrMaterialIndex, const bool refreshChunks = true);

	/**
* Use this function for larger random access changes
* @param arrBlockWorldPos A pos Array of the blocks in the world
* @param arrMaterialIndex Negative values are considered as air (Or something else if you want to save things) (Please write -1 for air, we try to compress the data, that requires homogeneous numbers)
* @param refreshChunks Set it to false if you dont want to refresh the visual/physical Chunk(s) after the change.Saves 99% of the worktime. Caution! In case of a client sever connection,
the client will not receive the changes at all
* @return
*/
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldTeraform")
	void SetBlockValuesByBlockWorldPos(const TArray<FIntVector>& arrBlockWorldPos, const TArray<int>& arrMaterialIndex, const bool refreshChunks = true);

	void WriteBlockValuesAndUpdate(const TArray<FBlockChangeCall>& netBlockChangeCalls, bool refreshChunks);

	// Please dont use this function in c++ code. Just go directly for DriveCache->Read or DriveSave->Read (You can check the function as a use case example)
	/**
	* Gets all block values from the Chunk
	* @param blockWorldPos The pos of the block in the world
	* @param detailLevel The level of detail you want to check
	* @param found Will be set to false if the Chunk is not generated
	* @return The values of the Chunk as a TArray<int> with the size of the Chunk. Caution! This also contains the border blocks, so please expect not e.g. 32x32x32 but 34x34x34.
	Use BlockChunkPosToBlockChunkIndex to search for the right index
	*/
	UFUNCTION(BlueprintCallable, Category = "ChunkWorldTeraform")
	TArray<int> GetBlockValuesByChunkGridPosLevel(const FIntVector ChunkGridPos, const int detailLevel, bool& found);

	///
	/// 
	///

	char* GenerateChunk(std::vector<FTempChunkData>* temp, FChunkData* chunkData, FIntVector Start, char* virtualStack, bool fullGen, bool forceCacheGen = false);

	bool CheckChunkDel(FChunk* chunk);

	void CheckChunkPoses(FTarget& target);

	void CheckChunkPos(FTarget& target, FIntVector key, int childIndex, FChunk* chunk, FChunk* parent, int sectorDeep, FChunkData* sector);

	void PregenerateChunkFiles(char* virtualStack, FTarget target);
	void Run(FChunk* parent, std::vector<FChunkMainProxySection*>* target)
	{
		if (parent->RenderIt)
		{
			if (parent->MainProxySection)
				target->push_back(parent->MainProxySection);
		}
		else if (parent->Children.size() > 0)
			for (auto child : parent->Children)
				if (child)
					Run(child, target);
	}

	void GetThisAndChilds(FChunk* parent, std::vector<FChunk*>* target)
	{
		target->push_back(parent);
		if (parent->Children.size() > 0)
			for (auto child : parent->Children)
				if (child)
					GetThisAndChilds(child, target);
	}
};