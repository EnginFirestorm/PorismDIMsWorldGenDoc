// Copyright by EnginFirestorm, All Rights Reserved.

#include "ChunkWorld.h"
#include <ChunkExtend.cpp>

struct FTempInfo
{
	FBiomeMaterialStep* task11;
	FChunkData* chunkData;
	int X;
	int Y;
	int Z;
	int material;
	FIntVector Start;
	std::vector<FTempChunkData>* temp;
	char* VirtualStack;
	AChunkWorld* world;
	int index;
	int* finalOutput;
};

static void TopLayer(FTempInfo& info)
{
	bool ok11 = false;
	int taskOffset11 = (info.task11->Offset / info.chunkData->BlockFactor) + 1;
	int taskTestRange11 = (info.task11->TestRange / info.chunkData->BlockFactor) + 1;

	int* chunk = nullptr;
	FIntVector tempChunk = FIntVector(999999999, 999999999, 999999999);

	for (int j11 = 1; j11 < taskOffset11 + 1; j11++)
	{
		int blockValue = 0;
		int newZ = info.Z + j11;
		auto newtempChunk = info.Start + FIntVector(0, 0, newZ < info.chunkData->PointCount.Z ? 0 : newZ / info.chunkData->BlockCount.Z * info.chunkData->ChunkBlockFactor.Z);
		if (tempChunk != newtempChunk)
		{
			chunk = nullptr;
			tempChunk = newtempChunk;
			CheckForChunkData(info.temp, tempChunk, info.chunkData, info.world, info.VirtualStack, chunk);
		}

		blockValue = chunk[(newZ < info.chunkData->PointCount.Z ? newZ : (newZ % info.chunkData->BlockCount.Z) + 0) * info.chunkData->PointCount.X * info.chunkData->PointCount.Y + info.Y * info.chunkData->PointCount.X + info.X];

		if (blockValue == info.task11->SearchMaterialIndex)
		{
			ok11 = true;
			for (int k11 = 1; k11 < taskTestRange11 + 1; k11++)
			{
				newZ = info.Z + j11 + k11;
				newtempChunk = info.Start + FIntVector(0, 0, newZ < info.chunkData->PointCount.Z ? 0 : newZ / info.chunkData->BlockCount.Z * info.chunkData->ChunkBlockFactor.Z);
				if (tempChunk != newtempChunk)
				{
					chunk = nullptr;
					tempChunk = newtempChunk;
					CheckForChunkData(info.temp, tempChunk, info.chunkData, info.world, info.VirtualStack, chunk);
				}

				blockValue = chunk[(newZ < info.chunkData->PointCount.Z ? newZ : (newZ % info.chunkData->BlockCount.Z) + 0) * info.chunkData->PointCount.X * info.chunkData->PointCount.Y + info.Y * info.chunkData->PointCount.X + info.X];
				if (blockValue != info.task11->SearchMaterialIndex)
				{
					ok11 = false;
					break;
				}
			}
			break;
		}
	}
	if (ok11)
		info.material = info.task11->MaterialIndex;
}

