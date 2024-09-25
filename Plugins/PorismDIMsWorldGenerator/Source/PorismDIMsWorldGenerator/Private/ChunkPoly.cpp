// Copyright by EnginFirestorm, All Rights Reserved.

#include "Chunk.h"
#include "ChunkWorld.h"
#include "Math/Vector.h"
#include <ChunkExtend.cpp>
#include <unordered_map>


void FPolyBuilder::BaseSetup() {


	indexZ = Z * pointCountXY;
	indexY = Y * ChunkData->PointCount.X;
	indexX = X;
	index = indexZ + indexY + indexX;

	indexXP = X + 1;
	indexXM = X - 1;
	indexYP = (Y + 1) * ChunkData->PointCount.X;
	indexYM = (Y - 1) * ChunkData->PointCount.X;
	indexZP = (Z + 1) * pointCountXY;
	indexZM = (Z - 1) * pointCountXY;

	id = XRowBuffer[X];
	if (id < 0) // Air
	{
		if (ChunkData->RenderInstancedMeshs && id < -1)
		{
			int meshId = -(id + 2);
			meshPoses.push_back(FInstanceMeshPose(meshId, (FVector(X, Y, Z) - 0.5)));
			id = World->WorldGenDef->WorldMeshes[meshId].MaterialIndex;
			if (id < 0) {
				skip = true;
				return;
			}

		}
		else {
			skip = true;
			return;
		}
	}
	skip = false;

	idxm = XRowBuffer[indexXM];
	idxp = XRowBuffer[indexXP];
	idym = finalOutput[indexZ + indexYM + indexX];
	idyp = finalOutput[indexZ + indexYP + indexX];
	idzm = finalOutput[indexZM + indexY + indexX];
	idzp = finalOutput[indexZP + indexY + indexX];
	if (ChunkData->RenderInstancedMeshs)
	{
		if (idxm < -1)
			idxm = World->WorldGenDef->WorldMeshes[-(idxm + 2)].MaterialIndex;
		if (idxp < -1)
			idxp = World->WorldGenDef->WorldMeshes[-(idxp + 2)].MaterialIndex;
		if (idym < -1)
			idym = World->WorldGenDef->WorldMeshes[-(idym + 2)].MaterialIndex;
		if (idyp < -1)
			idyp = World->WorldGenDef->WorldMeshes[-(idyp + 2)].MaterialIndex;
		if (idzm < -1)
			idzm = World->WorldGenDef->WorldMeshes[-(idzm + 2)].MaterialIndex;
		if (idzp < -1)
			idzp = World->WorldGenDef->WorldMeshes[-(idzp + 2)].MaterialIndex;
	}
	xm = idxm < 0, xp = idxp < 0, ym = idym < 0, yp = idyp < 0, zm = idzm < 0, zp = idzp < 0;

	 XMBorder = X == 1 && !(filled & XM);
	 XPBorder = X == ChunkData->BlockCount.X && !(filled & XP);
	 YMBorder = Y == 1 && !(filled & YM);
	 YPBorder = Y == ChunkData->BlockCount.Y && !(filled & YP);
	 ZMBorder = Z == 1 && !(filled & ZM);
	 ZPBorder = Z == ChunkData->BlockCount.Z && !(filled & ZP);

	if (ChunkData->RenderChunkBorder)
		border = XMBorder || XPBorder || YMBorder || YPBorder || ZMBorder || ZPBorder;
	else
		border = false;
}
void FPolyBuilder::AdvancedSetup() {
	idxmym = finalOutput[indexZ + indexYM + indexXM];
	idxmyp = finalOutput[indexZ + indexYP + indexXM];
	idxpym = finalOutput[indexZ + indexYM + indexXP];
	idxpyp = finalOutput[indexZ + indexYP + indexXP];
	idxmzm = finalOutput[indexZM + indexY + indexXM];
	idxmzp = finalOutput[indexZP + indexY + indexXM];
	idxpzm = finalOutput[indexZM + indexY + indexXP];
	idxpzp = finalOutput[indexZP + indexY + indexXP];
	idymzm = finalOutput[indexZM + indexYM + indexX];
	idymzp = finalOutput[indexZP + indexYM + indexX];
	idypzm = finalOutput[indexZM + indexYP + indexX];
	idypzp = finalOutput[indexZP + indexYP + indexX];

	idxmymzm = finalOutput[indexZM + indexYM + indexXM];
	idxmymzp = finalOutput[indexZP + indexYM + indexXM];
	idxmypzm = finalOutput[indexZM + indexYP + indexXM];
	idxmypzp = finalOutput[indexZP + indexYP + indexXM];
	idxpymzm = finalOutput[indexZM + indexYM + indexXP];
	idxpymzp = finalOutput[indexZP + indexYM + indexXP];
	idxpypzm = finalOutput[indexZM + indexYP + indexXP];
	idxpypzp = finalOutput[indexZP + indexYP + indexXP];

	if (ChunkData->RenderInstancedMeshs)
	{
		if (idxmym < -1)
			idxmym = World->WorldGenDef->WorldMeshes[-(idxmym + 2)].MaterialIndex;
		if (idxmyp < -1)
			idxmyp = World->WorldGenDef->WorldMeshes[-(idxmyp + 2)].MaterialIndex;
		if (idxpym < -1)
			idxpym = World->WorldGenDef->WorldMeshes[-(idxpym + 2)].MaterialIndex;
		if (idxpyp < -1)
			idxpyp = World->WorldGenDef->WorldMeshes[-(idxpyp + 2)].MaterialIndex;
		if (idxmzm < -1)
			idxmzm = World->WorldGenDef->WorldMeshes[-(idxmzm + 2)].MaterialIndex;
		if (idxmzp < -1)
			idxmzp = World->WorldGenDef->WorldMeshes[-(idxmzp + 2)].MaterialIndex;
		if (idxpzm < -1)
			idxpzm = World->WorldGenDef->WorldMeshes[-(idxpzm + 2)].MaterialIndex;
		if (idxpzp < -1)
			idxpzp = World->WorldGenDef->WorldMeshes[-(idxpzp + 2)].MaterialIndex;
		if (idymzm < -1)
			idymzm = World->WorldGenDef->WorldMeshes[-(idymzm + 2)].MaterialIndex;
		if (idymzp < -1)
			idymzp = World->WorldGenDef->WorldMeshes[-(idymzp + 2)].MaterialIndex;
		if (idypzm < -1)
			idypzm = World->WorldGenDef->WorldMeshes[-(idypzm + 2)].MaterialIndex;
		if (idypzp < -1)
			idypzp = World->WorldGenDef->WorldMeshes[-(idypzp + 2)].MaterialIndex;

		if (idxmymzm < -1)
			idxmymzm = World->WorldGenDef->WorldMeshes[-(idxmymzm + 2)].MaterialIndex;
		if (idxmymzp < -1)
			idxmymzp = World->WorldGenDef->WorldMeshes[-(idxmymzp + 2)].MaterialIndex;
		if (idxmypzm < -1)
			idxmypzm = World->WorldGenDef->WorldMeshes[-(idxmypzm + 2)].MaterialIndex;
		if (idxmypzp < -1)
			idxmypzp = World->WorldGenDef->WorldMeshes[-(idxmypzp + 2)].MaterialIndex;
		if (idxpymzm < -1)
			idxpymzm = World->WorldGenDef->WorldMeshes[-(idxpymzm + 2)].MaterialIndex;
		if (idxpymzp < -1)
			idxpymzp = World->WorldGenDef->WorldMeshes[-(idxpymzp + 2)].MaterialIndex;
		if (idxpypzm < -1)
			idxpypzm = World->WorldGenDef->WorldMeshes[-(idxpypzm + 2)].MaterialIndex;
		if (idxpypzp < -1)
			idxpypzp = World->WorldGenDef->WorldMeshes[-(idxpypzp + 2)].MaterialIndex;
	}

	xmym = idxmym < 0, xmyp = idxmyp < 0, xpym = idxpym < 0, xpyp = idxpyp < 0;
	xmzm = idxmzm < 0, xmzp = idxmzp < 0, xpzm = idxpzm < 0, xpzp = idxpzp < 0;
	ymzm = idymzm < 0, ymzp = idymzp < 0, ypzm = idypzm < 0, ypzp = idypzp < 0;

	xmymzm = idxmymzm < 0, xmymzp = idxmymzp < 0, xmypzm = idxmypzm < 0, xmypzp = idxmypzp < 0;
	xpymzm = idxpymzm < 0, xpymzp = idxpymzp < 0, xpypzm = idxpypzm < 0, xpypzp = idxpypzp < 0;
}

