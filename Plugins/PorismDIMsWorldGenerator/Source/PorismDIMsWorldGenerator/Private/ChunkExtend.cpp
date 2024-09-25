// Copyright by EnginFirestorm, All Rights Reserved.

#define sallocd(Point, TargetBuff, Size, Default)\
TargetBuff; \
TargetBuff += Size; \
memset(Point, Default, Size); \

#define salloc(TargetBuff, Size)\
TargetBuff; \
TargetBuff += Size; \

#define CheckForChunkData(temp, start, chunkData, world, virtualStack, chunkPointer) \
{ \
	for (FTempChunkData& data : *temp) { \
		if (data.Start == start) \
			chunkPointer = data.ChunkData;	\
	} \
	if (chunkPointer == nullptr) \
	{ \
	chunkPointer = (int*)salloc(virtualStack, chunkData->PointBufferSize);\
		bool needGeneradeGrid = true; \
		{ \
			needGeneradeGrid = !world->DriveCache->Read(chunkPointer, chunkData->PointBufferSize, start.X / chunkData->ChunkBlockFactor.X, start.Y / chunkData->ChunkBlockFactor.Y, start.Z / chunkData->ChunkBlockFactor.Z, chunkData->BlockFactor);\
			if (needGeneradeGrid) \
			{ \
				virtualStack -= chunkData->PointBufferSize; \
				virtualStack = world->GenerateChunk(temp, chunkData, start, virtualStack, false); \
				for (FTempChunkData& data : *temp) { \
					if (data.Start == start) \
						chunkPointer = data.ChunkData; \
				} \
			} \
			if (!needGeneradeGrid) \
				temp->push_back({ chunkPointer, start }); \
		} \
	} \
}



#define PolyData(id, procMeshSections, SrcSection, chunkData, virtualStack, preVertexBufferSize, vertexSizeMax, vertexCount) \
FChunkSection* SrcSection = nullptr; \
{ \
	int material = id; \
	for (auto& SrcSec : *procMeshSections) \
	{ \
		if (SrcSec.MaterialIndex == material) \
		{ \
			SrcSection = &SrcSec; \
			break; \
		} \
	} \
	if (SrcSection == nullptr) { \
 \
		procMeshSections->push_back(FChunkSection()); \
		SrcSection = &procMeshSections->data()[procMeshSections->size() - 1]; \
		SrcSection->MaterialIndex = material; \
		SrcSection->PreIndexBufferSize = 0; \
		SrcSection->indexSizeMax = (chunkData->PointArraySize * 2) / vertexCount * vertexCount; \
		SrcSection->PreIndexBuffer = (int32*)salloc(virtualStack, sizeof(int32) * SrcSection->indexSizeMax); \
		SrcSection->PreBlockBuffer = (int32*)salloc(virtualStack, sizeof(int32) * SrcSection->indexSizeMax / 3); \
	} \
 \
	if (SrcSection->PreIndexBufferSize + vertexCount >= SrcSection->indexSizeMax) \
	{ \
		SrcSection->indexSizeMax *= 2; \
		{ \
			int32* unindexed_ind22 = (int32*)salloc(virtualStack, sizeof(int32) * SrcSection->indexSizeMax); \
			std::memcpy(unindexed_ind22, SrcSection->PreIndexBuffer, sizeof(int32) * SrcSection->PreIndexBufferSize); \
			SrcSection->PreIndexBuffer = unindexed_ind22; \
		} \
		{ \
			int32* unindexed_ind22 = (int32*)salloc(virtualStack, sizeof(int32) * SrcSection->indexSizeMax / 3); \
			std::memcpy(unindexed_ind22, SrcSection->PreBlockBuffer, sizeof(int32) * SrcSection->PreIndexBufferSize / 3); \
			SrcSection->PreBlockBuffer = unindexed_ind22; \
		} \
	} \
 \
	if (preVertexBufferSize + vertexCount >= vertexSizeMax) \
	{ \
		vertexSizeMax *= 2; \
		FBaseVertex* unindexed_vertic22 = (FBaseVertex*)salloc(virtualStack, sizeof(FBaseVertex) * vertexSizeMax); \
		std::memcpy(unindexed_vertic22, preVertexBuffer, sizeof(FBaseVertex) * preVertexBufferSize); \
		preVertexBuffer = unindexed_vertic22; \
	} \
}

#define HardNormalsExtra(Vertex0, Vertex1, Vertex2, Vertex3, Normal0)\
							auto Normal = Normal0;\
							Vertex0.NormX = Normal.X;\
							Vertex0.NormY = Normal.Y;\
							Vertex0.NormZ = Normal.Z;\
							Vertex1.NormX = Normal.X;\
							Vertex1.NormY = Normal.Y;\
							Vertex1.NormZ = Normal.Z;\
							Vertex2.NormX = Normal.X;\
							Vertex2.NormY = Normal.Y;\
							Vertex2.NormZ = Normal.Z;\
							Vertex3.NormX = Normal.X;\
							Vertex3.NormY = Normal.Y;\
							Vertex3.NormZ = Normal.Z;\
							preVertexBuffer[preVertexBufferSize] = Vertex0;\
							preVertexBuffer[preVertexBufferSize + 1] = Vertex1;\
							preVertexBuffer[preVertexBufferSize + 2] = Vertex2;\
							preVertexBuffer[preVertexBufferSize + 3] = Vertex3;\
							preVertexBuffer[preVertexBufferSize + 4] = Vertex2;\
							preVertexBuffer[preVertexBufferSize + 5] = Vertex1;\
							\
							SrcSection->PreIndexBuffer[SrcSection->PreIndexBufferSize] = preVertexBufferSize;\
							SrcSection->PreIndexBuffer[SrcSection->PreIndexBufferSize + 1] = preVertexBufferSize + 1;\
							SrcSection->PreIndexBuffer[SrcSection->PreIndexBufferSize + 2] = preVertexBufferSize + 2;\
							\
							SrcSection->PreIndexBuffer[SrcSection->PreIndexBufferSize + 3] = preVertexBufferSize + 3;\
							SrcSection->PreIndexBuffer[SrcSection->PreIndexBufferSize + 4] = preVertexBufferSize + 4;\
							SrcSection->PreIndexBuffer[SrcSection->PreIndexBufferSize + 5] = preVertexBufferSize + 5;\
							if (pb.ChunkData->Collision)\
							{\
								SrcSection->PreBlockBuffer[SrcSection->PreIndexBufferSize / 3] = pb.index;\
								SrcSection->PreBlockBuffer[SrcSection->PreIndexBufferSize / 3 + 1] = pb.index;\
							}\
							preVertexBufferSize += 6;\
							SrcSection->PreIndexBufferSize += 6;

