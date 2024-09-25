// Copyright by EnginFirestorm, All Rights Reserved.

#include "Chunk.h"
#include "ChunkWorld.h"
#include "Math/Vector.h"
#include <ChunkExtend.cpp>

ERHIFeatureLevel::Type level;
void FChunk::CreateMeshSection(std::vector<FTempChunkData>* temp, char* virtualStack)
{
	TempTask = new FChunkTask();

	TempTask->DoUpdate = UpdateMode;
	UpdateMode = false;

	auto worldStart = FVector(Start * World->WorldGenDef->BaseBlockSize);
	GeneratePolyData(temp, virtualStack, worldStart);

	if (HasMeshInstances)
	{
		RemoveInstanceMeshs();
		for (auto& instance : *HasMeshInstances)
		{
			instance.Transforms.SetNum(0, false);
			instance.WorldPoses.SetNum(0, false);
		}
	}

	if (TempTask->NewMeshInstances)
	{
		World->ChunkInstancedTasksKey.lock();
		delete HasMeshInstances;
		HasMeshInstances = TempTask->NewMeshInstances;
		TempTask->NewMeshInstances = nullptr;
		World->ChunkInstancedTasksKey.unlock();
		if (RenderIt)
			AddInstanceMeshs();
	}

	if (FinalVertexBufferSize == 0 && !TempTask->DoUpdate) // Mesh is empty and no update (cleanup) is needed
	{
		IsReady = true;
		return;
	}

	TempTask->PartReady = false;
		if (World->ChunkComponent[0]->GetScene())
			level = World->ChunkComponent[0]->GetScene()->GetFeatureLevel();

		TempTask->NewMainProxySection = new FChunkMainProxySection(level);
		TempTask->NewMainProxySection->WorldStart = worldStart;
		TempTask->NewMainProxySection->WorldEnd = worldStart + FVector(ChunkData->ChunkSize);
		TempTask->NewMainProxySection->OwnerComponent = World->ChunkComponent[0];
		TempTask->NewMainProxySection->ChunkData = ChunkData;
		AddReplaceSection();

		World->RenderChunksRenderThreadKey.lock();
		World->RenderChunksRenderThread.push_back(this);
		World->RenderThreadWorkWaitings = true;
		World->RenderChunksRenderThreadKey.unlock();

	if (ChunkData->Collision)
	{
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("UChunkBase::UpdateCollision");
		LLM_SCOPE_BYNAME("ChunkWorldCollision");

		if (!ChunkBody)
		{
			FGCScopeGuard GCGuard;
			ChunkBody = NewObject<UChunkBody>(World, NAME_None, RF_NoFlags);
			ChunkBody->AddToRoot();
			ChunkBody->ClearInternalFlags(EInternalObjectFlags::Async);
			ChunkBody->OwnerChunk = this;
			ChunkBody->OwnerComponent = World->ChunkComponent[0];
			ChunkBody->WorldStart = worldStart;

			auto chunkBodyInstance = new FBodyInstance();
			chunkBodyInstance->OwnerComponent = World->ChunkComponent[0];
			chunkBodyInstance->SetCollisionProfileName(ChunkData->CollisionProfileName);
			chunkBodyInstance->SetCollisionEnabled(ChunkData->CollisionEnabled);

			auto chunkBodySetup = NewObject<UBodySetup>(ChunkBody, NAME_None, RF_NoFlags);
			chunkBodySetup->AddToRoot();
			chunkBodySetup->BodySetupGuid = FGuid::NewGuid();
			chunkBodySetup->ClearInternalFlags(EInternalObjectFlags::Async);
			chunkBodySetup->bGenerateMirroredCollision = false;
			chunkBodySetup->bDoubleSidedGeometry = false;
			chunkBodySetup->bHasCookedCollisionData = true;
			chunkBodySetup->CollisionTraceFlag = CTF_UseComplexAsSimple;

			ChunkBody->ChunkBodyInstance = chunkBodyInstance;
			ChunkBody->ChunkBodySetup = chunkBodySetup;
		}

		if (TempTask->DoUpdate)
			ChunkBody->ChunkBodySetup->InvalidatePhysicsData();

		ChunkBody->ChunkBodySetup->CreatePhysicsMeshes();

		World->CollisionChunksGameThreadKey.lock();
		World->CollisionChunksGameThread.push_back(this);
		World->GameThreadWorkWaitings = true;
		World->CollisionChunksGameThreadKey.unlock();
	}
	else {
		if (TempTask->PartReady)
			IsReady = true;
		else
			TempTask->PartReady = true;
	}
}

