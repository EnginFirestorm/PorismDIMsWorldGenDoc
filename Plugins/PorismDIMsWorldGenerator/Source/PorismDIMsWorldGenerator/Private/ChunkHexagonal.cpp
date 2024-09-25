// Copyright by EnginFirestorm, All Rights Reserved.

#include "ChunkHexagonal.h"
#include "ChunkWorld.h"
#include <unordered_map>
#include <ChunkExtend.cpp>

void FHexagonalChunk::GeneratePolyData(std::vector<FTempChunkData>* temp, char* virtualStack, FVector worldStart)
{
	TRACE_CPUPROFILER_EVENT_SCOPE_STR("GeneratePolyData");
	FPolyBuilder pb;
	pb.TempTask = TempTask;
	pb.virtualStack = virtualStack;
	pb.XRowBuffer = (int*)alloca(sizeof(int) * ChunkData->PointCount.X);
	pb.World = World;
	// ChunkData--
	pb.ChunkData = ChunkData;
	pb.start = Start;
	// --ChunkData
	// DataOutput--
	pb.finalOutput = nullptr;
	int* saveOutput = (int*)salloc(virtualStack, pb.ChunkData->PointBufferSize);

	CheckForChunkData(temp, pb.start, pb.ChunkData, World, virtualStack, pb.finalOutput);

	bool saveFound = false;

	saveFound = World->DriveSave->Read(saveOutput, pb.ChunkData->PointBufferSize, Start.X / pb.ChunkData->ChunkBlockFactor.X, Start.Y / pb.ChunkData->ChunkBlockFactor.Y, Start.Z / pb.ChunkData->ChunkBlockFactor.Z, pb.ChunkData->BlockFactor);

	if (saveFound)
	{
		for (int i = 0; i < pb.ChunkData->PointArraySize; ++i)
			if (saveOutput[i] != 0)
				pb.finalOutput[i] = saveOutput[i];
	}
	else if (pb.finalOutput[pb.ChunkData->PointArraySize + pb.ChunkData->PointCount.Z] != 0 && !pb.ChunkData->TransparencySupport)
	{
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("Chunk homogeneous, no rendering necessary");
		return;
	}
	// --DataOutput
	//// Tools--
	//const UCubicBlock* tools = static_cast<UCubicBlock*>(ChunkData->BlockTools);
	//const auto useSoftNormals = tools->UseSoftNormals;
	//const auto bevels = tools->Bevels;
	//// --Tools
	// PolyData--
	pb.procVertexBufferSize = 0;
	pb.lowVertexBufferSize = 0;
	pb.lowIndexBufferSize = 0;
	int preVertexBufferSize = 0;
	pb.indexSizeNow = 0;
	int vertexSizeMax = pb.ChunkData->PointArraySize * 2;
	pb.pointCountXY = pb.ChunkData->PointCount.X * pb.ChunkData->PointCount.Y;
	FBaseVertex* preVertexBuffer = (FBaseVertex*)salloc(virtualStack, sizeof(FBaseVertex) * vertexSizeMax);
	pb.procMeshSections = new std::vector<FChunkSection>();
	pb.procVertexBuffer = nullptr;
	pb.lowVertexBuffer = nullptr;
	pb.lowIndexBuffer = nullptr;
	pb.lowMaterialBuffer = nullptr;
	// --PolyData
	{
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("Generate Shape");

		DoRenderChunkBorder(pb.ChunkData, pb.finalOutput, pb.pointCountXY)

			for (pb.Z = 1; pb.Z < pb.ChunkData->BlockCount.Z + 1; ++pb.Z)
			{
				// DataOutput--
				if (!saveFound && !pb.ChunkData->TransparencySupport)
				{
					if (pb.finalOutput[pb.ChunkData->PointArraySize + pb.Z] < 0)
						continue;
					else if (pb.finalOutput[pb.ChunkData->PointArraySize + pb.Z] > 0 && pb.finalOutput[pb.ChunkData->PointArraySize + pb.Z - 1] > 0 && pb.finalOutput[pb.ChunkData->PointArraySize + pb.Z + 1] > 0)
						continue;
				}
				// --DataOutput

				for (pb.Y = 1; pb.Y < pb.ChunkData->BlockCount.Y + 1; ++pb.Y)
				{
					memcpy(pb.XRowBuffer, pb.finalOutput + (pb.Z * pb.pointCountXY) + (pb.Y * ChunkData->PointCount.X), sizeof(int) * pb.ChunkData->PointCount.X);
					for (pb.X = 1; pb.X < pb.ChunkData->BlockCount.X + 1; ++pb.X)
					{
						pb.BaseSetup();
						if (pb.skip)
							continue;
						const bool rowFlip = pb.X % 2 == 1;

						pb.idxmym = pb.finalOutput[pb.indexZ + pb.indexYM + pb.indexXM];
						pb.idxmyp = pb.finalOutput[pb.indexZ + pb.indexYP + pb.indexXM];
						pb.idxpym = pb.finalOutput[pb.indexZ + pb.indexYM + pb.indexXP];
						pb.idxpyp = pb.finalOutput[pb.indexZ + pb.indexYP + pb.indexXP];

						pb.xmym = pb.idxmym < 0, pb.xmyp = pb.idxmyp < 0, pb.xpym = pb.idxpym < 0, pb.xpyp = pb.idxpyp < 0;

						bool viewxmA, viewxpA, viewxmB, viewxpB, viewym, viewyp, viewzm, viewzp;

						int idxmA, idxmB, idxpA, idxpB;
						bool xmA, xmB, xpA, xpB;

						if (rowFlip)
						{
							idxmA = pb.idxm;
							idxmB = pb.idxmyp;
							idxpA = pb.idxp;
							idxpB = pb.idxpyp;
							xmA = pb.xm;
							xmB = pb.xmyp;
							xpA = pb.xp;
							xpB = pb.xpyp;
						}
						else
						{
							idxmA = pb.idxmym;
							idxmB = pb.idxm;
							idxpA = pb.idxpym;
							idxpB = pb.idxp;
							xmA = pb.xmym;
							xmB = pb.xm;
							xpA = pb.xpym;
							xpB = pb.xp;
						}


						if (pb.ChunkData->TransparencySupport) {
							if (World->WorldGenDef->WorldMaterialDefs[pb.id].SupportTransparency)
							{
								viewxmA = xmA || pb.id != idxmA;
								viewxpA = xpA || pb.id != idxpA;
								viewxmB = xmB || pb.id != idxmB;
								viewxpB = xpB || pb.id != idxpB;
								viewym = pb.ym || pb.id != pb.idym;
								viewyp = pb.yp || pb.id != pb.idyp;
								viewzm = pb.zm || pb.id != pb.idzm;
								viewzp = pb.zp || pb.id != pb.idzp;
							}
							else
							{
								viewxmA = xmA || World->WorldGenDef->WorldMaterialDefs[idxmA].SupportTransparency;
								viewxpA = xpA || World->WorldGenDef->WorldMaterialDefs[idxpA].SupportTransparency;
								viewxmB = xmB || World->WorldGenDef->WorldMaterialDefs[idxmB].SupportTransparency;
								viewxpB = xpB || World->WorldGenDef->WorldMaterialDefs[idxpB].SupportTransparency;
								viewym = pb.ym || World->WorldGenDef->WorldMaterialDefs[pb.idym].SupportTransparency;
								viewyp = pb.yp || World->WorldGenDef->WorldMaterialDefs[pb.idyp].SupportTransparency;
								viewzm = pb.zm || World->WorldGenDef->WorldMaterialDefs[pb.idzm].SupportTransparency;
								viewzp = pb.zp || World->WorldGenDef->WorldMaterialDefs[pb.idzp].SupportTransparency;
							}
						}
						else
						{
							viewxmA = xmA;
							viewxpA = xpA;
							viewxmB = xmB;
							viewxpB = xpB;
							viewym = pb.ym;
							viewyp = pb.yp;
							viewzm = pb.zm;
							viewzp = pb.zp;
						}
						if (!pb.border)
							if (!viewxmA && !viewxpA && !viewxmB && !viewxpB && !viewym && !viewyp && !viewzm && !viewzp) // No visible faces and no pb.border
								continue;
						pb.AdvancedSetup();
						if (pb.border) {
							if (pb.XMBorder)
							{
								viewxmA = viewxmA || pb.xmym || pb.xmyp || pb.xmzm || pb.xmzp || pb.xmymzm || pb.xmymzp || pb.xmypzm || pb.xmypzp;
								viewxmB = viewxmB || pb.xmym || pb.xmyp || pb.xmzm || pb.xmzp || pb.xmymzm || pb.xmymzp || pb.xmypzm || pb.xmypzp;
							}
							if (pb.XPBorder)
							{
								viewxpA = viewxpA || pb.xpym || pb.xpyp || pb.xpzm || pb.xpzp || pb.xpymzm || pb.xpymzp || pb.xpypzm || pb.xpypzp;
								viewxpB = viewxpB || pb.xpym || pb.xpyp || pb.xpzm || pb.xpzp || pb.xpymzm || pb.xpymzp || pb.xpypzm || pb.xpypzp;
							}
							if (pb.YMBorder)
								viewym = viewym || pb.xmym || pb.xpym || pb.ymzm || pb.ymzp || pb.xmymzm || pb.xmymzp || pb.xpymzm || pb.xpymzp;
							if (pb.YPBorder)
								viewyp = viewyp || pb.xmyp || pb.xpyp || pb.ymzm || pb.ymzp || pb.xmypzm || pb.xmypzp || pb.xpypzm || pb.xpypzp;
							if (pb.ZMBorder)
								viewzm = viewzm || pb.xmzm || pb.xpzm || pb.ymzm || pb.ymzm || pb.xmymzm || pb.xmymzp || pb.xpymzm || pb.xpymzm;
							if (pb.ZPBorder)
								viewzp = viewzp || pb.xmzp || pb.xpzp || pb.ymzp || pb.ymzp || pb.xmymzp || pb.xmypzp || pb.xpypzp || pb.xpypzp;
						}
						// --RenderChunkBorder
						// LocalLocation--
						const int vecStartZ = (pb.Z - 1) * 100, vecEndZ = pb.Z * 100;
						const int vecStartXA = pb.X * 100 + 15 - 100, vecStartXB = pb.X * 100 - 15 - 100, vecEndXA = pb.X * 100 + 15, vecEndXB = pb.X * 100 - 15, vecNonX = pb.X * 100 - 50;
						int vecNonY = pb.Y * 100 - 50, vecStartY = (pb.Y - 1) * 100, vecEndY = pb.Y * 100;

						if (rowFlip)
						{
							vecStartY += 50;
							vecEndY += 50;
							vecNonY += 50;
						}

						auto pointXMYMZM = FIntVector(vecStartXA, vecStartY, vecStartZ);
						auto pointXMYMZP = FIntVector(vecStartXA, vecStartY, vecEndZ);
						auto pointXMYPZM = FIntVector(vecStartXA, vecEndY, vecStartZ);
						auto pointXMYPZP = FIntVector(vecStartXA, vecEndY, vecEndZ);
						auto pointXMZM = FIntVector(vecStartXB, vecNonY, vecStartZ);
						auto pointXMZP = FIntVector(vecStartXB, vecNonY, vecEndZ);
						auto pointXPYMZM = FIntVector(vecEndXB, vecStartY, vecStartZ);
						auto pointXPYMZP = FIntVector(vecEndXB, vecStartY, vecEndZ);
						auto pointXPYPZM = FIntVector(vecEndXB, vecEndY, vecStartZ);
						auto pointXPYPZP = FIntVector(vecEndXB, vecEndY, vecEndZ);
						auto pointXPZM = FIntVector(vecEndXA, vecNonY, vecStartZ);
						auto pointXPZP = FIntVector(vecEndXA, vecNonY, vecEndZ);
						auto pointZM = FIntVector(vecNonX, vecNonY, vecStartZ);
						auto pointZP = FIntVector(vecNonX, vecNonY, vecEndZ);

						FIntVector bevelsXMYMZM = FIntVector(0), bevelsXMYMZP = FIntVector(0), bevelsXMYPZM = FIntVector(0), bevelsXMYPZP = FIntVector(0),
							bevelsXMZM = FIntVector(0), bevelsXMZP = FIntVector(0),
							bevelsXPYMZM = FIntVector(0), bevelsXPYMZP = FIntVector(0), bevelsXPYPZM = FIntVector(0), bevelsXPYPZP = FIntVector(0),
							bevelsXPZM = FIntVector(0), bevelsXPZP = FIntVector(0),
							bevelsZM = FIntVector(0), bevelsZP = FIntVector(0);
						// --LocalLocation
						// Neighbors--
						//int neighborsXMYMZM, neighborsXMYMZP, neighborsXMYPZM, neighborsXMYPZP, neighborsXPYMZM, neighborsXPYMZP, neighborsXPYPZM, neighborsXPYPZP;
						//
						//if (bevels || useSoftNormals) {
						//	neighborsXMYMZM = xm * 64 + pb.ym * 32 + pb.xmym * 16 + pb.zm * 8 + pb.xmzm * 4 + pb.ymzm * 2 + pb.xmymzm * 1;
						//	neighborsXMYMZP = xm * 64 + pb.ym * 32 + pb.xmym * 16 + pb.zp * 8 + pb.xmzp * 4 + pb.ymzp * 2 + pb.xmymzp * 1;
						//	neighborsXMYPZM = xm * 64 + pb.yp * 32 + pb.xmyp * 16 + pb.zm * 8 + pb.xmzm * 4 + pb.ypzm * 2 + pb.xmypzm * 1;
						//	neighborsXMYPZP = xm * 64 + pb.yp * 32 + pb.xmyp * 16 + pb.zp * 8 + pb.xmzp * 4 + pb.ypzp * 2 + pb.xmypzp * 1;
						//	neighborsXPYMZM = xp * 64 + pb.ym * 32 + pb.xpym * 16 + pb.zm * 8 + pb.xpzm * 4 + pb.ymzm * 2 + pb.xpymzm * 1;
						//	neighborsXPYMZP = xp * 64 + pb.ym * 32 + pb.xpym * 16 + pb.zp * 8 + pb.xpzp * 4 + pb.ymzp * 2 + pb.xpymzp * 1;
						//	neighborsXPYPZM = xp * 64 + pb.yp * 32 + pb.xpyp * 16 + pb.zm * 8 + pb.xpzm * 4 + pb.ypzm * 2 + pb.xpypzm * 1;
						//	neighborsXPYPZP = xp * 64 + pb.yp * 32 + pb.xpyp * 16 + pb.zp * 8 + pb.xpzp * 4 + pb.ypzp * 2 + pb.xpypzp * 1;
						//	// --Bevels
						//	if (bevels) {
						//		bevelsXMYMZM = BevelsArray[neighborsXMYMZM] * FIntVector(-1, -1, -1);
						//		bevelsXMYMZP = BevelsArray[neighborsXMYMZP] * FIntVector(-1, -1, 1);
						//		bevelsXMYPZM = BevelsArray[neighborsXMYPZM] * FIntVector(-1, 1, -1);
						//		bevelsXMYPZP = BevelsArray[neighborsXMYPZP] * FIntVector(-1, 1, 1);
						//		bevelsXPYMZM = BevelsArray[neighborsXPYMZM] * FIntVector(1, -1, -1);
						//		bevelsXPYMZP = BevelsArray[neighborsXPYMZP] * FIntVector(1, -1, 1);
						//		bevelsXPYPZM = BevelsArray[neighborsXPYPZM] * FIntVector(1, 1, -1);
						//		bevelsXPYPZP = BevelsArray[neighborsXPYPZP] * FIntVector(1, 1, 1);
						//	}
						//	// --Bevels
						//}
						// --Neighbors

						PolyData(pb.id, pb.procMeshSections, SrcSection, pb.ChunkData, virtualStack, preVertexBufferSize, vertexSizeMax, 72)

							//	// UseSoftNormals--
							//	if (useSoftNormals)
							//	{
							//		int pb.indexXMYMZM, pb.indexXMYMZP, pb.indexXMYPZM, pb.indexXMYPZP, pb.indexXPYMZM, pb.indexXPYMZP, pb.indexXPYPZM, pb.indexXPYPZP;
		//
							//		if (viewxmA || viewym || viewzm) {
							//			auto normal = NormalsArray[neighborsXMYMZM];
							//			preVertexBuffer[preVertexBufferSize] = FBaseVertex(pointXMYMZM.X, pointXMYMZM.Y, pointXMYMZM.Z, -normal.X, -normal.Y, -normal.Z,
							//				bevelsXMYMZM.X, bevelsXMYMZM.Y, bevelsXMYMZM.Z, pb.id, pb.idxm, pb.idym, pb.idxmym, pb.idzm, pb.idxmzm, pb.idymzm, pb.idxmymzm);
							//			pb.indexXMYMZM = preVertexBufferSize;
							//			preVertexBufferSize++;
							//		}
							//		if (viewxmA || viewym || viewzp) {
							//			auto normal = NormalsArray[neighborsXMYMZP];
							//			preVertexBuffer[preVertexBufferSize] = FBaseVertex(pointXMYMZP.X, pointXMYMZP.Y, pointXMYMZP.Z, -normal.X, -normal.Y, normal.Z,
							//				bevelsXMYMZP.X, bevelsXMYMZP.Y, bevelsXMYMZP.Z, pb.idzp, pb.idxmzp, pb.idymzp, pb.idxmymzp, pb.id, pb.idxm, pb.idym, pb.idxmym);
							//			pb.indexXMYMZP = preVertexBufferSize;
							//			preVertexBufferSize++;
							//		}
							//		if (viewxmA || viewyp || viewzm) {
							//			auto normal = NormalsArray[neighborsXMYPZM];
							//			preVertexBuffer[preVertexBufferSize] = FBaseVertex(pointXMYPZM.X, pointXMYPZM.Y, pointXMYPZM.Z, -normal.X, normal.Y, -normal.Z,
							//				bevelsXMYPZM.X, bevelsXMYPZM.Y, bevelsXMYPZM.Z, pb.idyp, pb.idxmyp, pb.id, pb.idxm, pb.idypzm, pb.idxmypzm, pb.idzm, pb.idxmzm);
							//			pb.indexXMYPZM = preVertexBufferSize;
							//			preVertexBufferSize++;
							//		}
							//		if (viewxmA || viewyp || viewzp) {
							//			auto normal = NormalsArray[neighborsXMYPZP];
							//			preVertexBuffer[preVertexBufferSize] = FBaseVertex(pointXMYPZP.X, pointXMYPZP.Y, pointXMYPZP.Z, -normal.X, normal.Y, normal.Z,
							//				bevelsXMYPZP.X, bevelsXMYPZP.Y, bevelsXMYPZP.Z, pb.idypzp, pb.idxmypzp, pb.idzp, pb.idxmzp, pb.idyp, pb.idxmyp, pb.id, pb.idxm);
							//			pb.indexXMYPZP = preVertexBufferSize;
							//			preVertexBufferSize++;
							//		}
							//		if (viewxpA || viewym || viewzm) {
							//			auto normal = NormalsArray[neighborsXPYMZM];
							//			preVertexBuffer[preVertexBufferSize] = FBaseVertex(pointXPYMZM.X, pointXPYMZM.Y, pointXPYMZM.Z, normal.X, -normal.Y, -normal.Z,
							//				bevelsXPYMZM.X, bevelsXPYMZM.Y, bevelsXPYMZM.Z, pb.idxp, pb.id, pb.idxpym, pb.idym, pb.idxpzm, pb.idzm, pb.idxpymzm, pb.idymzm);
							//			pb.indexXPYMZM = preVertexBufferSize;
							//			preVertexBufferSize++;
							//		}
							//		if (viewxpA || viewym || viewzp) {
							//			auto normal = NormalsArray[neighborsXPYMZP];
							//			preVertexBuffer[preVertexBufferSize] = FBaseVertex(pointXPYMZP.X, pointXPYMZP.Y, pointXPYMZP.Z, normal.X, -normal.Y, normal.Z,
							//				bevelsXPYMZP.X, bevelsXPYMZP.Y, bevelsXPYMZP.Z, pb.idxpzp, pb.idzp, pb.idxpymzp, pb.idymzp, pb.idxp, pb.id, pb.idxpym, pb.idym);
							//			pb.indexXPYMZP = preVertexBufferSize;
							//			preVertexBufferSize++;
							//		}
							//		if (viewxpA || viewyp || viewzm) {
							//			auto normal = NormalsArray[neighborsXPYPZM];
							//			preVertexBuffer[preVertexBufferSize] = FBaseVertex(pointXPYPZM.X, pointXPYPZM.Y, pointXPYPZM.Z, normal.X, normal.Y, -normal.Z,
							//				bevelsXPYPZM.X, bevelsXPYPZM.Y, bevelsXPYPZM.Z, pb.idxpyp, pb.idyp, pb.idxp, pb.id, pb.idxpypzm, pb.idypzm, pb.idxpzm, pb.idzm);
							//			pb.indexXPYPZM = preVertexBufferSize;
							//			preVertexBufferSize++;
							//		}
							//		if (viewxpA || viewyp || viewzp) {
							//			auto normal = NormalsArray[neighborsXPYPZP];
							//			preVertexBuffer[preVertexBufferSize] = FBaseVertex(pointXPYPZP.X, pointXPYPZP.Y, pointXPYPZP.Z, normal.X, normal.Y, normal.Z,
							//				bevelsXPYPZP.X, bevelsXPYPZP.Y, bevelsXPYPZP.Z, pb.idxpypzp, pb.idypzp, pb.idxpzp, pb.idzp, pb.idxpyp, pb.idyp, pb.idxp, pb.id);
							//			pb.indexXPYPZP = preVertexBufferSize;
							//			preVertexBufferSize++;
							//		}
								//
							//		if (viewxmA) {
							//			SoftNormalsExtra(pb.indexXMYMZM, pb.indexXMYPZM, pb.indexXMYMZP, pb.indexXMYPZP, pb.indexXMYMZP, pb.indexXMYPZM)
							//		}
							//		if (viewxpA) {
							//			SoftNormalsExtra(pb.indexXPYMZM, pb.indexXPYMZP, pb.indexXPYPZM, pb.indexXPYPZP, pb.indexXPYPZM, pb.indexXPYMZP)
							//		}
							//		if (viewym) {
							//			SoftNormalsExtra(pb.indexXMYMZM, pb.indexXMYMZP, pb.indexXPYMZM, pb.indexXPYMZP, pb.indexXPYMZM, pb.indexXMYMZP)
							//		}
							//		if (viewyp) {
							//			SoftNormalsExtra(pb.indexXMYPZM, pb.indexXPYPZM, pb.indexXMYPZP, pb.indexXPYPZP, pb.indexXMYPZP, pb.indexXPYPZM)
							//		}
							//		if (viewzm) {
							//			SoftNormalsExtra(pb.indexXMYMZM, pb.indexXPYMZM, pb.indexXMYPZM, pb.indexXPYPZM, pb.indexXMYPZM, pb.indexXPYMZM)
							//		}
							//		if (viewzp) {
							//			SoftNormalsExtra(pb.indexXMYMZP, pb.indexXMYPZP, pb.indexXPYMZP, pb.indexXPYPZP, pb.indexXPYMZP, pb.indexXMYPZP)
							//		}
							//	}
							//// --UseSoftNormals
							//	else

									// HardNormals--
						{
							auto vertexXMYMZM = FBaseVertex(pointXMYMZM.X, pointXMYMZM.Y, pointXMYMZM.Z, 0, 0, 0, bevelsXMYMZM.X, bevelsXMYMZM.Y, bevelsXMYMZM.Z);
							auto vertexXMYMZP = FBaseVertex(pointXMYMZP.X, pointXMYMZP.Y, pointXMYMZP.Z, 0, 0, 0, bevelsXMYMZP.X, bevelsXMYMZP.Y, bevelsXMYMZP.Z);
							auto vertexXMYPZM = FBaseVertex(pointXMYPZM.X, pointXMYPZM.Y, pointXMYPZM.Z, 0, 0, 0, bevelsXMYPZM.X, bevelsXMYPZM.Y, bevelsXMYPZM.Z);
							auto vertexXMYPZP = FBaseVertex(pointXMYPZP.X, pointXMYPZP.Y, pointXMYPZP.Z, 0, 0, 0, bevelsXMYPZP.X, bevelsXMYPZP.Y, bevelsXMYPZP.Z);
							auto vertexXMZM = FBaseVertex(pointXMZM.X, pointXMZM.Y, pointXMZM.Z, 0, 0, 0, bevelsXMZM.X, bevelsXMZM.Y, bevelsXMZM.Z);
							auto vertexXMZP = FBaseVertex(pointXMZP.X, pointXMZP.Y, pointXMZP.Z, 0, 0, 0, bevelsXMZP.X, bevelsXMZP.Y, bevelsXMZP.Z);
							auto vertexXPYMZM = FBaseVertex(pointXPYMZM.X, pointXPYMZM.Y, pointXPYMZM.Z, 0, 0, 0, bevelsXPYMZM.X, bevelsXPYMZM.Y, bevelsXPYMZM.Z);
							auto vertexXPYMZP = FBaseVertex(pointXPYMZP.X, pointXPYMZP.Y, pointXPYMZP.Z, 0, 0, 0, bevelsXPYMZP.X, bevelsXPYMZP.Y, bevelsXPYMZP.Z);
							auto vertexXPYPZM = FBaseVertex(pointXPYPZM.X, pointXPYPZM.Y, pointXPYPZM.Z, 0, 0, 0, bevelsXPYPZM.X, bevelsXPYPZM.Y, bevelsXPYPZM.Z);
							auto vertexXPYPZP = FBaseVertex(pointXPYPZP.X, pointXPYPZP.Y, pointXPYPZP.Z, 0, 0, 0, bevelsXPYPZP.X, bevelsXPYPZP.Y, bevelsXPYPZP.Z);
							auto vertexXPZM = FBaseVertex(pointXPZM.X, pointXPZM.Y, pointXPZM.Z, 0, 0, 0, bevelsXPZM.X, bevelsXPZM.Y, bevelsXPZM.Z);
							auto vertexXPZP = FBaseVertex(pointXPZP.X, pointXPZP.Y, pointXPZP.Z, 0, 0, 0, bevelsXPZP.X, bevelsXPZP.Y, bevelsXPZP.Z);
							auto vertexZM = FBaseVertex(pointZM.X, pointZM.Y, pointZM.Z, 0, 0, 0, bevelsZM.X, bevelsZM.Y, bevelsZM.Z);
							auto vertexZP = FBaseVertex(pointZP.X, pointZP.Y, pointZP.Z, 0, 0, 0, bevelsZP.X, bevelsZP.Y, bevelsZP.Z);

							//auto vertexXMYMZM = FVertex(pointXMYMZM, FVector3f(0), 0, 1, 1, 1, 1, 1, 1, 1);
							//auto vertexXPYMZM = FVertex(pointXPYMZM, FVector3f(0), 1, 0, 2, 2, 2, 2, 2, 2);
							//auto vertexXMYPZM = FVertex(pointXMYPZM, FVector3f(0), 1, 1, 3, 3, 3, 3, 3, 3);
							//auto vertexXPYPZM = FVertex(pointXPYPZM, FVector3f(0), 0, 0, 4, 4, 4, 4, 4, 4);
							//auto vertexXMYMZP = FVertex(pointXMYMZP, FVector3f(0), 0, 1, 5, 5, 5, 5, 5, 5);
							//auto vertexXPYMZP = FVertex(pointXPYMZP, FVector3f(0), 1, 0, 6, 6, 6, 6, 6, 6);
							//auto vertexXMYPZP = FVertex(pointXMYPZP, FVector3f(0), 1, 1, 7, 7, 7, 7, 7, 7);
							//auto vertexXPYPZP = FVertex(pointXPYPZP, FVector3f(0), 0, 0, 8, 8, 8, 8, 8, 8);

							if (viewxmA) {
								HardNormalsExtra(vertexXMYMZM, vertexXMZM, vertexXMYMZP, vertexXMZP, FIntVector(-1, 1, 0))
							}
							if (viewxmB) {
								HardNormalsExtra(vertexXMZM, vertexXMYPZM, vertexXMZP, vertexXMYPZP, FIntVector(-1, -1, 0))
							}
							if (viewxpA) {
								HardNormalsExtra(vertexXPYMZM, vertexXPYMZP, vertexXPZM, vertexXPZP, FIntVector(1, 1, 0))
							}
							if (viewxpB) {
								HardNormalsExtra(vertexXPZM, vertexXPZP, vertexXPYPZM, vertexXPYPZP, FIntVector(1, -1, 0))
							}
							if (viewym) {
								HardNormalsExtra(vertexXMYMZM, vertexXMYMZP, vertexXPYMZM, vertexXPYMZP, FIntVector(0, -1, 0))
							}
							if (viewyp) {
								HardNormalsExtra(vertexXMYPZM, vertexXPYPZM, vertexXMYPZP, vertexXPYPZP, FIntVector(0, 1, 0))
							}
							if (viewzm) {
								{
									HardNormalsExtra(vertexXPZM, vertexZM, vertexXPYMZM, vertexXMYMZM, FIntVector(0, 0, -1))
								}
								{
									HardNormalsExtra(vertexZM, vertexXPZM, vertexXMYPZM, vertexXPYPZM, FIntVector(0, 0, -1))
								}
								{
									HardNormalsExtra(vertexZM, vertexXMYPZM, vertexXMYMZM, vertexXMZM, FIntVector(0, 0, -1))
								}
							}
							if (viewzp) {
								{
									HardNormalsExtra(vertexZP, vertexXPZP, vertexXMYMZP, vertexXPYMZP, FIntVector(0, 0, 1))
								}
								{
									HardNormalsExtra(vertexXPZP, vertexZP, vertexXPYPZP, vertexXMYPZP, FIntVector(0, 0, 1))
								}
								{
									HardNormalsExtra(vertexXMYMZP, vertexXMZP, vertexZP, vertexXMYPZP, FIntVector(0, 0, 1))
								}
							}
						}
						// --HardNormals
					}
				}
			}
	}
	{
		pb.BaseMaterials();

		NativVertexBufferSize = preVertexBufferSize;
		NativIndexBufferSize = pb.indexSizeNow;

		FBaseVertex* dummyVertexBuffer = nullptr;
		if (preVertexBufferSize > 0)
		{
			TRACE_CPUPROFILER_EVENT_SCOPE_STR("OptimizePolyData");
			int vertexSize = 0;
			auto arraySize = pb.ChunkData->BlockCount + FIntVector(1);
			//if (!pb.ChunkData->OptimizeVertexBuffer)
			{
				dummyVertexBuffer = preVertexBuffer;
				pb.procVertexBufferSize = preVertexBufferSize;
				for (int z = 0; z < pb.procMeshSections->size(); z++)
				{
					pb.procMeshSections->data()[z].ProcIndexBuffer = pb.procMeshSections->data()[z].PreIndexBuffer;
					pb.procMeshSections->data()[z].ProcIndexBufferSize = pb.procMeshSections->data()[z].PreIndexBufferSize;
				}
			}
			//else
			//{
			//	int itering = 1 + pb.ChunkData->OptimizeIndexBuffer;
			//	for (int iter = 0; iter < itering; ++iter)
			//	{
			//		pb.procVertexBufferSize = 0;
			//		std::unordered_map<FBaseVertex, int32> tempVertex;
			//
			//		TRACE_CPUPROFILER_EVENT_SCOPE_STR("Cook Shape Vertex");
			//
			//		dummyVertexBuffer = (FBaseVertex*)salloc(virtualStack, sizeof(FBaseVertex) * preVertexBufferSize);
			//
			//		auto vertexLog = (int*)salloc(virtualStack, sizeof(int) * preVertexBufferSize);
			//
			//		// Clean up double vertex
			//		for (int z = 0; z < pb.procMeshSections->size(); z++)
			//		{
			//			auto& SrcSection = (*pb.procMeshSections)[z];
			//			if (SrcSection.PreIndexBufferSize == 0)
			//				continue;
			//
			//			SrcSection.ProcIndexBuffer = (int32*)salloc(virtualStack, sizeof(int32) * SrcSection.PreIndexBufferSize);
			//
			//			for (int i = 0; i < SrcSection.PreIndexBufferSize; ++i)
			//			{
			//				auto& vertex = preVertexBuffer[SrcSection.PreIndexBuffer[i]];
			//
			//				if (!tempVertex.contains(vertex))
			//				{
			//					int neutral = i / 3 * 3;
			//
			//					auto& vertex1 = preVertexBuffer[SrcSection.PreIndexBuffer[neutral]];
			//					auto& vertex2 = preVertexBuffer[SrcSection.PreIndexBuffer[neutral + 1]];
			//					auto& vertex3 = preVertexBuffer[SrcSection.PreIndexBuffer[neutral + 2]];
			//
			//					dummyVertexBuffer[pb.procVertexBufferSize] = vertex;
			//					SrcSection.ProcIndexBuffer[i] = pb.procVertexBufferSize;
			//					tempVertex[vertex] = pb.procVertexBufferSize;
			//
			//					if (((vertex.PosX == 0 || vertex.PosX == pb.ChunkData->BlockCount.X) && (vertex1.PosX - vertex2.PosX != 0 || vertex1.PosX - vertex3.PosX != 0))
			//						|| ((vertex.PosY == 0 || vertex.PosY == pb.ChunkData->BlockCount.Y) && (vertex1.PosY - vertex2.PosY != 0 || vertex1.PosY - vertex3.PosY != 0))
			//						|| ((vertex.PosZ == 0 || vertex.PosZ == pb.ChunkData->BlockCount.Z) && (vertex1.PosZ - vertex2.PosZ != 0 || vertex1.PosZ - vertex3.PosZ != 0)))
			//						vertexLog[pb.procVertexBufferSize] = -1;
			//					else
			//						vertexLog[pb.procVertexBufferSize] = z;
			//					pb.procVertexBufferSize++;
			//				}
			//				else
			//				{
			//					SrcSection.ProcIndexBuffer[i] = tempVertex[vertex];
			//					if (vertexLog[SrcSection.ProcIndexBuffer[i]] != z)
			//						vertexLog[SrcSection.ProcIndexBuffer[i]] = -1;
			//				}
			//			}
			//			SrcSection.ProcIndexBufferSize = SrcSection.PreIndexBufferSize;
			//		}
			//
			//
			//		if (iter < itering - 1)
			//		{
			//			// Reset Buffer
			//			preVertexBuffer = dummyVertexBuffer;
			//			preVertexBufferSize = pb.procVertexBufferSize;
			//			for (int z = 0; z < pb.procMeshSections->size(); z++)
			//			{
			//				pb.procMeshSections->data()[z].PreIndexBuffer = pb.procMeshSections->data()[z].ProcIndexBuffer;
			//				pb.procMeshSections->data()[z].PreIndexBufferSize = pb.procMeshSections->data()[z].ProcIndexBufferSize;
			//			}
			//
			//			// Cook Shape Vertex
			//
			//			auto vertexWasEdited = (bool*)sallocd(vertexWasEdited, virtualStack, sizeof(bool) * preVertexBufferSize, 0);
			//
			//			for (int z = 0; z < pb.procMeshSections->size(); z++)
			//			{
			//				auto& SrcSection = (*pb.procMeshSections)[z];
			//				if (SrcSection.PreIndexBufferSize == 0)
			//					continue;
			//
			//				for (int i = 0; i < SrcSection.PreIndexBufferSize; i += 3)
			//				{
			//					auto& vertex = preVertexBuffer[SrcSection.PreIndexBuffer[i]];
			//					auto& vertex1 = preVertexBuffer[SrcSection.PreIndexBuffer[i + 1]];
			//					auto& vertex2 = preVertexBuffer[SrcSection.PreIndexBuffer[i + 2]];
			//
			//					if (vertexLog[SrcSection.PreIndexBuffer[i]] == z &&
			//						(vertex.IsPlane() || (vertex.IsSame(vertex1) && !vertex.IsCorner() && !vertexWasEdited[SrcSection.PreIndexBuffer[i + 1]]))
			//						&& !vertexWasEdited[SrcSection.PreIndexBuffer[i]])
			//					{
			//						vertex = vertex1;
			//						vertexWasEdited[SrcSection.PreIndexBuffer[i + 1]] = true;
			//						vertexWasEdited[SrcSection.PreIndexBuffer[i]] = true;
			//					}
			//					else if (vertexLog[SrcSection.PreIndexBuffer[i + 1]] == z &&
			//						(vertex1.IsPlane() || (vertex1.IsSame(vertex2) && !vertex1.IsCorner() && !vertexWasEdited[SrcSection.PreIndexBuffer[i + 2]]))
			//						&& !vertexWasEdited[SrcSection.PreIndexBuffer[i + 1]])
			//					{
			//						vertex1 = vertex2;
			//						vertexWasEdited[SrcSection.PreIndexBuffer[i + 1]] = true;
			//						vertexWasEdited[SrcSection.PreIndexBuffer[i + 2]] = true;
			//					}
			//					else if (vertexLog[SrcSection.PreIndexBuffer[i + 2]] == z &&
			//						(vertex2.IsPlane() || (vertex2.IsSame(vertex) && !vertex2.IsCorner() && !vertexWasEdited[SrcSection.PreIndexBuffer[i]]))
			//						&& !vertexWasEdited[SrcSection.PreIndexBuffer[i + 2]])
			//					{
//
			//						vertex2 = vertex;
			//						vertexWasEdited[SrcSection.PreIndexBuffer[i + 2]] = true;
			//						vertexWasEdited[SrcSection.PreIndexBuffer[i]] = true;
//
			//					}
			//				}
			//			}
//
			//			// Cook Shape Index
			//			for (int z = 0; z < pb.procMeshSections->size(); z++)
			//			{
			//				auto& SrcSection = (*pb.procMeshSections)[z];
			//				if (SrcSection.PreIndexBufferSize == 0)
			//					continue;
//
			//				auto indexBuffer = (int32*)salloc(virtualStack, sizeof(int32) * SrcSection.PreIndexBufferSize);
//
			//				int indexBufferSize = 0;
//
			//				for (int i = 0; i < SrcSection.PreIndexBufferSize; i += 3)
			//				{
			//					if (!(preVertexBuffer[SrcSection.PreIndexBuffer[i]] == (preVertexBuffer[SrcSection.PreIndexBuffer[i + 1]]))
			//						&& !(preVertexBuffer[SrcSection.PreIndexBuffer[i]] == (preVertexBuffer[SrcSection.PreIndexBuffer[i + 2]]))
			//						&& !(preVertexBuffer[SrcSection.PreIndexBuffer[i + 1]] == (preVertexBuffer[SrcSection.PreIndexBuffer[i + 2]])))
			//					{
			//						indexBuffer[indexBufferSize] = SrcSection.PreIndexBuffer[i];
			//						indexBuffer[indexBufferSize + 1] = SrcSection.PreIndexBuffer[i + 1];
			//						indexBuffer[indexBufferSize + 2] = SrcSection.PreIndexBuffer[i + 2];
			//						indexBufferSize += 3;
			//					}
			//				}
//
			//				SrcSection.PreIndexBuffer = indexBuffer;
			//				SrcSection.PreIndexBufferSize = indexBufferSize;
			//			}
			//		}
			//	}
			//}
		}
		{
			TRACE_CPUPROFILER_EVENT_SCOPE_STR("Final Vector");
			const float blockSize = pb.ChunkData->BlockSize;
			// Convert to FVertex
			pb.procVertexBuffer = (FVertex*)salloc(virtualStack, sizeof(FVertex) * pb.procVertexBufferSize);
			for (int i = 0; i < pb.procVertexBufferSize; i++)
			{
				pb.procVertexBuffer[i] = FVertex
				(
					FVector3f(((float)dummyVertexBuffer[i].PosX / 100 + (float)dummyVertexBuffer[i].OffsetX) * blockSize,
						((float)dummyVertexBuffer[i].PosY / 100 + (float)dummyVertexBuffer[i].OffsetY) * blockSize,
						((float)dummyVertexBuffer[i].PosZ / 100 + (float)dummyVertexBuffer[i].OffsetZ) * blockSize
					),
					FVector3f(dummyVertexBuffer[i].NormX, dummyVertexBuffer[i].NormY, dummyVertexBuffer[i].NormZ),
					dummyVertexBuffer[i].XPYPZP,
					dummyVertexBuffer[i].XMYPZP,
					dummyVertexBuffer[i].XPYMZP,
					dummyVertexBuffer[i].XMYMZP,
					dummyVertexBuffer[i].XPYPZM,
					dummyVertexBuffer[i].XMYPZM,
					dummyVertexBuffer[i].XPYMZM,
					dummyVertexBuffer[i].XMYMZM
				);
			}
		}
		pb.ShadowCollision();
	}

	if (pb.meshPoses.size() > 0)
	{
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("ChunkInstanceMeshs");

		TempTask->NewMeshInstances = new std::vector<FInstanceMeshInfos>();

		auto chunkpos = FVector(Start * World->WorldGenDef->BaseBlockSize);

		for (auto& pos : pb.meshPoses)
		{
			auto newMeshEntry = &World->WorldGenDef->WorldMeshes[pos.MeshId];
			FInstanceMeshInfos* found = nullptr;
			for (FInstanceMeshInfos& instance : *TempTask->NewMeshInstances)
			{
				if (instance.MeshEntry == newMeshEntry)
				{
					found = &instance;
					break;
				}
			}
			if (!found)
			{
				TempTask->NewMeshInstances->push_back(FInstanceMeshInfos(newMeshEntry, -1));
				found = &TempTask->NewMeshInstances->back();
			}

			const bool rowFlip = (int)(pos.Position.X + 0.5) % 2 == 1;

			auto location = (pos.Position * pb.ChunkData->BlockSize) + chunkpos;
			if (rowFlip)
				location.Y += pb.ChunkData->BlockSize/2;

			FQuat rotation = FQuat(FRotator(0));
			if (newMeshEntry->RotateToPoint)
			{

				auto vec = newMeshEntry->Point - location;
				vec.Normalize();
				rotation = vec.ToOrientationQuat() * FRotator(90, 0, 0).Quaternion() * rotation;
				rotation.Normalize();
			}

			found->Transforms.Add(
				FTransform(
					rotation,
					location,
					FVector(1)
				));

			found->WorldPoses.Add(
				FIntVector(
					(Start.X + (pos.Position.X + 0.5) * pb.ChunkData->BlockFactor)
					, (Start.Y + (pos.Position.Y + 0.5) * pb.ChunkData->BlockFactor)
					, (Start.Z + (pos.Position.Z + 0.5) * pb.ChunkData->BlockFactor)));
		}
	}

	TempTask->NewFinalMeshSections = pb.procMeshSections;
	TempTask->FinalVertexBuffer = pb.procVertexBuffer;

	TempTask->LowIndexBuffer = pb.lowIndexBuffer;
	TempTask->LowMaterialBuffer = pb.lowMaterialBuffer;
	TempTask->LowVertexBuffer = pb.lowVertexBuffer;

	FinalVertexBufferSize = pb.procVertexBufferSize;
	LowIndexBufferSize = pb.lowIndexBufferSize;
	LowVertexBufferSize = pb.lowVertexBufferSize;
}