#define SoftNormalsExtra(Vertex0, Vertex1, Vertex2, Vertex3, Vertex4, Vertex5)\
							SrcSection->PreIndexBuffer[SrcSection->PreIndexBufferSize] = Vertex0;\
							SrcSection->PreIndexBuffer[SrcSection->PreIndexBufferSize + 1] = Vertex1;\
							SrcSection->PreIndexBuffer[SrcSection->PreIndexBufferSize + 2] = Vertex2;\
							SrcSection->PreIndexBuffer[SrcSection->PreIndexBufferSize + 3] = Vertex3;\
							SrcSection->PreIndexBuffer[SrcSection->PreIndexBufferSize + 4] = Vertex4;\
							SrcSection->PreIndexBuffer[SrcSection->PreIndexBufferSize + 5] = Vertex5;\
							if (pb.ChunkData->Collision)\
							{\
								SrcSection->PreBlockBuffer[SrcSection->PreIndexBufferSize / 3] = pb.index;\
								SrcSection->PreBlockBuffer[SrcSection->PreIndexBufferSize / 3 + 1] = pb.index;\
							}\
							SrcSection->PreIndexBufferSize += 6;


#define DoRenderChunkBorder(chunkData, finalOutput, pointCountXY) \
pb.filled = 255; \
if (chunkData->RenderChunkBorder) { \
	for (int Z = 1; Z < chunkData->BlockCount.Z + 1; ++Z) \
		for (int X = 1; X < chunkData->BlockCount.X + 1; ++X) \
		{ \
			if (finalOutput[Z * pointCountXY + 1 * chunkData->PointCount.X + X] < 0) \
			{ \
				pb.filled -= YM; \
				break; \
			} \
		} \
	for (int Z = 1; Z < chunkData->BlockCount.Z + 1; ++Z) \
		for (int X = 1; X < chunkData->BlockCount.X + 1; ++X) \
		{ \
			if (finalOutput[Z * pointCountXY + chunkData->BlockCount.Y * chunkData->PointCount.X + X] < 0) \
			{ \
				pb.filled -= YP; \
				break; \
			} \
		} \
	for (int Z = 1; Z < chunkData->BlockCount.Z + 1; ++Z) \
		for (int Y = 1; Y < chunkData->BlockCount.Y + 1; ++Y) \
		{ \
			if (finalOutput[Z * pointCountXY + Y * chunkData->PointCount.X + 1] < 0) \
			{ \
				pb.filled -= XM; \
				break; \
			} \
		} \
	for (int Z = 1; Z < chunkData->BlockCount.Z + 1; ++Z) \
		for (int Y = 1; Y < chunkData->BlockCount.Y + 1; ++Y) \
		{ \
			if (finalOutput[Z * pointCountXY + Y * chunkData->PointCount.X + chunkData->BlockCount.X] < 0) \
			{ \
				pb.filled -= XP; \
				break; \
			} \
		} \
	for (int X = 1; X < chunkData->BlockCount.X + 1; ++X) \
		for (int Y = 1; Y < chunkData->BlockCount.Y + 1; ++Y) \
		{ \
			if (finalOutput[1 * pointCountXY + Y * chunkData->PointCount.X + X] < 0) \
			{ \
				pb.filled -= ZM; \
				break; \
			} \
		} \
	for (int X = 1; X < chunkData->BlockCount.X + 1; ++X) \
		for (int Y = 1; Y < chunkData->BlockCount.Y + 1; ++Y) \
		{ \
			if (finalOutput[chunkData->BlockCount.Z * pointCountXY + Y * chunkData->PointCount.X + X] < 0) \
			{ \
				pb.filled -= ZP; \
				break; \
			} \
		} \
}

#define SetIds() \
pb.id = pb.finalOutput[pb.index]; 

#define SetNeighbourIds() \
pb.idxm = pb.finalOutput[pb.indexZ + pb.indexY + pb.indexXM]; \
pb.idxp = pb.finalOutput[pb.indexZ + pb.indexY + pb.indexXP]; \
pb.idym = pb.finalOutput[pb.indexZ + pb.indexYM + pb.indexX]; \
pb.idyp = pb.finalOutput[pb.indexZ + pb.indexYP + pb.indexX]; \
pb.idzm = pb.finalOutput[pb.indexZM + pb.indexY + pb.indexX]; \
pb.idzp = pb.finalOutput[pb.indexZP + pb.indexY + pb.indexX];