void FChunk::AddReplaceSection()
{
	LLM_SCOPE_BYNAME("ChunkWorldVisualMeshArrayBuffer");
	TRACE_CPUPROFILER_EVENT_SCOPE_STR("BuildBuffers");

	if (FinalVertexBufferSize == 0)
		return;
	FChunkMainProxySection* newMainProxySection = TempTask->NewMainProxySection;
	newMainProxySection->PositionVertexBuffer.Init(FinalVertexBufferSize);
	newMainProxySection->StaticMeshVertexBuffer.Init(FinalVertexBufferSize, 4);

	for (int32 i = 0; i < FinalVertexBufferSize; i++)
	{
		const FVertex& Vertex = TempTask->FinalVertexBuffer[i];

		newMainProxySection->PositionVertexBuffer.VertexPosition(i) = Vertex.Position + FVector3f(newMainProxySection->WorldStart);
		newMainProxySection->StaticMeshVertexBuffer.SetVertexTangents(i,
			FVector3f(Vertex.Normal.Z, Vertex.Normal.X, Vertex.Normal.Y),
			FVector3f(Vertex.Normal.Y, Vertex.Normal.Z, Vertex.Normal.X), Vertex.Normal);
		newMainProxySection->StaticMeshVertexBuffer.SetVertexUV(i, 0, FVector2f(Vertex.XMYMZM, Vertex.XPYMZM));
		newMainProxySection->StaticMeshVertexBuffer.SetVertexUV(i, 1, FVector2f(Vertex.XMYPZM, Vertex.XPYPZM));
		newMainProxySection->StaticMeshVertexBuffer.SetVertexUV(i, 2, FVector2f(Vertex.XMYMZP, Vertex.XPYMZP));
		newMainProxySection->StaticMeshVertexBuffer.SetVertexUV(i, 3, FVector2f(Vertex.XMYPZP, Vertex.XPYPZP));
	}

#if RHI_RAYTRACING
	if (IsRayTracingEnabled() && ChunkData->Shadows)
	{
		newMainProxySection->RayPositionVertexBuffer.Init(LowVertexBufferSize);
		for (int32 i = 0; i < LowVertexBufferSize; i++)
			newMainProxySection->RayPositionVertexBuffer.VertexPosition(i) = TempTask->LowVertexBuffer[i] + FVector3f(newMainProxySection->WorldStart);

		newMainProxySection->RayIndexBuffer.Indices.SetNum(LowIndexBufferSize, false);
		FMemory::Memcpy(newMainProxySection->RayIndexBuffer.Indices.GetData(), TempTask->LowIndexBuffer, LowIndexBufferSize * sizeof(uint32));
	}
#endif

	for (auto& SrcSection : *TempTask->NewFinalMeshSections) {

		if (SrcSection.ProcIndexBufferSize != 0)
		{
			UMaterialInterface* newmat = SrcSection.Material;

			if (ChunkData->Debug && ChunkData->DebugMaterial) {
				newmat = ChunkData->DebugMaterial;
			}

			if (newmat == NULL)
			{
				newmat = UMaterial::GetDefaultMaterial(MD_Surface);
			}

			FChunkProxySection& section = *new FChunkProxySection(newmat);
			newMainProxySection->ProxySections.push_back(&section);

			section.IndexBuffer.Indices.SetNum(SrcSection.ProcIndexBufferSize, false);
			FMemory::Memcpy(section.IndexBuffer.Indices.GetData(), SrcSection.ProcIndexBuffer, SrcSection.ProcIndexBufferSize * sizeof(uint32));

			section.Mesh.VertexFactory = &newMainProxySection->VertexFactory;
			section.Mesh.MaterialRenderProxy = section.Material->GetRenderProxy();
			section.Mesh.LODIndex = 0;
			section.Mesh.SegmentIndex = 0;
			FMeshBatchElement& BatchElement = section.Mesh.Elements[0];
			BatchElement.IndexBuffer = &section.IndexBuffer;
			BatchElement.FirstIndex = 0;
			BatchElement.NumPrimitives = SrcSection.ProcIndexBufferSize / 3;
			BatchElement.MinVertexIndex = 0;
			BatchElement.MaxVertexIndex = FinalVertexBufferSize - 1;

#if RHI_RAYTRACING
			section.Mesh.CastRayTracedShadow = true;
#endif
		}
	}
}

