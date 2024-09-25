// Copyright by EnginFirestorm, All Rights Reserved.

#pragma once

#include "ChunkWorldData.h"
#include "mutex"
#include "PrimitiveSceneProxy.h"
#include "SceneInterface.h"
#include "Chunk.h"
#include "SceneManagement.h"

class FChunkBaseSceneProxy : public FPrimitiveSceneProxy
{
public:
	std::vector<FChunkMainProxySection*>* RenderTargets;
	UPrimitiveComponent* Component;
	FMaterialRelevance MaterialRelevance;
	FChunkBaseSceneProxy(UPrimitiveComponent* component, std::vector<FChunkMainProxySection*>* renderTargets)
		: FPrimitiveSceneProxy(component), RenderTargets(renderTargets), Component(component)
	{
		TArray<UMaterialInterface*> materials;
		component->GetUsedMaterials(materials);
		for (auto mat : materials)
			MaterialRelevance |= mat->GetRelevance(GetScene().GetFeatureLevel());
	}

	SIZE_T GetTypeHash() const override
	{
		static size_t UniquePointer;
		return reinterpret_cast<size_t>(&UniquePointer);
	}

	virtual void DrawStaticElements(FStaticPrimitiveDrawInterface* PDI)
	{
		//auto targets = RenderTargets;
		//if (targets)
		//		{

		//			for (auto target : *targets) {
		//				if (!target->ProxySections)
		//					continue;

		//				for (int j = 0; j < target->ProxySections->size(); j++)
		//				{
		//					FChunkProxySection& Section = *(*target->ProxySections)[j];
		//					PDI->DrawMesh(Section.Mesh, FLT_MAX);
		//				}
		//			}
		//		}

	}

	void GetDynamicMeshElements(const TArray<const FSceneView*>& Views, const FSceneViewFamily& ViewFamily, uint32 VisibilityMap, FMeshElementCollector& Collector) const
	{
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("FChunkBaseSceneProxy::GetDynamicMeshElements");

		auto transform = Component->GetComponentTransform();

		//bool bHasPrecomputedVolumetricLightmap;
		//FMatrix PreviousLocalToWorld;
		//int32 SingleCaptureIndex;
		//bool bOutputVelocity;
		//GetScene().GetPrimitiveUniformShaderParameters_RenderThread(GetPrimitiveSceneInfo(), bHasPrecomputedVolumetricLightmap, PreviousLocalToWorld, SingleCaptureIndex, bOutputVelocity);
		//bOutputVelocity |= AlwaysHasVelocity();

		//FDynamicPrimitiveUniformBuffer& DynamicPrimitiveUniformBuffer = Collector.AllocateOneFrameResource<FDynamicPrimitiveUniformBuffer>();
		//DynamicPrimitiveUniformBuffer.Set(Collector.GetRHICommandList(), GetLocalToWorld(), PreviousLocalToWorld, GetBounds(), GetLocalBounds(), GetLocalBounds(), ReceivesDecals(), bHasPrecomputedVolumetricLightmap, bOutputVelocity, GetCustomPrimitiveData());

		if (RenderTargets)
			for (int32 ViewIndex = 0; ViewIndex < Views.Num(); ViewIndex++)
			{
				auto view = Views[ViewIndex];

				//if ((VisibilityMap & (1 << ViewIndex)))
				{
					auto viewlocation = view->ViewLocation;
					auto viewDirection = view->GetViewDirection();

					for (auto target : *RenderTargets) {

						auto chunkData = target->ChunkData;

						auto worldStart = target->WorldStart;
						auto worldEnd = target->WorldEnd;

						auto chunkVector = (transform.TransformPosition(worldStart) - viewlocation);

						if (!view->IsPrimarySceneView() && !target->ChunkData->Shadows)
							continue;

 						if (FMath::Abs(chunkVector.X) > chunkData->ChunkSize.X && FMath::Abs(chunkVector.Y) > chunkData->ChunkSize.Y && FMath::Abs(chunkVector.Z) > chunkData->ChunkSize.Z)
						{
							chunkVector.Normalize();
							if (FVector::DotProduct(chunkVector, viewDirection) < 0.5f)
							{
								chunkVector = (transform.TransformPosition(worldEnd) - viewlocation);
								if (FMath::Abs(chunkVector.X) > chunkData->ChunkSize.X && FMath::Abs(chunkVector.Y) > chunkData->ChunkSize.Y && FMath::Abs(chunkVector.Z) > chunkData->ChunkSize.Z)
								{
									chunkVector.Normalize();
									if (FVector::DotProduct(chunkVector, viewDirection) < 0.5f)
										continue;
								}
							}
						}

						for (int j = 0; j < target->ProxySections.size(); j++)
						{
							FChunkProxySection& Section = *(target->ProxySections)[j];

#if WITH_EDITOR
							Section.Mesh.MaterialRenderProxy = Section.Material->GetRenderProxy(); // The proxy can be changed in the editor while editing the material
#endif

							//Section.Mesh.Elements[0].PrimitiveUniformBufferResource = &DynamicPrimitiveUniformBuffer.UniformBuffer; // not working! and not needed? The "continue" more up is makes problems with this

							Collector.AddMesh(ViewIndex, Section.Mesh);
						}
					}
				}
			}
	}

#if RHI_RAYTRACING
	virtual bool IsRayTracingRelevant() const override { return true; }

