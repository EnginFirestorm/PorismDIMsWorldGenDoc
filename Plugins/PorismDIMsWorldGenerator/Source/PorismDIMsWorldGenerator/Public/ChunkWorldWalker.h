// Copyright by EnginFirestorm, All Rights Reserved.

#pragma once

#include "UObject/Interface.h"
#include "ChunkWorldWalker.generated.h"

UINTERFACE(MinimalAPI, Blueprintable)
class UChunkWorldWalker : public UInterface
{
    GENERATED_BODY()
};

class IChunkWorldWalker
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = ChunkWorldWalker)
    FVector GetTracingLocation() const;
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = ChunkWorldWalker)
    FVector GetTracingVector() const;
    /** A multiplier to adjust the loading distance **/
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = ChunkWorldWalker)
    TArray<double> GetViewDistanceMultiplier() const;
};