void FChunk::AddInstanceMeshs()
{
	if (HasMeshInstances && (*HasMeshInstances)[0].MeshIndex == -1)
	{
		World->ChunkInstancedTasksKey.lock();
		for (auto& instance : *HasMeshInstances)
		{
			auto& meshes = World->ChunkInstancedMesh[instance.MeshEntry->MeshIndex];

			for (int i = 0; i < meshes.size(); i++)
			{
				if (meshes[i].ChunkData != ChunkData || (meshes[i].Mesh && meshes[i].Mesh->GetInstanceCount() > 2048))
					continue;

				meshes[i].Add.Add(this);
				meshes[i].AddInfos.Add(&instance);
				meshes[i].NeedsUpdate = true;
				instance.MeshIndex = i;
				break;
			}
			if (instance.MeshIndex == -1)
			{
				instance.MeshIndex = meshes.size();
				meshes.push_back(FInstanceMeshData());
				meshes.back().Add.Add(this);
				meshes.back().AddInfos.Add(&instance);
				meshes.back().NeedsUpdate = true;
				meshes.back().ChunkData = ChunkData;
			}

		}
		World->ChunkInstancedTasks = true;
		World->ChunkInstancedTasksKey.unlock();
		World->GameThreadWorkWaitings = true;
	}
}

void FChunk::RemoveInstanceMeshs()
{
	if (HasMeshInstances && (*HasMeshInstances)[0].MeshIndex != -1)
	{
		World->ChunkInstancedTasksKey.lock();
		for (auto& instance : *HasMeshInstances)
		{
			World->ChunkInstancedMesh[instance.MeshEntry->MeshIndex][instance.MeshIndex].Remove.Add(this);
			World->ChunkInstancedMesh[instance.MeshEntry->MeshIndex][instance.MeshIndex].RemoveCount.Add(instance.WorldPoses.Num());
			World->ChunkInstancedMesh[instance.MeshEntry->MeshIndex][instance.MeshIndex].NeedsUpdate = true;
			instance.MeshIndex = -1;
		}
		World->ChunkInstancedTasks = true;
		World->ChunkInstancedTasksKey.unlock();
		World->GameThreadWorkWaitings = true;
	}
}

