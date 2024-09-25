// Copyright by EnginFirestorm, All Rights Reserved.

#pragma once

#include "PhysicsEngine/BodySetup.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Components/MeshComponent.h"
#include "ChunkWorldData.h"
#include "ChunkData.h"
#include "Kismet/KismetMathLibrary.h"
#include "Chunk.generated.h"

class UChunkBase;
class AChunkWorld;
class UChunkBody;



struct FChunkProxySection
{
public:
	FMeshBatch Mesh;
	UMaterialInterface* Material;
	FWorldIndexBuffer IndexBuffer;

	FChunkProxySection(UMaterialInterface* Material) : Material(Material) {}

	~FChunkProxySection()
	{
		IndexBuffer.ReleaseResource();
	}
};

class FChunkMainProxySection
{
public:
	FVector WorldStart;
	FVector WorldEnd;
	UChunkBase* OwnerComponent;
	FChunkData* ChunkData;
	FStaticMeshVertexBuffer StaticMeshVertexBuffer;
	FPositionVertexBuffer PositionVertexBuffer;
	FLocalVertexFactory VertexFactory;
	std::vector<FChunkProxySection*> ProxySections;
#if RHI_RAYTRACING
	FWorldIndexBuffer RayIndexBuffer;
	FPositionVertexBuffer RayPositionVertexBuffer;
	FRayTracingGeometry RayTracingGeometry;
#endif

	FChunkMainProxySection(ERHIFeatureLevel::Type InFeatureLevel) : VertexFactory(InFeatureLevel, "FChunkProxySection") {}

	~FChunkMainProxySection() {

		for (int i = 0; i < ProxySections.size(); i++)
		{
			delete ProxySections[i];
		}

		PositionVertexBuffer.ReleaseResource();
		StaticMeshVertexBuffer.ReleaseResource();
		VertexFactory.ReleaseResource();
#if RHI_RAYTRACING
		RayTracingGeometry.ReleaseResource();
		RayPositionVertexBuffer.ReleaseResource();
		RayIndexBuffer.ReleaseResource();
#endif
	}
};

struct FChunkSection
{
public:
	UMaterialInterface* Material;
	int PreIndexBufferSize = 0;
	int indexSizeMax = 0;
	int32* PreIndexBuffer;
	int32* PreBlockBuffer;

	int32* ProcIndexBuffer;
	size_t ProcIndexBufferSize;

	int32* LowIndexBuffer;
	int LowIndexBufferSize;

	int MaterialIndex;
};

struct FChunkTask
{
	//Temp Heap pointer
	FChunkMainProxySection* NewMainProxySection = nullptr;
	std::vector<FChunkSection>* NewFinalMeshSections = nullptr;
	int32* NewLowMaterialIndexBuffer = nullptr;
	int32* NewLowBlockIndexBuffer = nullptr;
	std::vector<FInstanceMeshInfos>* NewMeshInstances = nullptr;

	//Stack buffer
	FVertex* FinalVertexBuffer;
	FVector3f* LowVertexBuffer;
	int32* LowIndexBuffer;
	int32* LowBlockBuffer;
	int32* LowMaterialBuffer;

	//New state for async generation
	bool PartReady = false;

	//New state for async update
	bool DoUpdate = false;

	void Panic() {
		if (NewMainProxySection != nullptr)
			delete NewMainProxySection;
		if (NewFinalMeshSections != nullptr)
			delete NewFinalMeshSections;
		if (NewLowMaterialIndexBuffer != nullptr)
			free(NewLowMaterialIndexBuffer);
		if (NewLowBlockIndexBuffer != nullptr)
			free(NewLowBlockIndexBuffer);
	}
};

/** Here is not much to change except from the GeneratePolyData function in case of a extention */
class FChunk
{
public:
	AChunkWorld* World;
	FChunkData* ChunkData;
	FChunk* Parent;

