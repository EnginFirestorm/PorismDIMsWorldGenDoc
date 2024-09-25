// Copyright by EnginFirestorm, All Rights Reserved.

#pragma once

#include "RayTracingInstance.h"
#include "ChunkBaseSceneProxy.h"
#include "MaterialDomain.h"
#include "Components/MeshComponent.h"
#include "SceneInterface.h"
#include "Engine/World.h"
#include "Async/Async.h"
#include "Materials/Material.h"
#include "Chunk.h"
#include "ChunkBase.generated.h"

class AChunkWorld;

UCLASS()
class PORISMDIMSWORLDGENERATOR_API UChunkBase : public UMeshComponent
{
	GENERATED_BODY()

public:
	AChunkWorld* World;
	std::vector<FChunkMainProxySection*> RenderTargets;
	std::vector<UChunkBody*>* ActiveCollisions = nullptr;
	int MaterialNum = 0;

	UChunkBase()
	{
		bUseAsOccluder = false;
		SetCanEverAffectNavigation(false);
		SetIsReplicatedByDefault(true);
	}

	~UChunkBase()
	{
	}

	void OnUpdateTransform(EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport) override
	{
		if (ActiveCollisions)
		{
			FTransform comtransform = GetComponentTransform();
			for (auto chunk : *ActiveCollisions)
			{
				if (chunk)
				{
					auto transform = FTransform::Identity;

					transform.SetLocation(chunk->WorldStart);

					transform = transform * comtransform;

					chunk->ChunkBodyInstance->SetBodyTransform(transform, Teleport);
					chunk->ChunkBodyInstance->UpdateBodyScale(transform.GetScale3D());

					if (chunk->InstanceMeshBodyInstances)
					{
						auto& mainTransforms = *chunk->OwnerChunk->HasMeshInstances;
						auto& mainInstances = *chunk->InstanceMeshBodyInstances;
						for (int i = 0; i < mainTransforms.size(); i++)
						{
							auto& translist = mainTransforms[i].Transforms;
							auto& instlist = mainInstances[i];
							for (int j = 0; j < translist.Num(); j++)
							{
								transform = translist[j] * comtransform;
								instlist[j]->BodyInstance.SetBodyTransform(transform, Teleport);
								instlist[j]->BodyInstance.UpdateBodyScale(transform.GetScale3D());
							}
						}
					}
				}
			}
		}
	}

	virtual FPrimitiveSceneProxy* CreateSceneProxy() override
	{
		return new FChunkBaseSceneProxy(this, &RenderTargets);
	}

	virtual int32 GetNumMaterials() const override
	{
		return MaterialNum;
	}

	virtual FBoxSphereBounds CalcBounds(const FTransform& LocalToWorld) const override
	{
		return FBoxSphereBounds(FBoxSphereBounds(FVector(0), FVector(MAX_int32), MAX_int32));
	}
};