void FChunk::RenderChunks(std::vector<FChunk*>& renderChunksRenderThread, FRHICommandListImmediate& RHICmdList, bool generatorShouldBeOnline,
	AChunkWorld* world) {

	TRACE_CPUPROFILER_EVENT_SCOPE_STR("UChunkBase::RenderChunks");
	if (renderChunksRenderThread.size() != 0){

	for (auto chunk : world->DelChunksRenderThread)
	{
		delete chunk->MainProxySection;
		delete chunk;
	}

	world->DelChunksRenderThread.clear();

	if (!generatorShouldBeOnline)
	{
		for (auto chunk : renderChunksRenderThread)
		{
			chunk->TempTask->Panic();
			delete chunk->TempTask;

			chunk->IsReady = true;
		}
		return;
	}

	for (auto chunk : renderChunksRenderThread)
	{
		auto newMainProxySection = chunk->TempTask->NewMainProxySection;
		auto tempTask = chunk->TempTask;
		if (newMainProxySection->ProxySections.size() != 0)
		{
			LLM_SCOPE_BYNAME("ChunkWorldVisualMeshRHIBuffer");
			newMainProxySection->StaticMeshVertexBuffer.InitResource(RHICmdList);
			newMainProxySection->PositionVertexBuffer.InitResource(RHICmdList);

			FLocalVertexFactory::FDataType Data;
			newMainProxySection->PositionVertexBuffer.BindPositionVertexBuffer(&newMainProxySection->VertexFactory, Data);
			newMainProxySection->StaticMeshVertexBuffer.BindTangentVertexBuffer(&newMainProxySection->VertexFactory, Data);
			newMainProxySection->StaticMeshVertexBuffer.BindPackedTexCoordVertexBuffer(&newMainProxySection->VertexFactory, Data);

			for (auto section : newMainProxySection->ProxySections)
			{
				section->IndexBuffer.InitResource(RHICmdList);
				section->IndexBuffer.Indices.Empty();
			}

			newMainProxySection->VertexFactory.SetData(RHICmdList, Data);

			newMainProxySection->VertexFactory.InitResource(RHICmdList);
#if RHI_RAYTRACING
			if (IsRayTracingEnabled() && chunk->ChunkData->Shadows)
			{
				newMainProxySection->RayIndexBuffer.InitResource(RHICmdList);
				newMainProxySection->RayPositionVertexBuffer.InitResource(RHICmdList);
				FRayTracingGeometryInitializer Initializer;
				Initializer.DebugName = "WorldRayTracing";
				Initializer.IndexBuffer = newMainProxySection->RayIndexBuffer.IndexBufferRHI;
				Initializer.TotalPrimitiveCount = newMainProxySection->RayIndexBuffer.Indices.Num() / 3;
				Initializer.GeometryType = RTGT_Triangles;
				Initializer.bFastBuild = true;
				Initializer.bAllowUpdate = false;

				newMainProxySection->RayTracingGeometry.SetInitializer(Initializer);

				int RayTracingIndicesOffset = 0;
				for (auto& SrcSection : *tempTask->NewFinalMeshSections)
				{
					FRayTracingGeometrySegment Segment;
					Segment.FirstPrimitive = RayTracingIndicesOffset;
					Segment.NumPrimitives = SrcSection.LowIndexBufferSize / 3;
					Segment.VertexBuffer = newMainProxySection->RayPositionVertexBuffer.VertexBufferRHI;
					Segment.MaxVertices = newMainProxySection->RayPositionVertexBuffer.GetNumVertices();
					newMainProxySection->RayTracingGeometry.Initializer.Segments.Add(Segment);

					RayTracingIndicesOffset += SrcSection.LowIndexBufferSize / 3;
				}
				newMainProxySection->RayTracingGeometry.InitResource(RHICmdList);
			}
#endif
		}
		delete chunk->MainProxySection;
		if (newMainProxySection->ProxySections.size() == 0)
		{
			chunk->MainProxySection = nullptr;
			delete newMainProxySection;
			newMainProxySection = nullptr;
		}
		else
		{
			chunk->MainProxySection = newMainProxySection;
			newMainProxySection = nullptr;
		}

		if (tempTask->PartReady)
		{
			chunk->IsReady = true;
			delete tempTask;
		}
		else
			tempTask->PartReady = true;
	}
	}

	TRACE_CPUPROFILER_EVENT_SCOPE_STR("Refresh Render");

	for (auto target : world->ChunkComponent)
	{
		target->RenderTargets.clear();
	}

	world->ChunkStackKey.lock();
	int next = 0;
	for (auto chunk : world->ChunkStack)
	{
		world->Run(chunk, &world->ChunkComponent[next]->RenderTargets);
		next++;
		if (next > 7)
			next = 0;
	}
	world->ChunkStackKey.unlock();
}