	FChunkTask* TempTask = nullptr;
	UChunkBody* ChunkBody = nullptr;
	FChunkMainProxySection* MainProxySection = nullptr;

	std::vector<FChunk*> Children;

	std::vector<FInstanceMeshInfos>* HasMeshInstances = nullptr;

	FIntVector Start;

	int ParentSelfIndex;

	int LastCheck = 0;

	int NativVertexBufferSize = 0;
	int NativIndexBufferSize = 0;
	int FinalVertexBufferSize = 0;
	int LowVertexBufferSize = 0;
	int LowIndexBufferSize = 0;

	//If true, the Chunk needs to be generated
	bool IsReady = false;

	//If true, then there is a change running
	bool UpdateMode = false;

	//Is the Chunk is visible?
	bool RenderIt = false;
	//New visibility state for async update
	bool ShouldBeVisible = false;

	//Clients can not save Chunk Data, they can only cache the generator data, so they need to request the save data from the server
	bool NeedNetSaveData = false;

	/** Is the main function for the call from chunkWorld */
	void CreateMeshSection(std::vector<FTempChunkData>* temp, char* virtualStack);

	/** Generates the mesh data */
	virtual void GeneratePolyData(std::vector<FTempChunkData>* temp, char* virtualStack, FVector worldStart) {}

	virtual ~FChunk() {};

	/** Fills the render buffers */
	void AddReplaceSection();

	FUint64Vector4 ReportPolyData() {

		if (ChunkData == nullptr)
			return FUint64Vector4(0, 0, 0, 0);

		FUint64Vector4 ret;
		uint32* re = (uint32*)&ret;

		re[0] = NativVertexBufferSize;
		re[1] = FinalVertexBufferSize;
		re[2] = ChunkData->Shadows || ChunkData->Collision ? LowVertexBufferSize : 0;
		re[3] = NativIndexBufferSize / 3;
		re[4] = LowIndexBufferSize / 3;
		re[5] = ChunkData->Shadows || ChunkData->Collision ? LowIndexBufferSize / 3 : 0;
		return ret;
	}

	void AddInstanceMeshs();

	void RemoveInstanceMeshs();

	static void ActivateChunks(std::vector<FChunk*>& activateChunksGameThread);

	static void RenderChunks(std::vector<FChunk*>& renderChunksRenderThread, FRHICommandListImmediate& RHICmdList, bool generatorShouldBeOnline,AChunkWorld* world);

	static void CollisionChunks(std::vector<FChunk*>& collisionChunksGameThread, bool generatorShouldBeOnline);

	static void DestroyChunks(std::vector<FChunk*>& delChunksGameThread, AChunkWorld* world);
};


UCLASS()
class PORISMDIMSWORLDGENERATOR_API UChunkBody : public UObject, public IInterface_CollisionDataProvider
{
	GENERATED_BODY()

public:
	UPROPERTY()
	UBodySetup* ChunkBodySetup = nullptr;
	FBodyInstance* ChunkBodyInstance = nullptr;
	std::vector<TArray<FInstanceCollisionData*>>* InstanceMeshBodyInstances = nullptr;
	FChunk* OwnerChunk = nullptr;
	FVector WorldStart;
	UChunkBase* OwnerComponent;
	// Permament buffers if Chunk is used for collision (Terraforming)
	std::vector<FChunkSection>* FinalMeshSections = nullptr;
	int32* LowMaterialIndexBuffer = nullptr;
	int32* LowBlockIndexBuffer = nullptr;

	virtual bool GetTriMeshSizeEstimates(struct FTriMeshCollisionDataEstimates& OutTriMeshEstimates, bool bInUseAllTriData) const override
	{
		OutTriMeshEstimates.VerticeCount = OwnerChunk->LowVertexBufferSize;
		return true;
	}

