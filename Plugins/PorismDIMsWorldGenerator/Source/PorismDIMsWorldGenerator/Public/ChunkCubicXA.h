// Copyright by EnginFirestorm, All Rights Reserved.

#pragma once

#include "Chunk.h"
#include "ChunkCubic.h"
#include "FastNoise/FastNoise.h"



struct FPolyCubicX2 final : public FPolyBuilder{
	bool viewxm, viewxp, viewym, viewyp, viewzm, viewzp;
	bool useSoftNormals;
	bool bevels;
	FIntVector pointXMYMZM, pointXPYMZM, pointXMYPZM, pointXPYPZM, pointXMYMZP, pointXPYMZP, pointXMYPZP, pointXPYPZP;
	FIntVector pointXM, pointXP, pointYM, pointYP, pointZM, pointZP;
	FIntVector bevelsXMYMZM, bevelsXMYMZP, bevelsXMYPZM, bevelsXMYPZP, bevelsXPYMZM, bevelsXPYMZP, bevelsXPYPZM, bevelsXPYPZP;
	FIntVector bevelsXM, bevelsXP, bevelsYM, bevelsYP, bevelsZM, bevelsZP;
	int neighborsXMYMZM, neighborsXMYMZP, neighborsXMYPZM, neighborsXMYPZP, neighborsXPYMZM, neighborsXPYMZP, neighborsXPYPZM, neighborsXPYPZP;
	void BaseViewCheck();
	void PreVertex();
};

class FCubicChunkX2 final : public FChunk
{
public:

	void GeneratePolyData(std::vector<FTempChunkData>* temp, char* virtualStack, FVector worldStart) override;
};




static const FIntVector BevelsArrayX2[128] = {
{0, 0, 0}, {12, 12, 12}, {-12, 12, 12}, {0, 0, 0}/**/, {12, -12, 12}, {0, 0, 0}/**/, {0, 0, 0}, {0, 0, 0},
{-12, -12, 12}, {0, 0, 0}/**/, {-10, 0, 10}/*LeftDownRight1*/, {-6, 6, 6}/*BottomRight*/, {0, -10, 10}/*RightDownLeft1*/, {6, -6, 6}/*BottomLeft*/, {-6, -6, 6}/*BottomBottom*/, {0, 0, 0}/*DoNotTouchiZPlane*/,
{12, 12, -12}, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
{0, 0, 0}, {0, 0, 0}, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}, {-6, -6, -6}/*Top*/,
{-12, 12, -12}, {0, 0, 0}/**/, {-10, 10, 0}/*BOMBASTIGSIDEEYELEFT*/, {0, 0, 0}/**/, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
{0, 0, 0}, {0, 0, 0}, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}, {6, -6, -6}/*TopRight*/,
{0, 10, -10}/*RightDownRight1*/, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}/*DoNotTouchiYPlane*/, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
{0, 0, 0}, {0, 0, 0}, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}, {0, -10, -10}/**/,
{12, -12, -12}, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}/**/, {10, -10, 0}/*BOMBASTIGSIDEEYERIGHT*/, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
{0, 0, 0}, {0, 0, 0}, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}, {-6, 6, -6}/*TopLeft*/,
{10, 0, -10}/*LeftDownLeft1*/, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0},
{0, 0, 0}, {0, 0, 0}, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}, {-10, 0, -10}/**/,
{0, 0, 0}, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}, {0, 0, 0},
{0, 0, 0}, {0, 0, 0}, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}, {0, 0, -12},
{6, 6, -6}/*Bottom*/, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}/**/, {0, 0, 0}, {-10, -10, 0}/**/,
{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, -12, 0}, {0, 0, 0}/**/, {-12, 0, 0}, {0, 0, 0}/**/, {-12, -12, -12}
};

static const bool SBevelsArrayX2[128] = {
false, true, true, false, true, false, false, false,
true, false, false, false, false, false, false, false,
true, false, false, false, false, false, false, false,
false, false, false, false, false, false, false, false,
true, false, false, false, false, false, false, false,
false, false, false, false, false, false, false, false,
false, false, false, false, false, false, false, false,
false, false, false, false, false, false, false, false,
true, false, false, false, false, false, false, false,
false, false, false, false, false, false, false, false,
false, false, false, false, false, false, false, false,
false, false, false, false, false, false, false, false,
false, false, false, false, false, false, false, false,
false, false, false, false, false, false, false, false,
false, false, false, false, false, false, false, false,
false, false, false, false, false, false, false, true
};