void FChunk::CollisionChunks(std::vector<FChunk*>& collisionChunksGameThread, bool generatorShouldBeOnline) {

	TRACE_CPUPROFILER_EVENT_SCOPE_STR("UChunkBase::CollisionChunks");

	if (!generatorShouldBeOnline)
	{
		for (auto chunk : collisionChunksGameThread)
		{
			chunk->TempTask->Panic();
			delete chunk->TempTask;

			chunk->IsReady = true;
		}
		return;
	}

	for (auto chunk : collisionChunksGameThread)
	{
		auto tempTask = chunk->TempTask;
		auto chunkBody = chunk->ChunkBody;
		delete chunkBody->FinalMeshSections;
		chunkBody->FinalMeshSections = tempTask->NewFinalMeshSections;

		if (!chunk->RenderIt)
			chunkBody->ChunkBodyInstance->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		auto transform = FTransform();

		transform.SetLocation(chunkBody->WorldStart);

		transform.SetScale3D(FVector(1, 1, 1));

		transform = transform * chunkBody->OwnerComponent->GetComponentTransform();

		if (tempTask->DoUpdate)
			chunkBody->ChunkBodyInstance->TermBody();

		free(chunkBody->LowMaterialIndexBuffer);
		chunkBody->LowMaterialIndexBuffer = tempTask->NewLowMaterialIndexBuffer;

		free(chunkBody->LowBlockIndexBuffer);
		chunkBody->LowBlockIndexBuffer = tempTask->NewLowBlockIndexBuffer;

		if (chunkBody->ChunkBodyInstance->InstanceBodyIndex == INDEX_NONE)
		{
			int index = INDEX_NONE;
			for (int i = 0; i < chunk->World->ActiveCollisions.size(); i++)
			{
				if (chunk->World->ActiveCollisions[i] == nullptr)
				{
					index = i;
					break;
				}
			}

			if (index == INDEX_NONE)
			{
				index = chunk->World->ActiveCollisions.size();
				chunk->World->ActiveCollisions.push_back(chunk->ChunkBody);
			}
			else
				chunk->World->ActiveCollisions[index] = chunk->ChunkBody;

			chunkBody->ChunkBodyInstance->InstanceBodyIndex = index;
		}

		chunkBody->ChunkBodyInstance->InitBody(chunkBody->ChunkBodySetup, transform,
			chunkBody->OwnerComponent, chunkBody->OwnerComponent->GetWorld()->GetPhysicsScene());

		if (chunk->ChunkData->InstancedMeshCollision && chunk->HasMeshInstances)
		{

			if (!chunkBody->InstanceMeshBodyInstances)
				chunkBody->InstanceMeshBodyInstances = new std::vector<TArray<FInstanceCollisionData*>>();
			else if(tempTask->DoUpdate){
				for (int i = 0; i < chunkBody->InstanceMeshBodyInstances->size(); i++)
				{
					auto& instances = (*chunkBody->InstanceMeshBodyInstances)[i];

					for (int j = 0; j < instances.Num(); j++)
					{
						instances[j]->BodyInstance.SetCollisionEnabled(ECollisionEnabled::NoCollision);
						instances[j]->MeshEntry->UnusedCollisions.Add(instances[j]);
					}
				}
				chunkBody->InstanceMeshBodyInstances->clear();
			}

			auto& mainInstances = *chunkBody->InstanceMeshBodyInstances;

			while (mainInstances.size() < chunk->HasMeshInstances->size())
				mainInstances.push_back(TArray<FInstanceCollisionData*>());

			auto collisionEnabled = chunk->ChunkData->InstancedMeshCollisionEnabled;
			auto ownerComponent = chunk->World->ChunkComponent[1];
			for (int instance = 0; instance < chunk->HasMeshInstances->size(); instance++)
			{
				auto& instances = mainInstances[instance];
				auto& hasMeshInstance = (*chunk->HasMeshInstances)[instance];
				auto& meshEntry = hasMeshInstance.MeshEntry;
				auto& unused = meshEntry->UnusedCollisions;
				for (int i = 0; i < hasMeshInstance.WorldPoses.Num(); i++)
				{
					auto instTransform = hasMeshInstance.Transforms[i] * ownerComponent->GetComponentTransform();
					auto& instWorldPos = hasMeshInstance.WorldPoses[i];

					if (i < instances.Num())
					{
						auto& body = instances[i]->BodyInstance;
						instances[i]->WorldPos = instWorldPos;
						if (chunk->RenderIt)
						{
							body.SetCollisionEnabled(collisionEnabled);
						}
						else
						{
							body.SetCollisionEnabled(ECollisionEnabled::NoCollision);
						}
						body.SetBodyTransform(instTransform, ETeleportType::ResetPhysics);
					}
					else
					{
						if (unused.Num() == 0)
						{
							chunk->World->InstancedCollisions.Add(new FInstanceCollisionData(instWorldPos, chunk, meshEntry));
							auto& collision = chunk->World->InstancedCollisions.Last();
							instances.Add(chunk->World->InstancedCollisions.Last());
							auto& body = collision->BodyInstance;
							body.InstanceBodyIndex = chunk->World->InstancedCollisions.Num() - 1;
							body.OwnerComponent = ownerComponent;
							body.SetCollisionProfileName(chunk->ChunkData->InstancedMeshCollisionProfileName);
							if (chunk->RenderIt)
							{
								body.SetCollisionEnabled(collisionEnabled);
							}
							else
								body.SetCollisionEnabled(ECollisionEnabled::NoCollision);

							body.InitBody(meshEntry->Mesh->GetBodySetup(),
								instTransform, ownerComponent, ownerComponent->GetWorld()->GetPhysicsScene());
						}
						else
						{
							auto collision = unused.Last();
							collision->Chunk = chunk;
							collision->WorldPos = instWorldPos;
							auto& body = collision->BodyInstance;
							instances.Add(unused.Last());
							unused.RemoveAt(unused.Num() - 1);
							if (chunk->RenderIt)
							{
								body.SetCollisionEnabled(collisionEnabled);
							}
							else
								body.SetCollisionEnabled(ECollisionEnabled::NoCollision);
							body.SetBodyTransform(instTransform, ETeleportType::ResetPhysics);
						}
					}
				}

				if (hasMeshInstance.WorldPoses.Num() < instances.Num())
				{
					for (int i = hasMeshInstance.WorldPoses.Num(); i < instances.Num(); i++)
					{
						instances[i]->BodyInstance.SetCollisionEnabled(ECollisionEnabled::NoCollision);
						unused.Add(instances[i]);
					}
					instances.SetNum(hasMeshInstance.WorldPoses.Num());
				}
			}
		}


		if (tempTask->PartReady)
		{
			chunk->IsReady = true;
			delete tempTask;
		}
		else
			tempTask->PartReady = true;
	}
}