static void TopLayerAround(FTempInfo& info)
{
	bool ok11 = false;
	int taskOffset11 = (info.task11->Offset / info.chunkData->BlockFactor) + 1;
	int taskTestRange11 = (info.task11->TestRange / info.chunkData->BlockFactor) + 1;

	int* chunk = nullptr;
	FIntVector tempChunk = FIntVector(999999999, 999999999, 999999999);

	FVector targetVector = FVector(info.Start.X + info.X - info.task11->Point.X, info.Start.Y + info.Y - info.task11->Point.Y, info.Start.Z + info.Z - info.task11->Point.Z);

	targetVector.Normalize();

	for (int j11 = 1; j11 < taskOffset11 + 1; j11++)
	{
		int blockValue = 0;

		FIntVector newWorldpoint = FIntVector(
			(info.Start.X + (info.X - 1 + FMath::RoundToInt32((float)j11 * targetVector.X)) * info.chunkData->BlockFactor),
			(info.Start.Y + (info.Y - 1 + FMath::RoundToInt32((float)j11 * targetVector.Y)) * info.chunkData->BlockFactor),
			(info.Start.Z + (info.Z - 1 + FMath::RoundToInt32((float)j11 * targetVector.Z)) * info.chunkData->BlockFactor));

		FIntVector newtempChunk = info.world->BlockWorldPosToChunkGridPos(newWorldpoint, info.chunkData) * info.chunkData->ChunkBlockFactor;

		if (tempChunk != newtempChunk)
		{
			chunk = nullptr;
			tempChunk = newtempChunk;
			CheckForChunkData(info.temp, tempChunk, info.chunkData, info.world, info.VirtualStack, chunk);
		}

		auto localPos = info.world->BlockWorldPosToBlockChunkPos(newWorldpoint, info.chunkData);
		blockValue = chunk[info.world->BlockChunkPosToBlockChunkIndex(localPos, info.chunkData)];

		if (blockValue == info.task11->SearchMaterialIndex)
		{
			ok11 = true;
			for (int k11 = 0; k11 < taskTestRange11; k11++)
			{
				newWorldpoint = FIntVector(
					(info.Start.X + (info.X - 1 + FMath::RoundToInt32((float)(j11 + k11) * targetVector.X)) * info.chunkData->BlockFactor),
					(info.Start.Y + (info.Y - 1 + FMath::RoundToInt32((float)(j11 + k11) * targetVector.Y)) * info.chunkData->BlockFactor),
					(info.Start.Z + (info.Z - 1 + FMath::RoundToInt32((float)(j11 + k11) * targetVector.Z)) * info.chunkData->BlockFactor));

				newtempChunk = info.world->BlockWorldPosToChunkGridPos(newWorldpoint, info.chunkData) * info.chunkData->ChunkBlockFactor;

				if (tempChunk != newtempChunk)
				{
					chunk = nullptr;
					tempChunk = newtempChunk;
					CheckForChunkData(info.temp, tempChunk, info.chunkData, info.world, info.VirtualStack, chunk);
				}

				localPos = info.world->BlockWorldPosToBlockChunkPos(newWorldpoint, info.chunkData);
				blockValue = chunk[info.world->BlockChunkPosToBlockChunkIndex(localPos, info.chunkData)];

				if (blockValue != info.task11->SearchMaterialIndex)
				{
					ok11 = false;
					break;
				}
			}
			break;
		}
	}
	if (ok11)
		info.material = info.task11->MaterialIndex;
}

static void OnTopOf(FTempInfo& info)
{
	if (info.Z == info.chunkData->PointCount.Z - 1)
		return;

	if (info.finalOutput[info.index + info.chunkData->PointCount.X * info.chunkData->PointCount.Y] != info.task11->SearchMaterialIndex)
		return;
	info.finalOutput[info.index + info.chunkData->PointCount.X * info.chunkData->PointCount.Y] = info.task11->MaterialIndex;
}

static void OnTopOfAround(FTempInfo& info)
{
	FVector targetVector = FVector(info.Start.X + info.X - info.task11->Point.X, info.Start.Y + info.Y - info.task11->Point.Y, info.Start.Z + info.Z - info.task11->Point.Z);

	targetVector.Normalize();

	int xx = FMath::RoundToInt32(targetVector.X);
	int yy = FMath::RoundToInt32(targetVector.Y);
	int zz = FMath::RoundToInt32(targetVector.Z);

	if (info.X + xx == info.chunkData->PointCount.X || info.X + xx == -1
		|| info.Y + yy == info.chunkData->PointCount.Y || info.Y + yy == -1
		|| info.Z + zz == info.chunkData->PointCount.Z || info.Z + zz == -1)
		return;

	if (info.finalOutput[info.index + (info.chunkData->PointCount.X * info.chunkData->PointCount.Y * zz) + (info.chunkData->PointCount.X * yy) + xx] != info.task11->SearchMaterialIndex)
		return;
	info.finalOutput[info.index + (info.chunkData->PointCount.X * info.chunkData->PointCount.Y * zz) + (info.chunkData->PointCount.X * yy) + xx] = info.task11->MaterialIndex;
}