	virtual bool GetPhysicsTriMeshData(struct FTriMeshCollisionData* CollisionData, bool InUseAllTriData) override
	{
		for (int32 VertIdx = 0; VertIdx < OwnerChunk->LowVertexBufferSize; VertIdx++)
		{
			CollisionData->Vertices.Add(OwnerChunk->TempTask->LowVertexBuffer[VertIdx]);
		}

		for (int32 SectionIdx = 0; SectionIdx < OwnerChunk->TempTask->NewFinalMeshSections->size(); SectionIdx++)
		{
			FChunkSection& Section = (*OwnerChunk->TempTask->NewFinalMeshSections)[SectionIdx];

			const int32 NumTriangles = Section.LowIndexBufferSize / 3;
			for (int32 TriIdx = 0; TriIdx < NumTriangles; TriIdx++)
			{
				FTriIndices Triangle;
				Triangle.v0 = Section.LowIndexBuffer[(TriIdx * 3) + 0];
				Triangle.v1 = Section.LowIndexBuffer[(TriIdx * 3) + 1];
				Triangle.v2 = Section.LowIndexBuffer[(TriIdx * 3) + 2];

				CollisionData->Indices.Add(Triangle);

				CollisionData->MaterialIndices.Add(SectionIdx);
			}
		}

		CollisionData->bDisableActiveEdgePrecompute = false;
		CollisionData->bFlipNormals = true;
		CollisionData->bDeformableMesh = false;
		CollisionData->bFastCook = true;

		return true;
	}
	virtual bool ContainsPhysicsTriMeshData(bool InUseAllTriData) const override
	{
		if (OwnerChunk->TempTask->NewFinalMeshSections != nullptr)
			for (const FChunkSection& Section : *OwnerChunk->TempTask->NewFinalMeshSections)
			{
				if (Section.ProcIndexBufferSize >= 3)
				{
					return true;
				}
			}
		return false;
	}

	virtual bool WantsNegXTriMesh() override { return false; }
};

enum DirectBitNeighbors
{
	XM = 1 << 0,
	YM = 1 << 1,
	ZM = 1 << 2,
	XP = 1 << 3,
	YP = 1 << 4,
	ZP = 1 << 5
};

struct FPolyBuilder {
	FChunkData* ChunkData;
	FChunkTask* TempTask;
	char* virtualStack;
	std::vector <FInstanceMeshPose> meshPoses;
	std::vector<FChunkSection>* procMeshSections;
	AChunkWorld* World;
	FVertex* procVertexBuffer;
	FVector3f* lowVertexBuffer;
	int32* lowIndexBuffer;
	int32* lowMaterialBuffer;
	FIntVector start;

	int indexSizeNow;
	int lowVertexBufferSize;
	int lowIndexBufferSize;
	int procVertexBufferSize;
	int filled;
	int pointCountXY;
	int X, Y, Z;
	int index, indexX, indexY, indexZ;
	int indexXM, indexXP, indexYM, indexYP, indexZM, indexZP;

	int* finalOutput;
	int* XRowBuffer;
	int id;
	int idxm, idxp, idym, idyp, idzm, idzp;
	int idxmym, idxmyp, idxmzm, idxmzp, idxpym, idxpyp, idxpzm, idxpzp, idymzm, idymzp, idypzm, idypzp;
	int idxmymzm, idxmymzp, idxmypzm, idxmypzp, idxpymzm, idxpymzp, idxpypzm, idxpypzp;


	bool xm, xp, ym, yp, zm, zp;
	bool xmym, xmyp, xmzm, xmzp, xpym, xpyp, xpzm, xpzp, ymzm, ymzp, ypzm, ypzp;
	bool xmymzm, xmymzp, xmypzm, xmypzp, xpymzm, xpymzp, xpypzm, xpypzp;

	bool border, XMBorder, XPBorder, YMBorder, YPBorder, ZMBorder, ZPBorder;

	bool skip;

	void BaseSetup();
	void AdvancedSetup();
	void BaseMaterials();
	void ShadowCollision();
	void Finalize();
};