void FChunk::DestroyChunks(std::vector<FChunk*>& delChunksGameThread, AChunkWorld* world) {

	TRACE_CPUPROFILER_EVENT_SCOPE_STR("UChunkBase::DestroyChunks");

	bool generatorShouldBeOnline = world->GeneratorShouldBeOnline;

	for (auto chunk : delChunksGameThread)
	{
		auto chunkBody = chunk->ChunkBody;
		if (chunkBody) {
			delete chunkBody->FinalMeshSections;
			chunkBody->FinalMeshSections = nullptr;

			if (chunkBody->ChunkBodyInstance->InstanceBodyIndex != INDEX_NONE)
				chunk->World->ActiveCollisions[chunkBody->ChunkBodyInstance->InstanceBodyIndex] = nullptr;

			free(chunkBody->LowMaterialIndexBuffer);
			chunkBody->LowMaterialIndexBuffer = nullptr;
			free(chunkBody->LowBlockIndexBuffer);
			chunkBody->LowBlockIndexBuffer = nullptr;

			chunkBody->ChunkBodyInstance->TermBody();
			chunkBody->ChunkBodySetup->InvalidatePhysicsData();
			delete chunkBody->ChunkBodyInstance;

			if (chunkBody->InstanceMeshBodyInstances)
			{
				if (generatorShouldBeOnline)
					for (int i = 0; i < chunkBody->InstanceMeshBodyInstances->size(); i++)
					{
						for (auto instance : (*chunkBody->InstanceMeshBodyInstances)[i]) {
							instance->BodyInstance.SetCollisionEnabled(ECollisionEnabled::NoCollision);
						}
						(*chunk->HasMeshInstances)[i].MeshEntry->UnusedCollisions.Append((*chunkBody->InstanceMeshBodyInstances)[i]);
					}
				delete chunkBody->InstanceMeshBodyInstances;
			}


			chunkBody->ChunkBodySetup->RemoveFromRoot();

			chunkBody->RemoveFromRoot();

			chunkBody->ConditionalBeginDestroy();
		}

		if (chunk->HasMeshInstances)
		{
			chunk->RemoveInstanceMeshs();
			delete chunk->HasMeshInstances;
		}

		world->DelChunksRenderThread.push_back(chunk);
	}
}

