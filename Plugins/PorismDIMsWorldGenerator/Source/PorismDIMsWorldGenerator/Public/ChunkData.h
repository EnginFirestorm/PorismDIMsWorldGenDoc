// Copyright by EnginFirestorm, All Rights Reserved.

#pragma once

#include "vector"
#include "Materials/MaterialInterface.h"
#include "Math/IntVector.h"
#include "RenderResource.h"
#include "Containers/Array.h"
#include "FastNoise/FastNoise.h"
#include "Rendering/StaticMeshVertexBuffer.h"
#include "Rendering/PositionVertexBuffer.h"
#include "LocalVertexFactory.h"
#include "RayTracingGeometry.h"
#include "RayTracingInstance.h"
#include "Engine/DataTable.h"
#include "ChunkWorldStructs.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "MeshBatch.h"

static bool Corner[256] =
{
 false, true, true, false, true, false, true, true,
 true, false, false, true, true, true, true, false,
 true, false, true, true, true, true, true, true,
 false, true, true, true, true, true, true, true,
 true, true, false, true, false, true, true, true,
 true, true, true, true, true, true, true, true,
 false, true, true, false, true, true, true, true,
 true, true, true, true, true, true, true, false,
 true, true, false, true, false, true, true, true,
 true, true, true, true, true, true, true, true,
 false, true, true, true, true, false, true, true,
 true, true, true, true, true, true, true, false,
 true, true, true, true, true, true, true, true,
 true, true, true, true, true, true, true, true,
 true, true, true, true, true, true, true, false,
 true, true, true, true, true, true, false, true,
 true, false, true, true, true, true, true, true,
 false, true, true, true, true, true, true, true,
 true, true, true, true, true, true, true, true,
 true, true, true, true, true, true, true, true,
 false, true, true, true, true, true, true, true,
 true, true, false, true, true, true, true, false,
 true, true, true, true, true, true, true, true,
 true, true, true, false, true, false, true, true,
 false, true, true, true, true, true, true, true,
 true, true, true, true, true, true, true, false,
 true, true, true, true, true, true, true, true,
 true, true, true, false, true, false, true, true,
 true, true, true, true, true, true, true, false,
 true, true, true, true, true, true, false, true,
 false, true, true, false, true, false, true, true,
 true, false, false, true, true, true, true, false,
};

static bool PlaneSt[256] =
{

 false, false, false, false, false, false, false, false,
 false, false, false, false, false, false, false, true,
 false, false, false, false, false, false, false, false,
 false, false, false, false, false, false, false, false,
 false, false, false, false, false, false, false, false,
 false, false, false, false, false, false, false, false,
 false, false, false, true, false, false, false, false,
 false, false, false, false, false, false, false, false,
 false, false, false, false, false, false, false, false,
 false, false, false, false, false, false, false, false,
 false, false, false, false, false, true, false, false,
 false, false, false, false, false, false, false, false,
 false, false, false, false, false, false, false, false,
 false, false, false, false, false, false, false, false,
 false, false, false, false, false, false, false, false,
 false, false, false, false, false, false, false, false,
 false, false, false, false, false, false, false, false,
 false, false, false, false, false, false, false, false,
 false, false, false, false, false, false, false, false,
 false, false, false, false, false, false, false, false,
 false, false, false, false, false, false, false, false,
 false, false, true, false, false, false, false, false,
 false, false, false, false, false, false, false, false,
 false, false, false, false, false, false, false, false,
 false, false, false, false, false, false, false, false,
 false, false, false, false, true, false, false, false,
 false, false, false, false, false, false, false, false,
 false, false, false, false, false, false, false, false,
 false, false, false, false, false, false, false, false,
 false, false, false, false, false, false, false, false,
 true, false, false, false, false, false, false, false,
 false, false, false, false, false, false, false, false,
};

struct FBaseVertex
{
	int16 PosX, PosY, PosZ;
	int8 NormX, NormY, NormZ;
	int8 OffsetX, OffsetY, OffsetZ;
	int16 XPYPZP, XMYPZP, XPYMZP, XMYMZP, XPYPZM, XMYPZM, XPYMZM, XMYMZM;

	FBaseVertex() {}

	FBaseVertex(int16 PosX, int16 PosY, int16 PosZ,
		int8 NormX, int8 NormY, int8 NormZ,
		int8 OffsetX, int8 OffsetY, int8 OffsetZ,
		int16 XPYPZP, int16 XMYPZP, int16 XPYMZP, int16 XMYMZP, int16 XPYPZM, int16 XMYPZM, int16 XPYMZM, int16 XMYMZM)
		: PosX(PosX), PosY(PosY), PosZ(PosZ), NormX(NormX), NormY(NormY), NormZ(NormZ),
		OffsetX(OffsetX), OffsetY(OffsetY), OffsetZ(OffsetZ),
		XPYPZP(XPYPZP), XMYPZP(XMYPZP), XPYMZP(XPYMZP), XMYMZP(XMYMZP), XPYPZM(XPYPZM), XMYPZM(XMYPZM), XPYMZM(XPYMZM), XMYMZM(XMYMZM) {}

	FBaseVertex(int16 PosX, int16 PosY, int16 PosZ,
		int8 NormX, int8 NormY, int8 NormZ,
		int8 OffsetX, int8 OffsetY, int8 OffsetZ)
		: PosX(PosX), PosY(PosY), PosZ(PosZ), NormX(NormX), NormY(NormY), NormZ(NormZ),
		OffsetX(OffsetX), OffsetY(OffsetY), OffsetZ(OffsetZ),
		XPYPZP(0), XMYPZP(0), XPYMZP(0), XMYMZP(0), XPYPZM(0), XMYPZM(0), XPYMZM(0), XMYMZM(0) {}

