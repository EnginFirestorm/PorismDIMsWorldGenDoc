// Copyright by EnginFirestorm, All Rights Reserved.

#include "ChunkCubicXA.h"
#include "ChunkWorld.h"
#include <unordered_map>
#include <ChunkExtend.cpp>

void FPolyCubicX2::BaseViewCheck() {
	if (ChunkData->TransparencySupport) {
		if (World->WorldGenDef->WorldMaterialDefs[id].SupportTransparency)
		{
			viewxm = xm || id != idxm;
			viewxp = xp || id != idxp;
			viewym = ym || id != idym;
			viewyp = yp || id != idyp;
			viewzm = zm || id != idzm;
			viewzp = zp || id != idzp;
		}
		else
		{
			viewxm = xm || World->WorldGenDef->WorldMaterialDefs[idxm].SupportTransparency;
			viewxp = xp || World->WorldGenDef->WorldMaterialDefs[idxp].SupportTransparency;
			viewym = ym || World->WorldGenDef->WorldMaterialDefs[idym].SupportTransparency;
			viewyp = yp || World->WorldGenDef->WorldMaterialDefs[idyp].SupportTransparency;
			viewzm = zm || World->WorldGenDef->WorldMaterialDefs[idzm].SupportTransparency;
			viewzp = zp || World->WorldGenDef->WorldMaterialDefs[idzp].SupportTransparency;
		}
	}
	else
	{
		viewxm = xm;
		viewxp = xp;
		viewym = ym;
		viewyp = yp;
		viewzm = zm;
		viewzp = zp;
	}
	if (!border)
		// --RenderChunkBorder
		// Neighbors--
		if (!viewxm && !viewxp && !viewym && !viewyp && !viewzm && !viewzp) { // No visible faces and no border
			skip = true;
			return;
		}
}