void FChunk::ActivateChunks(std::vector<FChunk*>& activateChunksGameThread) {

	TRACE_CPUPROFILER_EVENT_SCOPE_STR("UChunkBase::ActivateChunks");

	for (auto chunk : activateChunksGameThread)
	{
		if (chunk->ShouldBeVisible) {
			for (auto child : chunk->Children)
				if (child)
				{
					child->RenderIt = false;
					child->RemoveInstanceMeshs();
				}
			chunk->RenderIt = true;
			chunk->AddInstanceMeshs();
		}
		else {
			for (auto child : chunk->Children)
				if (child)
				{
					child->RenderIt = true;
					child->AddInstanceMeshs();
				}
			chunk->RenderIt = false;
			chunk->RemoveInstanceMeshs();
		}

		if (chunk->ShouldBeVisible) {
			for (auto child : chunk->Children)
				if (child && child->ChunkBody)
					if (child->ChunkData->Collision)
					{
						child->ChunkBody->ChunkBodyInstance->SetCollisionEnabled(ECollisionEnabled::NoCollision);
						if (child->ChunkBody->InstanceMeshBodyInstances)
							for (auto& arr : *child->ChunkBody->InstanceMeshBodyInstances)
								for (auto instance : arr)
									instance->BodyInstance.SetCollisionEnabled(ECollisionEnabled::NoCollision);
					}
			if (chunk->ChunkBody)
			{
				chunk->ChunkBody->ChunkBodyInstance->SetCollisionEnabled(chunk->ChunkData->CollisionEnabled);
				if (chunk->ChunkBody->InstanceMeshBodyInstances)
					for (auto& arr : *chunk->ChunkBody->InstanceMeshBodyInstances)
						for (auto instance : arr)
							instance->BodyInstance.SetCollisionEnabled(chunk->ChunkData->InstancedMeshCollisionEnabled);
			}
		}
		else {
			for (auto child : chunk->Children)
				if (child && child->ChunkBody)
					if (child->ChunkData->Collision)
					{
						child->ChunkBody->ChunkBodyInstance->SetCollisionEnabled(chunk->ChunkData->CollisionEnabled);
						if (child->ChunkBody->InstanceMeshBodyInstances)
							for (auto& arr : *child->ChunkBody->InstanceMeshBodyInstances)
								for (auto instance : arr)
									instance->BodyInstance.SetCollisionEnabled(chunk->ChunkData->InstancedMeshCollisionEnabled);
					}
			if (chunk->ChunkBody)
			{
				chunk->ChunkBody->ChunkBodyInstance->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				if (chunk->ChunkBody->InstanceMeshBodyInstances)
					for (auto& arr : *chunk->ChunkBody->InstanceMeshBodyInstances)
						for (auto instance : arr)
							instance->BodyInstance.SetCollisionEnabled(ECollisionEnabled::NoCollision);
			}
		}
	}
}