	bool operator==(const FBaseVertex& other) const
	{
		int32* thisData = (int32*)this;
		int32* otherData = (int32*)&other;

		return thisData[0] == otherData[0] && thisData[1] == otherData[1] && thisData[2] == otherData[2] && thisData[3] == otherData[3]
			&& thisData[4] == otherData[4] && thisData[5] == otherData[5] && thisData[6] == otherData[6];
	}

	bool IsSame(const FBaseVertex& other) const
	{
		int32* thisData = (int32*)this;
		int32* otherData = (int32*)&other;

		return thisData[3] == otherData[3] && thisData[4] == otherData[4] && thisData[5] == otherData[5] && thisData[6] == otherData[6];
	}

	bool IsCorner() const
	{
		int xmymzm = XMYMZM < 0;
		int xpymzm = XPYMZM < 0;
		int xmypzm = XMYPZM < 0;
		int xpypzm = XPYPZM < 0;
		int xmymzp = XMYMZP < 0;
		int xpymzp = XPYMZP < 0;
		int xmypzp = XMYPZP < 0;
		int xpypzp = XPYPZP < 0;
		return Corner[(xmymzm << 7) | (xpymzm << 6) | (xmypzm << 5) | (xpypzm << 4) | (xmymzp << 3) | (xpymzp << 2) | (xmypzp << 1) | xpypzp];
	}

	bool IsPlane() const
	{
		int xmymzm = XMYMZM < 0;
		int xpymzm = XPYMZM < 0;
		int xmypzm = XMYPZM < 0;
		int xpypzm = XPYPZM < 0;
		int xmymzp = XMYMZP < 0;
		int xpymzp = XPYMZP < 0;
		int xmypzp = XMYPZP < 0;
		int xpypzp = XPYPZP < 0;
		return PlaneSt[(xmymzm << 7) | (xpymzm << 6) | (xmypzm << 5) | (xpypzm << 4) | (xmymzp << 3) | (xpymzp << 2) | (xmypzp << 1) | xpypzp];
	}
};

template <>
struct std::hash<FBaseVertex>
{
	std::size_t operator()(const FBaseVertex& k) const
	{
		int32* thisData = (int32*)&k;
		return (std::hash<int32>()(thisData[0]) ^ (std::hash<int32>()(thisData[1]) << 1) ^ (std::hash<int32>()(thisData[3]) << 2));
	}
};

template<>
struct std::hash< FVector3f >
{
	std::size_t operator()(const FVector3f& k) const
	{
		return (std::hash<float>()(k.X) ^ (std::hash<float>()(k.Y) << 1)) >> 1 ^ (std::hash<float>()(k.Z) << 1);
	}
};

struct FVertex
{
	FVector3f Position;
	FVector3f Normal;
	int16 XPYPZP, XMYPZP, XPYMZP, XMYMZP, XPYPZM, XMYPZM, XPYMZM, XMYMZM;

	FVertex() {}

	FVertex(FVector3f Position, FVector3f Normal, int16 XPYPZP, int16 XMYPZP, int16 XPYMZP, int16 XMYMZP, int16 XPYPZM, int16 XMYPZM, int16 XPYMZM, int16 XMYMZM)
		: Position(Position), Normal(Normal), XPYPZP(XPYPZP), XMYPZP(XMYPZP), XPYMZP(XPYMZP), XMYMZP(XMYMZP), XPYPZM(XPYPZM), XMYPZM(XMYPZM), XPYMZM(XPYMZM), XMYMZM(XMYMZM) {}

};

class FChunk;

struct FInstanceMeshInfos
{
	FMeshEntry* MeshEntry;
	int MeshIndex;
	TArray<FTransform> Transforms;
	TArray<FIntVector> WorldPoses;

	FInstanceMeshInfos(FMeshEntry* MeshEntry, int MeshIndex)
		: MeshEntry(MeshEntry), MeshIndex(MeshIndex) {}
};

struct FInstanceMeshData
{
	UInstancedStaticMeshComponent* Mesh = nullptr;
	TArray<FChunk*> Chunks;
	TArray<int> ChunksCount;
	TArray<FChunk*> Add;
	TArray<FInstanceMeshInfos*> AddInfos;
	TArray<FChunk*> Remove;
	TArray<int> RemoveCount;
	FChunkData* ChunkData;
	bool NeedsUpdate;
};

struct FInstanceCollisionData
{
	FBodyInstance BodyInstance;
	FIntVector WorldPos;
	FChunk* Chunk;
	FMeshEntry* MeshEntry;

	FInstanceCollisionData(FIntVector WorldPos, FChunk* Chunk, FMeshEntry* MeshEntry)
		: WorldPos(WorldPos), Chunk(Chunk), MeshEntry(MeshEntry) {}
};

struct FInstanceMeshPose
{
	int MeshId;
	FVector Position;
	FInstanceMeshPose(int MeshId, FVector Position)
		: MeshId(MeshId), Position(Position) {}
};

class FWorldIndexBuffer : public FIndexBuffer
{
public:
	TArray<uint32> Indices;

	virtual void InitRHI(FRHICommandListBase& RHICmdList) override
	{
		auto i = Indices.Num();
		FRHIResourceCreateInfo CreateInfo(TEXT("FWorldIndexBuffer"));
		IndexBufferRHI = RHICmdList.CreateIndexBuffer(sizeof(uint32), i * sizeof(uint32), BUF_Static, CreateInfo);
		void* Buffer = RHICmdList.LockBuffer(IndexBufferRHI, 0, i * sizeof(uint32), RLM_WriteOnly);
		FMemory::Memcpy(Buffer, Indices.GetData(), i * sizeof(uint32));
		RHICmdList.UnlockBuffer(IndexBufferRHI);
	}
};