#define PaintLoop(Materials)\
					for (auto& task11 : Materials)\
					{\
						info.task11 = &task11;\
						if (task11.OnlyOnThisNodeInit)\
						{\
							bool found11 = false;\
							for (int onlyMaterial11 : task11.OnlyOnThisIndex)\
							{\
								if (onlyMaterial11 == info.material)\
								{\
									found11 = true;\
									continue;\
								}\
							}\
							if (found11) {\
								\
								if (task11.FlipOnThisArr)\
									continue;\
							}\
							else {\
								\
								if (!task11.FlipOnThisArr)\
									continue;\
							}\
						}\
						if (task11.BubbleGenNode)\
						{\
							if (task11.BubbleGenNode->GenSingle3D(wX, wY, wZ, Seed) > 0.f)\
								continue;\
						}\
						switch (task11.GenType)\
						{\
						case SurfaceGenType::Normal:\
info.material = task11.MaterialIndex; \
break; \
						case SurfaceGenType::TopLayer:\
	TopLayer(info); \
	break; \
						case SurfaceGenType::TopLayerAround:\
	TopLayerAround(info); \
	break; \
						case SurfaceGenType::OnTopOf:\
	OnTopOf(info); \
	break; \
						case SurfaceGenType::OnTopOfAround:\
	OnTopOfAround(info); \
	break; \
						}\
					}

