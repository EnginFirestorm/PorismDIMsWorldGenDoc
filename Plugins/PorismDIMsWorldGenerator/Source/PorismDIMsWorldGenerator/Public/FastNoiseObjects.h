// Copyright by EnginFirestorm, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "FastNoise/FastNoise.h"
#include "FastNoise/SmartNode.h"
#include "FastNoiseObjects.generated.h"

UENUM(BlueprintType)
enum class FastNoiseDistanceFunction : uint8 {
	Euclidean			UMETA(DisplayName = "Euclidean"),
	EuclideanSquared	UMETA(DisplayName = "EuclideanSquared"),
	Manhattan			UMETA(DisplayName = "Manhattan"),
	Hybrid				UMETA(DisplayName = "Hybrid"),
	MaxAxis				UMETA(DisplayName = "MaxAxis"),
};

UENUM(BlueprintType)
enum class FastNoiseReturnType : uint8 {
	Index0				UMETA(DisplayName = "Index0"),
	Index0Add1			UMETA(DisplayName = "Index0Add1"),
	Index0Sub1			UMETA(DisplayName = "Index0Sub1"),
	Index0Mul1			UMETA(DisplayName = "Index0Mul1"),
	Index0Div1			UMETA(DisplayName = "Index0Div1"),
};

UENUM(BlueprintType)
enum class FastNoiseDim : uint8 {
	X					UMETA(DisplayName = "X"),
	Y					UMETA(DisplayName = "Y"),
	Z					UMETA(DisplayName = "Z"),
	W					UMETA(DisplayName = "W"),
	Count				UMETA(DisplayName = "Count"),

};

class PORISMDIMSWORLDGENERATOR_API FNode
{

public:
	FString Flow = "";
	FastNoise::SmartNode<FastNoise::Generator> BaseNode = nullptr;

	~FNode()
	{
		BaseNode->~Generator();
	}
};

#define MakeClass(TYPE, NAME)\
\
class PORISMDIMSWORLDGENERATOR_API NAME : public FNode\
{\
\
public:\
	FastNoise::SmartNode<FastNoise::TYPE> Node = nullptr;\
	\
	NAME(FString flow)\
	{\
		Flow = flow;\
		Node = FastNoise::New<FastNoise::TYPE>();\
		BaseNode = Node;\
	}\
	\
};\

// BasicGenerators
MakeClass(Checkerboard, FCheckerboard)
MakeClass(Constant, FConstant)
MakeClass(DistanceToPoint, FDistanceToPoint)
MakeClass(PositionOutput, FPositionOutput)
MakeClass(SineWave, FSineWave)
MakeClass(White, FWhite)

// Blends
MakeClass(Add, FAdd)
MakeClass(Divide, FDivide)
MakeClass(Fade, FFade)
MakeClass(Max, FMax)
MakeClass(MaxSmooth, FMaxSmooth)
MakeClass(Min, FMin)
MakeClass(MinSmooth, FMinSmooth)
MakeClass(Multiply, FMultiply)
MakeClass(PowFloat, FPowFloat)
MakeClass(PowInt, FPowInt)
MakeClass(Subtract, FSubtract)

// CoherentNoise
MakeClass(CellularDistance, FCellularDistance)
MakeClass(CellularLookup, FCellularLookup)
MakeClass(CellularValue, FCellularValue)
MakeClass(OpenSimplex2, FOpenSimplex2)
MakeClass(OpenSimplex2S, FOpenSimplex2S)
MakeClass(Perlin, FPerlin)
MakeClass(Simplex, FSimplex)
MakeClass(Value, FValue)

// DomainWarp
MakeClass(DomainWarpGradient, FDomainWarpGradient)

// Fractal
MakeClass(DomainWarpFractalIndependant, FDomainWarpFractalIndependant)
MakeClass(DomainWarpFractalProgressive, FDomainWarpFractalProgressive)
MakeClass(FractalFBm, FFractalFBm)
MakeClass(FractalPingPong, FFractalPingPong)
MakeClass(FractalRidged, FFractalRidged)

// Modifiers
MakeClass(AddDimension, FAddDimension)
MakeClass(DomainAxisScale, FDomainAxisScale)
MakeClass(DomainOffset, FDomainOffset)
MakeClass(DomainRotate, FDomainRotate)
MakeClass(DomainScale, FDomainScale)
MakeClass(GeneratorCache, FGeneratorCache)
MakeClass(Remap, FRemap)
MakeClass(RemoveDimension, FRemoveDimension)
MakeClass(SeedOffset, FSeedOffset)
MakeClass(Terrace, FTerrace)