	virtual bool HasRayTracingRepresentation() const override { return true; }

	virtual void GetDynamicRayTracingInstances(FRayTracingMaterialGatheringContext& Context, TArray<FRayTracingInstance>& OutRayTracingInstances) override final
	{
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("FChunkBaseSceneProxy::GetDynamicRayTracingInstances");

		if (RenderTargets)
		{
			auto transform = GetLocalToWorld();
			OutRayTracingInstances.Reserve(RenderTargets->size());
			for (auto target : *RenderTargets) {

				auto chunkData = target->ChunkData;

				if (!chunkData->Shadows || !target->RayTracingGeometry.RayTracingGeometryRHI)
					continue;

				FRayTracingInstance RayTracingInstance;
				RayTracingInstance.Geometry = &target->RayTracingGeometry;

				RayTracingInstance.InstanceTransforms.Add(transform);

				RayTracingInstance.Materials.Reserve(target->ProxySections.size());
				for (auto section : target->ProxySections)
				{
					RayTracingInstance.Materials.Add(section->Mesh);
				}
				OutRayTracingInstances.Add(RayTracingInstance);
			}
		}
	}
#endif

	virtual FPrimitiveViewRelevance GetViewRelevance(const FSceneView* View) const
	{
		FPrimitiveViewRelevance Result;
		MaterialRelevance.SetPrimitiveViewRelevance(Result);
		Result.bDrawRelevance = IsShown(View);
		Result.bShadowRelevance = IsShadowCast(View);
		Result.bDynamicRelevance = true;
		Result.bRenderInMainPass = ShouldRenderInMainPass();
		Result.bUsesLightingChannels = GetLightingChannelMask() != GetDefaultLightingChannelMask();
		Result.bRenderCustomDepth = ShouldRenderCustomDepth();
		Result.bTranslucentSelfShadow = bCastVolumetricTranslucentShadow;
		Result.bVelocityRelevance = DrawsVelocity() && Result.bOpaque && Result.bRenderInMainPass;
		return Result;
	}

	virtual bool CanBeOccluded() const override
	{
		return false;
	}

	virtual uint32 GetMemoryFootprint(void) const
	{
		return(sizeof(*this) + GetAllocatedSize());
	}

	uint32 GetAllocatedSize(void) const
	{
		return(FPrimitiveSceneProxy::GetAllocatedSize());
	}
};