void FPolyBuilder::BaseMaterials() {
	for (int z = 0; z < procMeshSections->size(); z++)
	{
		if (ChunkData->MultiMaterial)
			procMeshSections->data()[z].Material = ChunkData->MultiMaterial;
		else
		{
			if (World->WorldGenDef->WorldMaterialDefs.Num() < procMeshSections->data()[z].MaterialIndex + 1)
				procMeshSections->data()[z].Material = World->WorldGenDef->WorldMaterialDefs.GetData()[0].Material;
			else
				procMeshSections->data()[z].Material = World->WorldGenDef->WorldMaterialDefs.GetData()[procMeshSections->data()[z].MaterialIndex].Material;
		}
		indexSizeNow += procMeshSections->data()[z].PreIndexBufferSize;
	}
}

void FPolyBuilder::ShadowCollision() {
	if (ChunkData->Shadows || ChunkData->Collision)
	{
		std::unordered_map<FVector3f, int32> tempVertex;
		int indexSize = 0;
		for (int z = 0; z < procMeshSections->size(); z++)
			indexSize += (*procMeshSections)[z].ProcIndexBufferSize;

		TRACE_CPUPROFILER_EVENT_SCOPE_STR("Cook Shape Collision");
		lowVertexBuffer = (FVector3f*)salloc(virtualStack, sizeof(FVector3f) * procVertexBufferSize); // Is for Collision and Shadows
		lowIndexBuffer = (int32*)salloc(virtualStack, sizeof(int32) * indexSize); // Is for Collision and Shadows
		lowMaterialBuffer = (int32*)salloc(virtualStack, sizeof(int32) * indexSize);  // Is for Collision and Shadows
		if (ChunkData->Collision)
		{
			TempTask->NewLowMaterialIndexBuffer = (int32*)malloc(sizeof(int32) * indexSize / 3);  // Is for Collision
			TempTask->NewLowBlockIndexBuffer = (int32*)malloc(sizeof(int32) * indexSize / 3);  // Is for Collision
		}
		for (int z = 0; z < procMeshSections->size(); z++)
		{
			auto& SrcSection = (*procMeshSections)[z];

			if (SrcSection.ProcIndexBufferSize == 0)
			{
				procMeshSections->erase(procMeshSections->begin() + z);
				z--;
				continue;
			}

			SrcSection.LowIndexBuffer = (int32*)salloc(virtualStack, sizeof(int32) * SrcSection.ProcIndexBufferSize); // Is for Collision
			SrcSection.LowIndexBufferSize = SrcSection.ProcIndexBufferSize;

			for (int i = 0; i < SrcSection.ProcIndexBufferSize; ++i)
			{
				auto& vertex = procVertexBuffer[SrcSection.ProcIndexBuffer[i]];

				if (!tempVertex.contains(vertex.Position))
				{
					tempVertex[vertex.Position] = lowVertexBufferSize;
					SrcSection.LowIndexBuffer[i] = lowVertexBufferSize;
					lowIndexBuffer[lowIndexBufferSize] = lowVertexBufferSize;
					lowMaterialBuffer[lowIndexBufferSize] = z;
					lowVertexBuffer[lowVertexBufferSize] = vertex.Position;
					lowVertexBufferSize++;
					lowIndexBufferSize++;
				}
				else
				{
					SrcSection.LowIndexBuffer[i] = tempVertex[vertex.Position];
					lowIndexBuffer[lowIndexBufferSize] = SrcSection.LowIndexBuffer[i];
					lowMaterialBuffer[lowIndexBufferSize] = z;
					lowIndexBufferSize++;
				}

				if (ChunkData->Collision && i % 3 == 0)
				{
					TempTask->NewLowMaterialIndexBuffer[lowIndexBufferSize / 3] = z;
					TempTask->NewLowBlockIndexBuffer[lowIndexBufferSize / 3] = SrcSection.PreBlockBuffer[i / 3];
				}
			}
		}
	}
	else
	{
		for (int z = procMeshSections->size() - 1; z > -1; z--)
		{
			auto& SrcSection = (*procMeshSections)[z];

			if (SrcSection.ProcIndexBufferSize == 0)
			{
				procMeshSections->erase(procMeshSections->begin() + z);
				continue;
			}

			lowIndexBufferSize += SrcSection.ProcIndexBufferSize;
		}
		lowVertexBufferSize = procVertexBufferSize;
	}
}

void FPolyBuilder::Finalize() {
	if (meshPoses.size() > 0)
	{
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("ChunkInstanceMeshs");

		TempTask->NewMeshInstances = new std::vector<FInstanceMeshInfos>();

		auto chunkpos = FVector(start * World->WorldGenDef->BaseBlockSize);

		for (auto& pos : meshPoses)
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

			auto location = (pos.Position * ChunkData->BlockSize) + chunkpos;

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
					(start.X + (pos.Position.X - 0.5) * ChunkData->BlockFactor)
					, (start.Y + (pos.Position.Y - 0.5) * ChunkData->BlockFactor)
					, (start.Z + (pos.Position.Z - 0.5) * ChunkData->BlockFactor)));
		}
	}



	TempTask->NewFinalMeshSections = procMeshSections;
	TempTask->FinalVertexBuffer = procVertexBuffer;

	TempTask->LowIndexBuffer = lowIndexBuffer;
	TempTask->LowMaterialBuffer = lowMaterialBuffer;
	TempTask->LowVertexBuffer = lowVertexBuffer;
}