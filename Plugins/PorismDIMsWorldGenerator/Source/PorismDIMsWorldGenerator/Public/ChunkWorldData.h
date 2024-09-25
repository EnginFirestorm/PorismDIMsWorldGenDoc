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
#include "MeshBatch.h"

struct FTarget
{
	/**Target in world block pos*/
	FIntVector Pos;
	/**Camera world vector*/
	FVector Cam;
	/**View distance size multiplier*/
	TArray<double> Multi;
};

struct FTempChunkData
{
public:
	int* ChunkData;
	FIntVector Start;
};