char* AChunkWorld::GenerateChunk(std::vector<FTempChunkData>* temp, FChunkData* chunkData, FIntVector Start, char* VirtualStack, bool fullGen, bool forceCacheGen)
{
	int* finalOutput = (int*)sallocd(finalOutput, VirtualStack, chunkData->PointBufferSize, -1);

	int* bioms = (int*)sallocd(bioms, VirtualStack, chunkData->PointBufferSize, -1);

	int* biomSwitch = (int*)sallocd(biomSwitch, VirtualStack, chunkData->PointBufferSize, 0);

	float* biomPower = (float*)sallocd(biomPower, VirtualStack, chunkData->PointBufferSize, 0); // we need this to hold track on the most powerfull biom per block

	float* dum = (float*)sallocd(dum, VirtualStack, (chunkData->BlockCount.X + chunkData->BlockCount.Y + chunkData->BlockCount.Z) * sizeof(float), 0);

	bool generadeGrid = false;
	bool colorGen = fullGen;

	generadeGrid = !DriveCache->Read(finalOutput, chunkData->PointBufferSize, Start.X / chunkData->ChunkBlockFactor.X, Start.Y / chunkData->ChunkBlockFactor.Y, Start.Z / chunkData->ChunkBlockFactor.Z, chunkData->BlockFactor);

	if (generadeGrid && !UseChunkNoiseGenerator)
	{
		DriveCache->Write(finalOutput, chunkData->PointBufferSize, Start.X / chunkData->ChunkBlockFactor.X, Start.Y / chunkData->ChunkBlockFactor.Y, Start.Z / chunkData->ChunkBlockFactor.Z, chunkData->BlockFactor);
		return VirtualStack;
	}

	if (generadeGrid || forceCacheGen)
	{
		{
			bool empty = false;
			bool filled = false;
			bool finalempty = false;
			bool finalfilled = false;
			int step = 0;
			int xysize = chunkData->PointCount.X * chunkData->PointCount.Y;
			{
				TRACE_CPUPROFILER_EVENT_SCOPE_STR("GenerateNoiseData");

				float* xOutput = (float*)salloc(VirtualStack, chunkData->GenBufferSize);
				float* yOutput = (float*)salloc(VirtualStack, chunkData->GenBufferSize);
				float* zOutput = (float*)salloc(VirtualStack, chunkData->GenBufferSize);
				float* xOutputOff = (float*)salloc(VirtualStack, chunkData->GenBufferSize);
				float* yOutputOff = (float*)salloc(VirtualStack, chunkData->GenBufferSize);
				float* zOutputOff = (float*)salloc(VirtualStack, chunkData->GenBufferSize);

				float* noiseOutput = (float*)sallocd(noiseOutput, VirtualStack, chunkData->GenBufferSize, 0.f);

				int startX = Start.X / chunkData->BlockFactor;
				int startY = Start.Y / chunkData->BlockFactor;
				int startZ = Start.Z / chunkData->BlockFactor;
				float frequencyX = 0.0001f * chunkData->BlockSize;
				float frequencyY = 0.0001f * chunkData->BlockSize;
				float frequencyZ = 0.0001f * chunkData->BlockSize;

				WorldGenDef->WorldGenNode->GenAxes(xOutput, yOutput, zOutput,
					startX, startY, startZ,
					chunkData->PointCount.X, chunkData->PointCount.Y, chunkData->PointCount.Z,
					nullptr, nullptr, nullptr,
					frequencyX, frequencyY, frequencyZ, Seed);

				WorldGenDef->WorldGenNode->GenAxes(xOutputOff, yOutputOff, zOutputOff,
					startX, startY, startZ,
					chunkData->PointCount.X, chunkData->PointCount.Y, chunkData->PointCount.Z,
					WorldGenDef->WorldBiomeOffsetXNode ? WorldGenDef->WorldBiomeOffsetXNode.get() : nullptr,
					WorldGenDef->WorldBiomeOffsetYNode ? WorldGenDef->WorldBiomeOffsetYNode.get() : nullptr,
					WorldGenDef->WorldBiomeOffsetZNode ? WorldGenDef->WorldBiomeOffsetZNode.get() : nullptr,
					frequencyX, frequencyY, frequencyZ, Seed);


				if (WorldGenDef->GenOnlyTestNode)
					WorldGenDef->GenOnlyTestNode->Gen3DComplexAdd(noiseOutput, xOutput, yOutput, zOutput, Seed, chunkData->PointArraySize, 1.f);
				else
				{

					for (int i = 0; i < WorldGenDef->WorldBiomes.Num(); i++)
					{
						auto* biom = &WorldGenDef->WorldBiomes[i];
						if (biom->NoiseOnly)
						{
							if (biom->DomainNode->Gen3DDomainCheckSimpel(xOutputOff, yOutputOff, zOutputOff, Seed, chunkData->PointArraySize))
							{
								biom->GenANode->Gen3DAdd(noiseOutput, xOutput, yOutput, zOutput, xOutputOff, yOutputOff, zOutputOff, Seed, chunkData->PointArraySize, biom->DomainNode.get());
							}
						}
						else
						{
							if (biom->DomainNode->Gen3DDomainCheck(xOutputOff, yOutputOff, zOutputOff, Seed, chunkData->PointArraySize, biom->DomainOver, biomPower))
							{
								biom->GenANode->Gen3DFullAdd(noiseOutput, xOutput, yOutput, zOutput,
									xOutputOff, yOutputOff, zOutputOff, Seed, chunkData->PointArraySize, biom->Overlap, biom->DomainOver, biom->GenBNode.get(), biom->DualSwitchNode.get(), biom->DomainNode.get(),
									i, biomPower, biomSwitch, bioms);
							}
						}
					}

					if (WorldGenDef->WorldGenNode)
						WorldGenDef->WorldGenNode->Gen3DCompAddWV(noiseOutput, biomPower, xOutput, yOutput, zOutput, Seed, chunkData->PointArraySize, 1.f);
				}
				for (int i = 0; i < chunkData->PointArraySize; ++i)
				{
					if (noiseOutput[i] > 0.0f)
					{
						finalOutput[i] = -1;
						empty = true;
						finalempty = true;
					}
					else
					{
						finalOutput[i] = 0;
						filled = true;
						finalfilled = true;
					}
					if ((i + 1) % xysize == 0)
					{
						if (empty && filled)
							finalOutput[chunkData->PointArraySize + step] = 0;
						else if (empty)
							finalOutput[chunkData->PointArraySize + step] = -1;
						else if (filled)
							finalOutput[chunkData->PointArraySize + step] = 1;
						empty = false;
						filled = false;
						step++;
					}
				}
			}
			if (finalempty && finalfilled)
				finalOutput[chunkData->PointArraySize + step] = 0;
			else if (finalempty)
				finalOutput[chunkData->PointArraySize + step] = -1;
			else if (finalfilled)
				finalOutput[chunkData->PointArraySize + step] = 1;
		}

		if (WorldGenDef->GenerateOceanFlat || WorldGenDef->GenerateOceanAroundCenter)
		{
			TRACE_CPUPROFILER_EVENT_SCOPE_STR("GenerateOceanPart1");
			for (int i = 0; i < chunkData->PointArraySize; i++)
			{
				if (finalOutput[i] > -1)
					continue;

				int index = bioms[i];

				if (index != -1) {
					FBiomeDualData& biom = WorldGenDef->WorldBiomes[index];
					if (biom.GenerateOceanFlat)
					{
						int Z = i / (chunkData->PointCount.X * chunkData->PointCount.Y);
						int bwZ = (Start.Z + (Z - 1) * chunkData->BlockFactor);
						if (biom.RespectAirBubblesOcean)
						{

						}
						else
						{
							if (bwZ < biom.StartingOceanHeight)
								finalOutput[i] = biom.OceanMaterialIndex;
						}
					}
					else if (biom.GenerateOceanAroundCenter)
					{
						int X = i % chunkData->PointCount.X;
						int Y = (i / chunkData->PointCount.X) % chunkData->PointCount.Y;
						int Z = i / (chunkData->PointCount.X * chunkData->PointCount.Y);
						int bwX = (Start.X + (X - 1) * chunkData->BlockFactor);
						int bwY = (Start.Y + (Y - 1) * chunkData->BlockFactor);
						int bwZ = (Start.Z + (Z - 1) * chunkData->BlockFactor);
						if (biom.RespectAirBubblesOcean)
						{

						}
						else
						{
							if (bwZ < biom.StartingOceanHeight)
							{
								FVector targetVector = FVector(bwX - biom.OceanCenter.X, bwY - biom.OceanCenter.Y, bwZ - biom.OceanCenter.Z);
								float distance = targetVector.Size();
								if (distance < biom.StartingOceanHeight)
									finalOutput[i] = biom.OceanMaterialIndex;
							}
						}
					}
				}
			}
		}

	}
	temp->push_back({ finalOutput, Start });
	if (colorGen) // We get here the ok to generade enything
	{
		TRACE_CPUPROFILER_EVENT_SCOPE_STR("GenerateMaterialData");
		if (finalOutput[chunkData->PointArraySize + chunkData->PointCount.Z] != -1)
		{
			FTempInfo info = FTempInfo();
			info.chunkData = chunkData;
			info.temp = temp;
			info.VirtualStack = VirtualStack;
			info.world = this;
			info.Start = Start;
			info.finalOutput = finalOutput;

			for (int i = 0; i < chunkData->PointArraySize; i++)
			{
				info.index = i;
				int Z = i / (chunkData->PointCount.X * chunkData->PointCount.Y);
				info.Z = Z;
				if (finalOutput[chunkData->PointArraySize + Z] < 0)
				{
					i += chunkData->PointCount.X * chunkData->PointCount.Y - 1;
					continue;
				}

				if (finalOutput[i] < 0)
					continue;

				info.material = finalOutput[i];
				int index = bioms[i];

				if (index != -1) {

					FBiomeDualData& biom = WorldGenDef->WorldBiomes[index];


					if ((biom.GenerateOceanFlat || biom.GenerateOceanAroundCenter) && info.material == biom.OceanMaterialIndex)
						continue;

					int X = i % chunkData->PointCount.X;
					info.X = X;
					int Y = (i / chunkData->PointCount.X) % chunkData->PointCount.Y;
					info.Y = Y;

					float wX = (((float)Start.X / chunkData->BlockFactor) + X - 1) * (chunkData->BlockSize * 0.0001f);
					float wY = (((float)Start.Y / chunkData->BlockFactor) + Y - 1) * (chunkData->BlockSize * 0.0001f);
					float wZ = (((float)Start.Z / chunkData->BlockFactor) + Z - 1) * (chunkData->BlockSize * 0.0001f);

					if (biom.GenUMaterialsNodeInit)
					{
						PaintLoop(biom.GenUMaterials)
					}
					if (biomSwitch[i] > 0) {
						if (biom.GenAMaterialsNodeInit)
							PaintLoop(biom.GenAMaterials)
					}
					else {
						if (biom.GenBMaterialsNodeInit)
							PaintLoop(biom.GenBMaterials)
					}
					finalOutput[i] = info.material;
				}
			}
		}
		DriveCache->Write(finalOutput, chunkData->PointBufferSize, Start.X / chunkData->ChunkBlockFactor.X, Start.Y / chunkData->ChunkBlockFactor.Y, Start.Z / chunkData->ChunkBlockFactor.Z, chunkData->BlockFactor);
	}
	return VirtualStack;
}