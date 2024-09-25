// Copyright by EnginFirestorm, All Rights Reserved.

#pragma once

#include "Chunk.h"
#include "FastNoise/FastNoise.h"
#include "ChunkHexagonal.generated.h"

/** A render-specific class for settings. Extra functions can be activated via this to change the design a little. Attention! This class only works for its partner **/
UCLASS(BlueprintType, Blueprintable)
class PORISMDIMSWORLDGENERATOR_API UHexagonalBlock : public UChunkBlock {

	GENERATED_BODY()

public:

};

class FHexagonalChunk final : public FChunk
{
public:

	void GeneratePolyData(std::vector<FTempChunkData>* temp, char* virtualStack, FVector worldStart) override;
};