void FPolyCubicX2::PreVertex() {
	if (border) {
		if (XMBorder)
			viewxm = viewxm || xmym || xmyp || xmzm || xmzp || xmymzm || xmymzp || xmypzm || xmypzp;
		if (XPBorder)
			viewxp = viewxp || xpym || xpyp || xpzm || xpzp || xpymzm || xpymzp || xpypzm || xpypzp;
		if (YMBorder)
			viewym = viewym || xmym || xpym || ymzm || ymzp || xmymzm || xmymzp || xpymzm || xpymzp;
		if (YPBorder)
			viewyp = viewyp || xmyp || xpyp || ymzm || ymzp || xmypzm || xmypzp || xpypzm || xpypzp;
		if (ZMBorder)
			viewzm = viewzm || xmzm || xpzm || ymzm || ymzm || xmymzm || xmymzp || xpymzm || xpymzm;
		if (ZPBorder)
			viewzp = viewzp || xmzp || xpzp || ymzp || ymzp || xmymzp || xmypzp || xpypzp || xpypzp;
	}
	const int vecStartX = (X - 1) * 10, vecStartY = (Y - 1) * 10, vecStartZ = (Z - 1) * 10, vecEndX = X * 10, vecEndY = Y * 10, vecEndZ = Z * 10;

	pointXMYMZM = FIntVector(vecStartX, vecStartY, vecStartZ);
	pointXMYMZP = FIntVector(vecStartX, vecStartY, vecEndZ);
	pointXMYPZM = FIntVector(vecStartX, vecEndY, vecStartZ);
	pointXMYPZP = FIntVector(vecStartX, vecEndY, vecEndZ);
	pointXPYMZM = FIntVector(vecEndX, vecStartY, vecStartZ);
	pointXPYMZP = FIntVector(vecEndX, vecStartY, vecEndZ);
	pointXPYPZM = FIntVector(vecEndX, vecEndY, vecStartZ);
	pointXPYPZP = FIntVector(vecEndX, vecEndY, vecEndZ);
	pointXM = FIntVector(vecStartX, vecEndY - 5, vecEndZ - 5);
	pointXP = FIntVector(vecEndX, vecEndY - 5, vecEndZ - 5);
	pointYM = FIntVector(vecEndX - 5, vecStartY, vecEndZ - 5);
	pointYP = FIntVector(vecEndX - 5, vecEndY, vecEndZ - 5);
	pointZM = FIntVector(vecEndX - 5, vecEndY - 5, vecStartZ);
	pointZP = FIntVector(vecEndX - 5, vecEndY - 5, vecEndZ);

	bevelsXMYMZM = FIntVector(0), bevelsXMYMZP = FIntVector(0), bevelsXMYPZM = FIntVector(0), bevelsXMYPZP = FIntVector(0), bevelsXPYMZM = FIntVector(0), bevelsXPYMZP = FIntVector(0), bevelsXPYPZM = FIntVector(0), bevelsXPYPZP = FIntVector(0);
	bevelsXM = FIntVector(0), bevelsXP = FIntVector(0), bevelsYM = FIntVector(0), bevelsYP = FIntVector(0), bevelsZM = FIntVector(0), bevelsZP = FIntVector(0);
	neighborsXMYMZM = 0, neighborsXMYMZP = 0, neighborsXMYPZM = 0, neighborsXMYPZP = 0, neighborsXPYMZM = 0, neighborsXPYMZP = 0, neighborsXPYPZM = 0, neighborsXPYPZP = 0;

	if (bevels || useSoftNormals) {
		neighborsXMYMZM = xm * 64 + ym * 32 + xmym * 16 + zm * 8 + xmzm * 4 + ymzm * 2 + xmymzm * 1;
		neighborsXMYMZP = xm * 64 + ym * 32 + xmym * 16 + zp * 8 + xmzp * 4 + ymzp * 2 + xmymzp * 1;
		neighborsXMYPZM = xm * 64 + yp * 32 + xmyp * 16 + zm * 8 + xmzm * 4 + ypzm * 2 + xmypzm * 1;
		neighborsXMYPZP = xm * 64 + yp * 32 + xmyp * 16 + zp * 8 + xmzp * 4 + ypzp * 2 + xmypzp * 1;
		neighborsXPYMZM = xp * 64 + ym * 32 + xpym * 16 + zm * 8 + xpzm * 4 + ymzm * 2 + xpymzm * 1;
		neighborsXPYMZP = xp * 64 + ym * 32 + xpym * 16 + zp * 8 + xpzp * 4 + ymzp * 2 + xpymzp * 1;
		neighborsXPYPZM = xp * 64 + yp * 32 + xpyp * 16 + zm * 8 + xpzm * 4 + ypzm * 2 + xpypzm * 1;
		neighborsXPYPZP = xp * 64 + yp * 32 + xpyp * 16 + zp * 8 + xpzp * 4 + ypzp * 2 + xpypzp * 1;
		// --Bevels
		if (bevels) {
			bevelsXMYMZM = BevelsArrayX2[neighborsXMYMZM] * FIntVector(-1, -1, -1);
			bevelsXMYMZP = BevelsArrayX2[neighborsXMYMZP] * FIntVector(-1, -1, 1);
			bevelsXMYPZM = BevelsArrayX2[neighborsXMYPZM] * FIntVector(-1, 1, -1);
			bevelsXMYPZP = BevelsArrayX2[neighborsXMYPZP] * FIntVector(-1, 1, 1);
			bevelsXPYMZM = BevelsArrayX2[neighborsXPYMZM] * FIntVector(1, -1, -1);
			bevelsXPYMZP = BevelsArrayX2[neighborsXPYMZP] * FIntVector(1, -1, 1);
			bevelsXPYPZM = BevelsArrayX2[neighborsXPYPZM] * FIntVector(1, 1, -1);
			bevelsXPYPZP = BevelsArrayX2[neighborsXPYPZP] * FIntVector(1, 1, 1);

			bool sbevelsXMYMZM = SBevelsArrayX2[neighborsXMYMZM];
			bool sbevelsXMYMZP = SBevelsArrayX2[neighborsXMYMZP];
			bool sbevelsXMYPZM = SBevelsArrayX2[neighborsXMYPZM];
			bool sbevelsXMYPZP = SBevelsArrayX2[neighborsXMYPZP];
			bool sbevelsXPYMZM = SBevelsArrayX2[neighborsXPYMZM];
			bool sbevelsXPYMZP = SBevelsArrayX2[neighborsXPYMZP];
			bool sbevelsXPYPZM = SBevelsArrayX2[neighborsXPYPZM];
			bool sbevelsXPYPZP = SBevelsArrayX2[neighborsXPYPZP];

			int sXM = sbevelsXMYMZM + sbevelsXMYPZM + sbevelsXMYPZP + sbevelsXMYMZP;
			if (sXM == 4)
				bevelsXM = FIntVector(0);
			else if (neighborsXMYMZM == neighborsXMYPZP)
				bevelsXM = (bevelsXMYMZM + bevelsXMYPZP) / 2;
			else if (neighborsXMYPZM == neighborsXMYMZP)
				bevelsXM = (bevelsXMYPZM + bevelsXMYMZP) / 2;
			else
				bevelsXM = (bevelsXMYMZM + bevelsXMYPZM + bevelsXMYPZP + bevelsXMYMZP) / (4);

			int sXP = sbevelsXPYMZM + sbevelsXPYMZP + sbevelsXPYPZP + sbevelsXPYPZM;
			if (sXP == 4)
				bevelsXP = FIntVector(0);
			else if (neighborsXPYMZM == neighborsXPYPZP)
				bevelsXP = (bevelsXPYMZM + bevelsXPYPZP) / 2;
			else if (neighborsXPYPZM == neighborsXPYMZP)
				bevelsXP = (bevelsXPYPZM + bevelsXPYMZP) / 2;
			else
				bevelsXP = (bevelsXPYMZM + bevelsXPYMZP + bevelsXPYPZP + bevelsXPYPZM) / (4);

			int sYM = sbevelsXMYMZM + sbevelsXMYMZP + sbevelsXPYMZM + sbevelsXPYMZP;
			if (sYM == 4)
				bevelsYM = FIntVector(0);
			else if (neighborsXMYMZM == neighborsXPYMZP)
				bevelsYM = (bevelsXMYMZM + bevelsXPYMZP) / 2;
			else if (neighborsXPYMZM == neighborsXMYMZP)
				bevelsYM = (bevelsXPYMZM + bevelsXMYMZP) / 2;
			else
				bevelsYM = (bevelsXMYMZM + bevelsXPYMZM + bevelsXPYMZP + bevelsXMYMZP) / (4);

			int sYP = sbevelsXMYPZM + sbevelsXMYPZP + sbevelsXPYPZM + sbevelsXPYPZP;
			if (sYP == 4)
				bevelsYP = FIntVector(0);
			else if (neighborsXMYPZM == neighborsXPYPZP)
				bevelsYP = (bevelsXMYPZM + bevelsXPYPZP) / 2;
			else if (neighborsXPYPZM == neighborsXMYPZP)
				bevelsYP = (bevelsXPYPZM + bevelsXMYPZP) / 2;
			else
				bevelsYP = (bevelsXMYPZM + bevelsXMYPZP + bevelsXPYPZM + bevelsXPYPZP) / (4);

			int sZM = sbevelsXMYMZM + sbevelsXMYPZM + sbevelsXPYMZM + sbevelsXPYPZM;
			if (sZM == 4)
				bevelsZM = FIntVector(0);
			else if (neighborsXMYMZM == neighborsXPYPZM)
				bevelsZM = (bevelsXMYMZM + bevelsXPYPZM) / 2;
			else if (neighborsXMYPZM == neighborsXPYMZM)
				bevelsZM = (bevelsXMYPZM + bevelsXPYMZM) / 2;
			else
				bevelsZM = (bevelsXMYMZM + bevelsXMYPZM + bevelsXPYMZM + bevelsXPYPZM) / (4);

			int sZP = sbevelsXMYMZP + sbevelsXMYPZP + sbevelsXPYMZP + sbevelsXPYPZP;
			if (sZP == 4)
				bevelsZP = FIntVector(0);
			else if (neighborsXMYMZP == neighborsXPYPZP)
				bevelsZP = (bevelsXMYMZP + bevelsXPYPZP) / 2;
			else if (neighborsXPYMZP == neighborsXMYPZP)
				bevelsZP = (bevelsXPYMZP + bevelsXMYPZP) / 2;
			else
				bevelsZP = (bevelsXMYMZP + bevelsXMYPZP + bevelsXPYMZP + bevelsXPYPZP) / (4);
		}
		// --Bevels
	}
}

void FCubicChunkX2::GeneratePolyData(std::vector<FTempChunkData>* temp, char* virtualStack, FVector worldStart)
{
	TRACE_CPUPROFILER_EVENT_SCOPE_STR("GeneratePolyData");
	FPolyCubicX2 pb;
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
	// Tools--
	const UCubicBlock* tools = static_cast<UCubicBlock*>(ChunkData->BlockTools);
	pb.useSoftNormals = tools->UseSoftNormals;
	pb.bevels = tools->Bevels;
	// --Tools
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
						pb.BaseViewCheck();
						if (pb.skip)
							continue;
						pb.AdvancedSetup();
						pb.PreVertex();

						PolyData(pb.id, pb.procMeshSections, SrcSection, pb.ChunkData, virtualStack, preVertexBufferSize, vertexSizeMax, 72)

							{
								int indexXMYMZM = 0, indexXMYMZP = 0, indexXMYPZM = 0, indexXMYPZP = 0, indexXPYMZM = 0, indexXPYMZP = 0, indexXPYPZM = 0, indexXPYPZP = 0;
								int indexXM = 0, indexXP = 0, indexYM = 0, indexYP = 0, indexZM = 0, indexZP = 0;
								FIntVector normalXM = FIntVector(0), normalXP = FIntVector(0), normalYM = FIntVector(0), normalYP = FIntVector(0), normalZM = FIntVector(0), normalZP = FIntVector(0);
								if (pb.viewxm || pb.viewym || pb.viewzm) {
									auto normal = NormalsArray[pb.neighborsXMYMZM];
									normalXM += FIntVector(-normal.X, -normal.Y, -normal.Z);
									normalYM += FIntVector(-normal.X, -normal.Y, -normal.Z);
									normalZM += FIntVector(-normal.X, -normal.Y, -normal.Z);
									preVertexBuffer[preVertexBufferSize] = FBaseVertex(pb.pointXMYMZM.X, pb.pointXMYMZM.Y, pb.pointXMYMZM.Z, -normal.X, -normal.Y, -normal.Z,
										pb.bevelsXMYMZM.X, pb.bevelsXMYMZM.Y, pb.bevelsXMYMZM.Z, pb.id, pb.idxm, pb.idym, pb.idxmym, pb.idzm, pb.idxmzm, pb.idymzm, pb.idxmymzm);
									indexXMYMZM = preVertexBufferSize;
									preVertexBufferSize++;
								}
								if (pb.viewxm || pb.viewym || pb.viewzp) {
									auto normal = NormalsArray[pb.neighborsXMYMZP];
									normalXM += FIntVector(-normal.X, -normal.Y, normal.Z);
									normalYM += FIntVector(-normal.X, -normal.Y, normal.Z);
									normalZP += FIntVector(-normal.X, -normal.Y, normal.Z);
									preVertexBuffer[preVertexBufferSize] = FBaseVertex(pb.pointXMYMZP.X, pb.pointXMYMZP.Y, pb.pointXMYMZP.Z, -normal.X, -normal.Y, normal.Z,
										pb.bevelsXMYMZP.X, pb.bevelsXMYMZP.Y, pb.bevelsXMYMZP.Z, pb.idzp, pb.idxmzp, pb.idymzp, pb.idxmymzp, pb.id, pb.idxm, pb.idym, pb.idxmym);
									indexXMYMZP = preVertexBufferSize;
									preVertexBufferSize++;
								}
								if (pb.viewxm || pb.viewyp || pb.viewzm) {
									auto normal = NormalsArray[pb.neighborsXMYPZM];
									normalXM += FIntVector(-normal.X, normal.Y, -normal.Z);
									normalYP += FIntVector(-normal.X, normal.Y, -normal.Z);
									normalZM += FIntVector(-normal.X, normal.Y, -normal.Z);
									preVertexBuffer[preVertexBufferSize] = FBaseVertex(pb.pointXMYPZM.X, pb.pointXMYPZM.Y, pb.pointXMYPZM.Z, -normal.X, normal.Y, -normal.Z,
										pb.bevelsXMYPZM.X, pb.bevelsXMYPZM.Y, pb.bevelsXMYPZM.Z, pb.idyp, pb.idxmyp, pb.id, pb.idxm, pb.idypzm, pb.idxmypzm, pb.idzm, pb.idxmzm);
									indexXMYPZM = preVertexBufferSize;
									preVertexBufferSize++;
								}
								if (pb.viewxm || pb.viewyp || pb.viewzp) {
									auto normal = NormalsArray[pb.neighborsXMYPZP];
									normalXM += FIntVector(-normal.X, normal.Y, normal.Z);
									normalYP += FIntVector(-normal.X, normal.Y, normal.Z);
									normalZP += FIntVector(-normal.X, normal.Y, normal.Z);
									preVertexBuffer[preVertexBufferSize] = FBaseVertex(pb.pointXMYPZP.X, pb.pointXMYPZP.Y, pb.pointXMYPZP.Z, -normal.X, normal.Y, normal.Z,
										pb.bevelsXMYPZP.X, pb.bevelsXMYPZP.Y, pb.bevelsXMYPZP.Z, pb.idypzp, pb.idxmypzp, pb.idzp, pb.idxmzp, pb.idyp, pb.idxmyp, pb.id, pb.idxm);
									indexXMYPZP = preVertexBufferSize;
									preVertexBufferSize++;
								}
								if (pb.viewxp || pb.viewym || pb.viewzm) {
									auto normal = NormalsArray[pb.neighborsXPYMZM];
									normalXP += FIntVector(normal.X, -normal.Y, -normal.Z);
									normalYM += FIntVector(normal.X, -normal.Y, -normal.Z);
									normalZM += FIntVector(normal.X, -normal.Y, -normal.Z);
									preVertexBuffer[preVertexBufferSize] = FBaseVertex(pb.pointXPYMZM.X, pb.pointXPYMZM.Y, pb.pointXPYMZM.Z, normal.X, -normal.Y, -normal.Z,
										pb.bevelsXPYMZM.X, pb.bevelsXPYMZM.Y, pb.bevelsXPYMZM.Z, pb.idxp, pb.id, pb.idxpym, pb.idym, pb.idxpzm, pb.idzm, pb.idxpymzm, pb.idymzm);
									indexXPYMZM = preVertexBufferSize;
									preVertexBufferSize++;
								}
								if (pb.viewxp || pb.viewym || pb.viewzp) {
									auto normal = NormalsArray[pb.neighborsXPYMZP];
									normalXP += FIntVector(normal.X, -normal.Y, normal.Z);
									normalYM += FIntVector(normal.X, -normal.Y, normal.Z);
									normalZP += FIntVector(normal.X, -normal.Y, normal.Z);
									preVertexBuffer[preVertexBufferSize] = FBaseVertex(pb.pointXPYMZP.X, pb.pointXPYMZP.Y, pb.pointXPYMZP.Z, normal.X, -normal.Y, normal.Z,
										pb.bevelsXPYMZP.X, pb.bevelsXPYMZP.Y, pb.bevelsXPYMZP.Z, pb.idxpzp, pb.idzp, pb.idxpymzp, pb.idymzp, pb.idxp, pb.id, pb.idxpym, pb.idym);
									indexXPYMZP = preVertexBufferSize;
									preVertexBufferSize++;
								}
								if (pb.viewxp || pb.viewyp || pb.viewzm) {
									auto normal = NormalsArray[pb.neighborsXPYPZM];
									normalXP += FIntVector(normal.X, normal.Y, -normal.Z);
									normalYP += FIntVector(normal.X, normal.Y, -normal.Z);
									normalZM += FIntVector(normal.X, normal.Y, -normal.Z);
									preVertexBuffer[preVertexBufferSize] = FBaseVertex(pb.pointXPYPZM.X, pb.pointXPYPZM.Y, pb.pointXPYPZM.Z, normal.X, normal.Y, -normal.Z,
										pb.bevelsXPYPZM.X, pb.bevelsXPYPZM.Y, pb.bevelsXPYPZM.Z, pb.idxpyp, pb.idyp, pb.idxp, pb.id, pb.idxpypzm, pb.idypzm, pb.idxpzm, pb.idzm);
									indexXPYPZM = preVertexBufferSize;
									preVertexBufferSize++;
								}
								if (pb.viewxp || pb.viewyp || pb.viewzp) {
									auto normal = NormalsArray[pb.neighborsXPYPZP];
									normalXP += FIntVector(normal.X, normal.Y, normal.Z);
									normalYP += FIntVector(normal.X, normal.Y, normal.Z);
									normalZP += FIntVector(normal.X, normal.Y, normal.Z);
									preVertexBuffer[preVertexBufferSize] = FBaseVertex(pb.pointXPYPZP.X, pb.pointXPYPZP.Y, pb.pointXPYPZP.Z, normal.X, normal.Y, normal.Z,
										pb.bevelsXPYPZP.X, pb.bevelsXPYPZP.Y, pb.bevelsXPYPZP.Z, pb.idxpypzp, pb.idypzp, pb.idxpzp, pb.idzp, pb.idxpyp, pb.idyp, pb.idxp, pb.id);
									indexXPYPZP = preVertexBufferSize;
									preVertexBufferSize++;
								}
								if (pb.viewxm) {
									preVertexBuffer[preVertexBufferSize] = FBaseVertex(pb.pointXM.X, pb.pointXM.Y, pb.pointXM.Z, normalXM.X, normalXM.Y, normalXM.Z,
										pb.bevelsXM.X, pb.bevelsXM.Y, pb.bevelsXM.Z, pb.id, pb.id, pb.id, pb.id, pb.id, pb.id, pb.id, pb.id);
									indexXM = preVertexBufferSize;
									preVertexBufferSize++;
								}
								if (pb.viewxp) {
									preVertexBuffer[preVertexBufferSize] = FBaseVertex(pb.pointXP.X, pb.pointXP.Y, pb.pointXP.Z, normalXP.X, normalXP.Y, normalXP.Z,
										pb.bevelsXP.X, pb.bevelsXP.Y, pb.bevelsXP.Z, pb.id, pb.id, pb.id, pb.id, pb.id, pb.id, pb.id, pb.id);
									indexXP = preVertexBufferSize;
									preVertexBufferSize++;
								}
								if (pb.viewym) {
									preVertexBuffer[preVertexBufferSize] = FBaseVertex(pb.pointYM.X, pb.pointYM.Y, pb.pointYM.Z, normalYM.X, normalYM.Y, normalYM.Z,
										pb.bevelsYM.X, pb.bevelsYM.Y, pb.bevelsYM.Z, pb.id, pb.id, pb.id, pb.id, pb.id, pb.id, pb.id, pb.id);
									indexYM = preVertexBufferSize;
									preVertexBufferSize++;
								}
								if (pb.viewyp) {
									preVertexBuffer[preVertexBufferSize] = FBaseVertex(pb.pointYP.X, pb.pointYP.Y, pb.pointYP.Z, normalYP.X, normalYP.Y, normalYP.Z,
										pb.bevelsYP.X, pb.bevelsYP.Y, pb.bevelsYP.Z, pb.id, pb.id, pb.id, pb.id, pb.id, pb.id, pb.id, pb.id);
									indexYP = preVertexBufferSize;
									preVertexBufferSize++;
								}
								if (pb.viewzm) {
									preVertexBuffer[preVertexBufferSize] = FBaseVertex(pb.pointZM.X, pb.pointZM.Y, pb.pointZM.Z, normalZM.X, normalZM.Y, normalZM.Z,
										pb.bevelsZM.X, pb.bevelsZM.Y, pb.bevelsZM.Z, pb.id, pb.id, pb.id, pb.id, pb.id, pb.id, pb.id, pb.id);
									indexZM = preVertexBufferSize;
									preVertexBufferSize++;
								}
								if (pb.viewzp) {
									preVertexBuffer[preVertexBufferSize] = FBaseVertex(pb.pointZP.X, pb.pointZP.Y, pb.pointZP.Z, normalZP.X, normalZP.Y, normalZP.Z,
										pb.bevelsZP.X, pb.bevelsZP.Y, pb.bevelsZP.Z, pb.id, pb.id, pb.id, pb.id, pb.id, pb.id, pb.id, pb.id);
									indexZP = preVertexBufferSize;
									preVertexBufferSize++;
								}
								if (pb.viewxm) {
									{
										SoftNormalsExtra(indexXMYMZM, indexXM, indexXMYMZP, indexXMYPZP, indexXMYMZP, indexXM)
									}
									{
										SoftNormalsExtra(indexXMYMZM, indexXMYPZM, indexXM, indexXMYPZP, indexXM, indexXMYPZM)
									}
								}
								if (pb.viewxp) {
									{
										SoftNormalsExtra(indexXPYMZM, indexXP, indexXPYPZM, indexXPYPZP, indexXPYPZM, indexXP)
									}
									{
										SoftNormalsExtra(indexXPYMZM, indexXPYMZP, indexXP, indexXPYPZP, indexXP, indexXPYMZP)
									}
								}
								if (pb.viewym) {
									{
										SoftNormalsExtra(indexXMYMZM, indexYM, indexXPYMZM, indexXPYMZP, indexXPYMZM, indexYM)
									}
									{
										SoftNormalsExtra(indexXMYMZM, indexXMYMZP, indexYM, indexXPYMZP, indexYM, indexXMYMZP)
									}
								}
								if (pb.viewyp) {
									{
										SoftNormalsExtra(indexXMYPZM, indexYP, indexXMYPZP, indexXPYPZP, indexXMYPZP, indexYP)
									}
									{
										SoftNormalsExtra(indexXMYPZM, indexXPYPZM, indexYP, indexXPYPZP, indexYP, indexXPYPZM)
									}
								}
								if (pb.viewzm) {
									{
										SoftNormalsExtra(indexXMYMZM, indexZM, indexXMYPZM, indexXPYPZM, indexXMYPZM, indexZM)
									}
									{
										SoftNormalsExtra(indexXMYMZM, indexXPYMZM, indexZM, indexXPYPZM, indexZM, indexXPYMZM)
									}
								}
								if (pb.viewzp) {
									{
										SoftNormalsExtra(indexXMYMZP, indexZP, indexXPYMZP, indexXPYPZP, indexXPYMZP, indexZP)
									}
									{
										SoftNormalsExtra(indexXMYMZP, indexXMYPZP, indexZP, indexXPYPZP, indexZP, indexXMYPZP)
									}
								}
							}
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
			if (!pb.ChunkData->OptimizeVertexBuffer)
			{
				dummyVertexBuffer = preVertexBuffer;
				pb.procVertexBufferSize = preVertexBufferSize;
				for (int z = 0; z < pb.procMeshSections->size(); z++)
				{
					pb.procMeshSections->data()[z].ProcIndexBuffer = pb.procMeshSections->data()[z].PreIndexBuffer;
					pb.procMeshSections->data()[z].ProcIndexBufferSize = pb.procMeshSections->data()[z].PreIndexBufferSize;
				}
			}
			else
			{
				int itering = 1 + pb.ChunkData->OptimizeIndexBuffer;
				for (int iter = 0; iter < itering; ++iter)
				{
					pb.procVertexBufferSize = 0;
					std::unordered_map<FBaseVertex, int32> tempVertex;

					TRACE_CPUPROFILER_EVENT_SCOPE_STR("Cook Shape Vertex");

					dummyVertexBuffer = (FBaseVertex*)salloc(virtualStack, sizeof(FBaseVertex) * preVertexBufferSize);

					auto vertexLog = (int*)salloc(virtualStack, sizeof(int) * preVertexBufferSize);

					// Clean up double vertex
					for (int z = 0; z < pb.procMeshSections->size(); z++)
					{
						auto& SrcSection = (*pb.procMeshSections)[z];
						if (SrcSection.PreIndexBufferSize == 0)
							continue;

						SrcSection.ProcIndexBuffer = (int32*)salloc(virtualStack, sizeof(int32) * SrcSection.PreIndexBufferSize);

						for (int i = 0; i < SrcSection.PreIndexBufferSize; ++i)
						{
							auto& vertex = preVertexBuffer[SrcSection.PreIndexBuffer[i]];

							if (!tempVertex.contains(vertex))
							{
								int neutral = i / 3 * 3;

								auto& vertex1 = preVertexBuffer[SrcSection.PreIndexBuffer[neutral]];
								auto& vertex2 = preVertexBuffer[SrcSection.PreIndexBuffer[neutral + 1]];
								auto& vertex3 = preVertexBuffer[SrcSection.PreIndexBuffer[neutral + 2]];

								dummyVertexBuffer[pb.procVertexBufferSize] = vertex;
								SrcSection.ProcIndexBuffer[i] = pb.procVertexBufferSize;
								tempVertex[vertex] = pb.procVertexBufferSize;

								if (((vertex.PosX == 0 || vertex.PosX == pb.ChunkData->BlockCount.X) && (vertex1.PosX - vertex2.PosX != 0 || vertex1.PosX - vertex3.PosX != 0))
									|| ((vertex.PosY == 0 || vertex.PosY == pb.ChunkData->BlockCount.Y) && (vertex1.PosY - vertex2.PosY != 0 || vertex1.PosY - vertex3.PosY != 0))
									|| ((vertex.PosZ == 0 || vertex.PosZ == pb.ChunkData->BlockCount.Z) && (vertex1.PosZ - vertex2.PosZ != 0 || vertex1.PosZ - vertex3.PosZ != 0)))
									vertexLog[pb.procVertexBufferSize] = -1;
								else
									vertexLog[pb.procVertexBufferSize] = z;
								pb.procVertexBufferSize++;
							}
							else
							{
								SrcSection.ProcIndexBuffer[i] = tempVertex[vertex];
								if (vertexLog[SrcSection.ProcIndexBuffer[i]] != z)
									vertexLog[SrcSection.ProcIndexBuffer[i]] = -1;
							}
						}
						SrcSection.ProcIndexBufferSize = SrcSection.PreIndexBufferSize;
					}


					if (iter < itering - 1)
					{
						// Reset Buffer
						preVertexBuffer = dummyVertexBuffer;
						preVertexBufferSize = pb.procVertexBufferSize;
						for (int z = 0; z < pb.procMeshSections->size(); z++)
						{
							pb.procMeshSections->data()[z].PreIndexBuffer = pb.procMeshSections->data()[z].ProcIndexBuffer;
							pb.procMeshSections->data()[z].PreIndexBufferSize = pb.procMeshSections->data()[z].ProcIndexBufferSize;
						}

						// Cook Shape Vertex

						auto vertexWasEdited = (bool*)sallocd(vertexWasEdited, virtualStack, sizeof(bool) * preVertexBufferSize, 0);

						for (int z = 0; z < pb.procMeshSections->size(); z++)
						{
							auto& SrcSection = (*pb.procMeshSections)[z];
							if (SrcSection.PreIndexBufferSize == 0)
								continue;

							for (int i = 0; i < SrcSection.PreIndexBufferSize; i += 3)
							{
								auto& vertex = preVertexBuffer[SrcSection.PreIndexBuffer[i]];
								auto& vertex1 = preVertexBuffer[SrcSection.PreIndexBuffer[i + 1]];
								auto& vertex2 = preVertexBuffer[SrcSection.PreIndexBuffer[i + 2]];

								if (vertexLog[SrcSection.PreIndexBuffer[i]] == z &&
									(vertex.IsPlane() || (vertex.IsSame(vertex1) && !vertex.IsCorner() && !vertexWasEdited[SrcSection.PreIndexBuffer[i + 1]]))
									&& !vertexWasEdited[SrcSection.PreIndexBuffer[i]])
								{
									vertex = vertex1;
									vertexWasEdited[SrcSection.PreIndexBuffer[i + 1]] = true;
									vertexWasEdited[SrcSection.PreIndexBuffer[i]] = true;
								}
								else if (vertexLog[SrcSection.PreIndexBuffer[i + 1]] == z &&
									(vertex1.IsPlane() || (vertex1.IsSame(vertex2) && !vertex1.IsCorner() && !vertexWasEdited[SrcSection.PreIndexBuffer[i + 2]]))
									&& !vertexWasEdited[SrcSection.PreIndexBuffer[i + 1]])
								{
									vertex1 = vertex2;
									vertexWasEdited[SrcSection.PreIndexBuffer[i + 1]] = true;
									vertexWasEdited[SrcSection.PreIndexBuffer[i + 2]] = true;
								}
								else if (vertexLog[SrcSection.PreIndexBuffer[i + 2]] == z &&
									(vertex2.IsPlane() || (vertex2.IsSame(vertex) && !vertex2.IsCorner() && !vertexWasEdited[SrcSection.PreIndexBuffer[i]]))
									&& !vertexWasEdited[SrcSection.PreIndexBuffer[i + 2]])
								{

									vertex2 = vertex;
									vertexWasEdited[SrcSection.PreIndexBuffer[i + 2]] = true;
									vertexWasEdited[SrcSection.PreIndexBuffer[i]] = true;

								}
							}
						}

						// Cook Shape Index
						for (int z = 0; z < pb.procMeshSections->size(); z++)
						{
							auto& SrcSection = (*pb.procMeshSections)[z];
							if (SrcSection.PreIndexBufferSize == 0)
								continue;

							auto indexBuffer = (int32*)salloc(virtualStack, sizeof(int32) * SrcSection.PreIndexBufferSize);

							int indexBufferSize = 0;

							for (int i = 0; i < SrcSection.PreIndexBufferSize; i += 3)
							{
								if (!(preVertexBuffer[SrcSection.PreIndexBuffer[i]] == (preVertexBuffer[SrcSection.PreIndexBuffer[i + 1]]))
									&& !(preVertexBuffer[SrcSection.PreIndexBuffer[i]] == (preVertexBuffer[SrcSection.PreIndexBuffer[i + 2]]))
									&& !(preVertexBuffer[SrcSection.PreIndexBuffer[i + 1]] == (preVertexBuffer[SrcSection.PreIndexBuffer[i + 2]])))
								{
									indexBuffer[indexBufferSize] = SrcSection.PreIndexBuffer[i];
									indexBuffer[indexBufferSize + 1] = SrcSection.PreIndexBuffer[i + 1];
									indexBuffer[indexBufferSize + 2] = SrcSection.PreIndexBuffer[i + 2];
									indexBufferSize += 3;
								}
							}

							SrcSection.PreIndexBuffer = indexBuffer;
							SrcSection.PreIndexBufferSize = indexBufferSize;
						}
					}
				}
			}
		}
		{
			TRACE_CPUPROFILER_EVENT_SCOPE_STR("Final Vector");
			const float blockSize = pb.ChunkData->BlockSize;
			// Convert to FVertex
			pb.procVertexBuffer = (FVertex*)salloc(virtualStack, sizeof(FVertex) * pb.procVertexBufferSize);

			if (pb.bevels)
			{
				for (int i = 0; i < pb.procVertexBufferSize; i++)
				{
					auto norm = FVector3f(dummyVertexBuffer[i].NormX, dummyVertexBuffer[i].NormY, dummyVertexBuffer[i].NormZ);
					norm.Normalize();
					pb.procVertexBuffer[i] = FVertex
					(
						FVector3f(((float)dummyVertexBuffer[i].PosX / 10 + (float)dummyVertexBuffer[i].OffsetX / 10 * 0.33f) * blockSize,
							((float)dummyVertexBuffer[i].PosY / 10 + (float)dummyVertexBuffer[i].OffsetY / 10 * 0.33f) * blockSize,
							((float)dummyVertexBuffer[i].PosZ / 10 + (float)dummyVertexBuffer[i].OffsetZ / 10 * 0.33f) * blockSize
						),
						norm,
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
			else {
				for (int i = 0; i < pb.procVertexBufferSize; i++)
				{
					pb.procVertexBuffer[i] = FVertex
					(
						FVector3f(((float)dummyVertexBuffer[i].PosX) * blockSize, ((float)dummyVertexBuffer[i].PosY) * blockSize, ((float)dummyVertexBuffer[i].PosZ) * blockSize
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
		}
		pb.ShadowCollision();
	}

	if (tools->Crumple) {
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("Crumple");

		for (int i = 0; i < pb.procVertexBufferSize; i++)
		{
			auto pos = (FVector(pb.procVertexBuffer[i].Position) + FVector(1) + FVector(worldStart)) / pb.ChunkData->BlockSize + 1000000000;
			auto random = RandomArray[(int)FMath::Abs(pos.Z) % 8 * 8 * 8 + (int)FMath::Abs(pos.Y) % 8 * 8 + (int)FMath::Abs(pos.X) % 8] * 0.2f;
			pb.procVertexBuffer[i].Position += random;
		}
		if (pb.ChunkData->Shadows || pb.ChunkData->Collision)
			for (int i = 0; i < pb.lowVertexBufferSize; i++)
			{
				auto pos = (FVector(pb.lowVertexBuffer[i]) + FVector(1) + FVector(worldStart)) / pb.ChunkData->BlockSize + 1000000000;
				auto random = RandomArray[(int)FMath::Abs(pos.Z) % 8 * 8 * 8 + (int)FMath::Abs(pos.Y) % 8 * 8 + (int)FMath::Abs(pos.X) % 8] * 0.2f;
				pb.lowVertexBuffer[i] += random;
			}
	}
	if (tools->ReNormal)
	{
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("ReNormal");
		for (int i = 0; i < pb.procMeshSections->size(); i++) {
			for (int j = 0; j < (*pb.procMeshSections)[i].ProcIndexBufferSize; j += 3)
			{
				auto defNor = pb.procVertexBuffer[(*pb.procMeshSections)[i].ProcIndexBuffer[j]].Normal;

				auto vertex1 = &pb.procVertexBuffer[(*pb.procMeshSections)[i].ProcIndexBuffer[j + 0]];
				auto vertex2 = &pb.procVertexBuffer[(*pb.procMeshSections)[i].ProcIndexBuffer[j + 1]];
				auto vertex3 = &pb.procVertexBuffer[(*pb.procMeshSections)[i].ProcIndexBuffer[j + 2]];
				auto newnormal = ((vertex2->Position) - (vertex1->Position)) ^ ((vertex3->Position) - (vertex1->Position));
				newnormal.Normalize();

				defNor = (defNor * (1 - 1)) + (-newnormal * 1);

				vertex1->Normal = defNor;
				vertex2->Normal = defNor;
				vertex3->Normal = defNor;
			}
		}
	}
	pb.Finalize();

	FinalVertexBufferSize = pb.procVertexBufferSize;
	LowIndexBufferSize = pb.lowIndexBufferSize;
	LowVertexBufferSize = pb.lowVertexBufferSize;
}

