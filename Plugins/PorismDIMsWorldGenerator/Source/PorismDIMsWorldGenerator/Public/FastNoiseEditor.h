// Copyright by EnginFirestorm, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FastNoiseObjects.h"
#include "FastNoise/Metadata.h"
#include <string>
#include "FastNoiseEditor.generated.h"

#define checkV(TYPE)\
for (auto &oldnode : *Nodes)\
if (oldnode.Node->Flow == plan)\
return oldnode;\
FNodeLink nodeLink;\
auto node = new TYPE(plan);\
nodeLink.Node = (FNode*)node;\
Nodes->push_back(nodeLink);

USTRUCT(BlueprintType)
struct FNodeLink
{
	GENERATED_BODY()

	FNode* Node = nullptr;
};

UCLASS(BlueprintType, Blueprintable)
class PORISMDIMSWORLDGENERATOR_API UFastNoiseEditor : public UObject
{
	GENERATED_BODY()

public:
	std::vector< FNodeLink>* Nodes;

	UFUNCTION(BlueprintPure, Category = "FastNoiseBasicGenerators")
	FNodeLink Checkerboard(float size = 1.0) {
		FString plan = "Checkerboard" + FString::SanitizeFloat(size) + "\n";

		checkV(FCheckerboard);

		node->Node->SetSize(size);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBasicGenerators")
	FNodeLink Constant(float value = 0) {
		FString plan = "Constant" + FString::SanitizeFloat(value) + "\n";

		checkV(FConstant);

		node->Node->SetValue(value);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBasicGenerators")
	FNodeLink DistanceToPoint(FastNoiseDistanceFunction distanceFunction = FastNoiseDistanceFunction::Euclidean, FVector point = FVector(0)) {
		FString plan = "DistanceToPoint" + FString::FromInt((int)distanceFunction) + FString::SanitizeFloat(point.X) + FString::SanitizeFloat(point.Y) + FString::SanitizeFloat(point.Z) + "\n";

		checkV(FDistanceToPoint);

		node->Node->SetDistanceFunction((FastNoise::DistanceFunction)distanceFunction);
		node->Node->SetScale<FastNoise::Dim::X>(point.X);
		node->Node->SetScale<FastNoise::Dim::Y>(point.Y);
		node->Node->SetScale<FastNoise::Dim::Z>(point.Z);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBasicGenerators")
	FNodeLink PositionOutput(FVector multiplier = FVector(0), FVector offset = FVector(0)) {
		FString plan = "PositionOutput" + FString::SanitizeFloat(multiplier.X) + FString::SanitizeFloat(multiplier.Y) + FString::SanitizeFloat(multiplier.Z) + FString::SanitizeFloat(offset.X) + FString::SanitizeFloat(offset.Y) + FString::SanitizeFloat(offset.Z) + "\n";

		checkV(FPositionOutput);

		node->Node->Set<FastNoise::Dim::X>(multiplier.X, offset.X);
		node->Node->Set<FastNoise::Dim::Y>(multiplier.Y, offset.Y);
		node->Node->Set<FastNoise::Dim::Z>(multiplier.Z, offset.Z);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBasicGenerators")
	FNodeLink SineWave(float scale = 1.0) {
		FString plan = "SineWave" + FString::SanitizeFloat(scale) + "\n";

		checkV(FSineWave);

		node->Node->SetScale(scale);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBasicGenerators")
	FNodeLink White() {
		FString plan = "White\n";

		checkV(FWhite);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBlends")
	FNodeLink Add(UPARAM(ref) FNodeLink lhs, UPARAM(ref) FNodeLink rhs) {
		FString plan = "Add\n";
		plan += lhs.Node->Flow;
		plan += rhs.Node->Flow;

		checkV(FAdd);

		node->Node->SetLHS(lhs.Node->BaseNode);
		node->Node->SetRHS(rhs.Node->BaseNode);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBlends")
	FNodeLink AddFloat(UPARAM(ref) FNodeLink lhs, float rhs) {
		FString plan = "AddFloat" + FString::SanitizeFloat(rhs) + "\n";
		plan += lhs.Node->Flow;

		checkV(FAdd);

		node->Node->SetLHS(lhs.Node->BaseNode);
		node->Node->SetRHS(rhs);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBlends")
	FNodeLink Divide(UPARAM(ref) FNodeLink lhs, UPARAM(ref) FNodeLink rhs) {
		FString plan = "Divide\n";
		plan += lhs.Node->Flow;
		plan += rhs.Node->Flow;

		checkV(FDivide);

		node->Node->SetLHS(lhs.Node->BaseNode);
		node->Node->SetRHS(rhs.Node->BaseNode);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBlends")
	FNodeLink DivideFloat(UPARAM(ref) FNodeLink lhs, float rhs) {
		FString plan = "DivideFloat" + FString::SanitizeFloat(rhs) + "\n";
		plan += lhs.Node->Flow;

		checkV(FDivide);

		node->Node->SetLHS(lhs.Node->BaseNode);
		node->Node->SetRHS(rhs);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBlends")
	FNodeLink Fade(UPARAM(ref) FNodeLink a, UPARAM(ref) FNodeLink b, UPARAM(ref) FNodeLink fade) {
		FString plan = "Fade\n";
		plan += a.Node->Flow;
		plan += b.Node->Flow;
		plan += fade.Node->Flow;

		checkV(FFade);

		node->Node->SetA(a.Node->BaseNode);
		node->Node->SetB(b.Node->BaseNode);
		node->Node->SetFade(fade.Node->BaseNode);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBlends")
	FNodeLink FadeFloat(UPARAM(ref) FNodeLink a, UPARAM(ref) FNodeLink b, float fade) {
		FString plan = "FadeFloat" + FString::SanitizeFloat(fade) + "\n";
		plan += a.Node->Flow;
		plan += b.Node->Flow;

		checkV(FFade);

		node->Node->SetA(a.Node->BaseNode);
		node->Node->SetB(b.Node->BaseNode);
		node->Node->SetFade(fade);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBlends")
	FNodeLink Max(UPARAM(ref) FNodeLink lhs, UPARAM(ref) FNodeLink rhs) {
		FString plan = "Max\n";
		plan += lhs.Node->Flow;
		plan += rhs.Node->Flow;

		checkV(FMax);

		node->Node->SetLHS(lhs.Node->BaseNode);
		node->Node->SetRHS(rhs.Node->BaseNode);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBlends")
	FNodeLink MaxFloat(UPARAM(ref) FNodeLink lhs, float rhs) {
		FString plan = "MaxFloat" + FString::SanitizeFloat(rhs) + "\n";
		plan += lhs.Node->Flow;

		checkV(FMax);

		node->Node->SetLHS(lhs.Node->BaseNode);
		node->Node->SetRHS(rhs);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBlends")
	FNodeLink MaxSmooth(UPARAM(ref) FNodeLink lhs, UPARAM(ref) FNodeLink rhs, UPARAM(ref) FNodeLink smoothness) {
		FString plan = "MaxSmooth\n";
		plan += lhs.Node->Flow;
		plan += rhs.Node->Flow;
		plan += smoothness.Node->Flow;

		checkV(FMaxSmooth);

		node->Node->SetLHS(lhs.Node->BaseNode);
		node->Node->SetRHS(rhs.Node->BaseNode);
		node->Node->SetSmoothness(smoothness.Node->BaseNode);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBlends")
	FNodeLink MaxSmoothFloat(UPARAM(ref) FNodeLink lhs, UPARAM(ref) FNodeLink rhs, float smoothness) {
		FString plan = "MaxSmoothFloat" + FString::SanitizeFloat(smoothness) + "\n";
		plan += lhs.Node->Flow;
		plan += rhs.Node->Flow;

		checkV(FMaxSmooth);

		node->Node->SetLHS(lhs.Node->BaseNode);
		node->Node->SetRHS(rhs.Node->BaseNode);
		node->Node->SetSmoothness(smoothness);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBlends")
	FNodeLink Min(UPARAM(ref) FNodeLink lhs, UPARAM(ref) FNodeLink rhs) {
		FString plan = "Min\n";
		plan += lhs.Node->Flow;
		plan += rhs.Node->Flow;

		checkV(FMin);

		node->Node->SetLHS(lhs.Node->BaseNode);
		node->Node->SetRHS(rhs.Node->BaseNode);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBlends")
	FNodeLink MinFloat(UPARAM(ref) FNodeLink lhs, float rhs) {
		FString plan = "MinFloat" + FString::SanitizeFloat(rhs) + "\n";
		plan += lhs.Node->Flow;

		checkV(FMin);

		node->Node->SetLHS(lhs.Node->BaseNode);
		node->Node->SetRHS(rhs);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBlends")
	FNodeLink MinSmooth(UPARAM(ref) FNodeLink lhs, UPARAM(ref) FNodeLink rhs, UPARAM(ref) FNodeLink smoothness) {
		FString plan = "MinSmooth\n";
		plan += lhs.Node->Flow;
		plan += rhs.Node->Flow;
		plan += smoothness.Node->Flow;

		checkV(FMinSmooth);

		node->Node->SetLHS(lhs.Node->BaseNode);
		node->Node->SetRHS(rhs.Node->BaseNode);
		node->Node->SetSmoothness(smoothness.Node->BaseNode);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBlends")
	FNodeLink MinSmoothFloat(UPARAM(ref) FNodeLink lhs, UPARAM(ref) FNodeLink rhs, float smoothness) {
		FString plan = "MinSmoothFloat" + FString::SanitizeFloat(smoothness) + "\n";
		plan += lhs.Node->Flow;
		plan += rhs.Node->Flow;

		checkV(FMinSmooth);

		node->Node->SetLHS(lhs.Node->BaseNode);
		node->Node->SetRHS(rhs.Node->BaseNode);
		node->Node->SetSmoothness(smoothness);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBlends")
	FNodeLink Multiply(UPARAM(ref) FNodeLink lhs, UPARAM(ref) FNodeLink rhs) {
		FString plan = "Multiply\n";
		plan += lhs.Node->Flow;
		plan += rhs.Node->Flow;

		checkV(FMultiply);

		node->Node->SetLHS(lhs.Node->BaseNode);
		node->Node->SetRHS(rhs.Node->BaseNode);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBlends")
	FNodeLink MultiplyFloat(UPARAM(ref) FNodeLink lhs, float rhs) {
		FString plan = "MultiplyFloat" + FString::SanitizeFloat(rhs) + "\n";
		plan += lhs.Node->Flow;

		checkV(FMultiply);

		node->Node->SetLHS(lhs.Node->BaseNode);
		node->Node->SetRHS(rhs);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBlends")
	FNodeLink PowFloat(UPARAM(ref) FNodeLink value, UPARAM(ref) FNodeLink pow) {
		FString plan = "PowFloat\n";
		plan += value.Node->Flow;
		plan += pow.Node->Flow;

		checkV(FPowFloat);

		node->Node->SetValue(value.Node->BaseNode);
		node->Node->SetPow(pow.Node->BaseNode);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBlends")
	FNodeLink PowFloatFloat(UPARAM(ref) FNodeLink value, float pow) {
		FString plan = "PowFloatFloat" + FString::SanitizeFloat(pow) + "\n";
		plan += value.Node->Flow;

		checkV(FPowFloat);

		node->Node->SetValue(value.Node->BaseNode);
		node->Node->SetPow(pow);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBlends")
	FNodeLink PowInt(UPARAM(ref) FNodeLink value, int pow = 2) {
		FString plan = "PowInt\n";
		plan += value.Node->Flow;

		checkV(FPowInt);

		node->Node->SetValue(value.Node->BaseNode);
		node->Node->SetPow(pow);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBlends")
	FNodeLink Subtract(UPARAM(ref) FNodeLink lhs, UPARAM(ref) FNodeLink rhs) {
		FString plan = "Subtract\n";
		plan += lhs.Node->Flow;
		plan += rhs.Node->Flow;

		checkV(FSubtract);

		node->Node->SetLHS(lhs.Node->BaseNode);
		node->Node->SetRHS(rhs.Node->BaseNode);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseBlends")
	FNodeLink SubtractFloat(UPARAM(ref) FNodeLink lhs, float rhs) {
		FString plan = "SubtractFloat" + FString::SanitizeFloat(rhs) + "\n";
		plan += lhs.Node->Flow;

		checkV(FSubtract);

		node->Node->SetLHS(lhs.Node->BaseNode);
		node->Node->SetRHS(rhs);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseCoherentNoise")
	FNodeLink CellularDistance(FastNoiseDistanceFunction distanceFunction = FastNoiseDistanceFunction::EuclideanSquared, int distanceIndex0 = 0, int distanceIndex1 = 1
		, FastNoiseReturnType returnType = FastNoiseReturnType::Index0, FNodeLink JitterModifier = FNodeLink()) {
		FString plan = "CellularDistance\n" + FString::FromInt((int)distanceFunction) + FString::FromInt(distanceIndex0) + FString::FromInt(distanceIndex1) + FString::FromInt((int)returnType) + "\n";
		if (JitterModifier.Node)
			plan += JitterModifier.Node->Flow;

		checkV(FCellularDistance);

		if (JitterModifier.Node)
			node->Node->SetJitterModifier(JitterModifier.Node->BaseNode);
		node->Node->SetDistanceFunction((FastNoise::DistanceFunction)distanceFunction);
		node->Node->SetDistanceIndex0(distanceIndex0);
		node->Node->SetDistanceIndex1(distanceIndex1);
		node->Node->SetReturnType((FastNoise::CellularDistance::ReturnType)returnType);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseCoherentNoise")
	FNodeLink CellularLookup(FastNoiseDistanceFunction distanceFunction = FastNoiseDistanceFunction::EuclideanSquared, UPARAM(ref) FNodeLink lookup = FNodeLink(), float lookupFrequency = 0.1
		, FNodeLink JitterModifier = FNodeLink()) {
		FString plan = "CellularLookup\n" + FString::FromInt((int)distanceFunction) + FString::SanitizeFloat(lookupFrequency) + "\n";
		plan += lookup.Node->Flow;
		if (JitterModifier.Node)
			plan += JitterModifier.Node->Flow;

		checkV(FCellularLookup);

		node->Node->SetLookup(lookup.Node->BaseNode);
		if (JitterModifier.Node)
			node->Node->SetJitterModifier(JitterModifier.Node->BaseNode);
		node->Node->SetDistanceFunction((FastNoise::DistanceFunction)distanceFunction);
		node->Node->SetLookupFrequency(lookupFrequency);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseCoherentNoise")
	FNodeLink CellularValue(FastNoiseDistanceFunction distanceFunction = FastNoiseDistanceFunction::EuclideanSquared, int valueIndex = 0
		, FNodeLink JitterModifier = FNodeLink()) {
		FString plan = "CellularValue\n" + FString::FromInt((int)distanceFunction) + FString::FromInt(valueIndex) + "\n";
		if (JitterModifier.Node)
			plan += JitterModifier.Node->Flow;

		checkV(FCellularValue);

		if (JitterModifier.Node)
			node->Node->SetJitterModifier(JitterModifier.Node->BaseNode);
		node->Node->SetDistanceFunction((FastNoise::DistanceFunction)distanceFunction);
		node->Node->SetValueIndex(valueIndex);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseCoherentNoise")
	FNodeLink OpenSimplex2() {
		FString plan = "OpenSimplex2\n";

		checkV(FOpenSimplex2);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseCoherentNoise")
	FNodeLink OpenSimplex2S() {
		FString plan = "OpenSimplex2S\n";

		checkV(FOpenSimplex2S);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseCoherentNoise")
	FNodeLink Perlin() {
		FString plan = "Perlin\n";

		checkV(FPerlin);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseCoherentNoise")
	FNodeLink Simplex() {
		FString plan = "Simplex\n";

		checkV(FSimplex);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseCoherentNoise")
	FNodeLink Value() {
		FString plan = "Value\n";

		checkV(FValue);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseDomainWarp")
	FNodeLink DomainWarpGradient(UPARAM(ref) FNodeLink source, float warpAmplitude = 1.0, float warpFrequency = 0.5) {
		FString plan = "DomainWarpGradient\n" + FString::SanitizeFloat(warpAmplitude) + FString::SanitizeFloat(warpFrequency) + "\n";
		plan += source.Node->Flow;

		checkV(FDomainWarpGradient);

		node->Node->SetSource(source.Node->BaseNode);
		node->Node->SetWarpAmplitude(warpAmplitude);
		node->Node->SetWarpFrequency(warpFrequency);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseFractal")
	FNodeLink FractalFBm(UPARAM(ref) FNodeLink domainWarpSource, FNodeLink gain, FNodeLink weightedStrength, int octaves = 3, float lacunarity = 2.0) {
		FString plan = "FractalFBm\n";
		plan += domainWarpSource.Node->Flow;
		if (gain.Node)
			plan += gain.Node->Flow;
		if (weightedStrength.Node)
			plan += weightedStrength.Node->Flow;

		checkV(FFractalFBm);

		node->Node->SetSource(domainWarpSource.Node->BaseNode);
		if (gain.Node)
			node->Node->SetGain(gain.Node->BaseNode);
		if (weightedStrength.Node)
			node->Node->SetWeightedStrength(weightedStrength.Node->BaseNode);
		node->Node->SetOctaveCount(octaves);
		node->Node->SetLacunarity(lacunarity);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseFractal")
	FNodeLink FractalPingPong(UPARAM(ref) FNodeLink domainWarpSource, FNodeLink gain, FNodeLink weightedStrength, FNodeLink pingPongStrength, int octaves = 3, float lacunarity = 2.0) {
		FString plan = "FractalPingPong\n" + FString::FromInt(octaves) + FString::SanitizeFloat(lacunarity) + "\n";
		plan += domainWarpSource.Node->Flow;
		if (gain.Node)
			plan += gain.Node->Flow;
		if (weightedStrength.Node)
			plan += weightedStrength.Node->Flow;
		if (pingPongStrength.Node)
			plan += pingPongStrength.Node->Flow;

		checkV(FFractalPingPong);

		node->Node->SetSource(domainWarpSource.Node->BaseNode);
		if (gain.Node)
			node->Node->SetGain(gain.Node->BaseNode);
		if (weightedStrength.Node)
			node->Node->SetWeightedStrength(weightedStrength.Node->BaseNode);
		if (pingPongStrength.Node)
			node->Node->SetPingPongStrength(pingPongStrength.Node->BaseNode);
		node->Node->SetOctaveCount(octaves);
		node->Node->SetLacunarity(lacunarity);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseFractal")
	FNodeLink FractalRidged(UPARAM(ref) FNodeLink domainWarpSource, FNodeLink gain, FNodeLink weightedStrength, int octaves = 3, float lacunarity = 2.0) {
		FString plan = "FractalRidged\n" + FString::FromInt(octaves) + FString::SanitizeFloat(lacunarity) + "\n";
		plan += domainWarpSource.Node->Flow;
		if (gain.Node)
			plan += gain.Node->Flow;
		if (weightedStrength.Node)
			plan += weightedStrength.Node->Flow;

		checkV(FFractalRidged);

		node->Node->SetSource(domainWarpSource.Node->BaseNode);
		if (gain.Node)
			node->Node->SetGain(gain.Node->BaseNode);
		if (weightedStrength.Node)
			node->Node->SetWeightedStrength(weightedStrength.Node->BaseNode);
		node->Node->SetOctaveCount(octaves);
		node->Node->SetLacunarity(lacunarity);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseModifiers")
	FNodeLink AddDimension(UPARAM(ref) FNodeLink source, FNodeLink newDimensionPosition) {
		FString plan = "AddDimension\n";
		plan += source.Node->Flow;
		if (newDimensionPosition.Node)
			plan += newDimensionPosition.Node->Flow;

		checkV(FAddDimension);

		node->Node->SetSource(source.Node->BaseNode);
		if (newDimensionPosition.Node)
			node->Node->SetNewDimensionPosition(newDimensionPosition.Node->BaseNode);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseModifiers")
	FNodeLink DomainAxisScale(UPARAM(ref) FNodeLink source, FVector scale = FVector(1)) {
		FString plan = "DomainAxisScale\n" + FString::SanitizeFloat(scale.X) + FString::SanitizeFloat(scale.Y) + FString::SanitizeFloat(scale.Z) + "\n";
		plan += source.Node->Flow;

		checkV(FDomainAxisScale);

		node->Node->SetSource(source.Node->BaseNode);
		node->Node->SetScale<FastNoise::Dim::X>(scale.X);
		node->Node->SetScale<FastNoise::Dim::Y>(scale.Y);
		node->Node->SetScale<FastNoise::Dim::Z>(scale.Z);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseModifiers")
	FNodeLink DomainOffset(UPARAM(ref) FNodeLink source, FNodeLink xOffset, FNodeLink yOffset, FNodeLink zOffset) {
		FString plan = "DomainOffset\n";
		plan += source.Node->Flow;
		if (xOffset.Node)
			plan += xOffset.Node->Flow;
		if (yOffset.Node)
			plan += yOffset.Node->Flow;
		if (zOffset.Node)
			plan += zOffset.Node->Flow;

		checkV(FDomainOffset);

		node->Node->SetSource(source.Node->BaseNode);
		if (xOffset.Node)
			node->Node->SetOffset<FastNoise::Dim::X>(xOffset.Node->BaseNode);
		if (yOffset.Node)
			node->Node->SetOffset<FastNoise::Dim::Y>(yOffset.Node->BaseNode);
		if (zOffset.Node)
			node->Node->SetOffset<FastNoise::Dim::Z>(zOffset.Node->BaseNode);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseModifiers")
	FNodeLink DomainRotate(UPARAM(ref) FNodeLink source, float yaw = 0, float pitch = 0, float roll = 0) {
		FString plan = "DomainRotate\n" + FString::SanitizeFloat(yaw) + FString::SanitizeFloat(pitch) + FString::SanitizeFloat(roll) + "\n";
		plan += source.Node->Flow;

		checkV(FDomainRotate);

		node->Node->SetSource(source.Node->BaseNode);
		node->Node->SetYaw(yaw);
		node->Node->SetPitch(pitch);
		node->Node->SetRoll(roll);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseModifiers")
	FNodeLink DomainScale(UPARAM(ref) FNodeLink source, float scale = 1) {
		FString plan = "DomainScale\n" + FString::SanitizeFloat(scale) + "\n";
		plan += source.Node->Flow;

		checkV(FDomainScale);

		node->Node->SetSource(source.Node->BaseNode);
		node->Node->SetScale(scale);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseModifiers")
	FNodeLink GeneratorCache(UPARAM(ref) FNodeLink source) {
		FString plan = "GeneratorCache\n";
		plan += source.Node->Flow;

		checkV(FGeneratorCache);

		node->Node->SetSource(source.Node->BaseNode);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseModifiers")
	FNodeLink Remap(UPARAM(ref) FNodeLink source, float fromMin = -1.0, float fromMax = 1.0, float toMin = 0.0, float toMax = 1.0) {
		FString plan = "Remap\n" + FString::SanitizeFloat(fromMin) + FString::SanitizeFloat(fromMax) + FString::SanitizeFloat(toMin) + FString::SanitizeFloat(toMax) + "\n";
		plan += source.Node->Flow;

		checkV(FRemap);

		node->Node->SetSource(source.Node->BaseNode);
		node->Node->SetRemap(fromMin, fromMax, toMin, toMax);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseModifiers")
	FNodeLink RemoveDimension(UPARAM(ref) FNodeLink source, FastNoiseDim removeDimension) {
		FString plan = "RemoveDimension\n" + FString::FromInt((int)removeDimension) + "\n";
		plan += source.Node->Flow;

		checkV(FRemoveDimension);

		node->Node->SetSource(source.Node->BaseNode);
		node->Node->SetRemoveDimension((FastNoise::Dim)removeDimension);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseModifiers")
	FNodeLink SeedOffset(UPARAM(ref) FNodeLink source, int seedOffset = 1) {
		FString plan = "SeedOffset\n" + FString::FromInt(seedOffset) + "\n";
		plan += source.Node->Flow;

		checkV(FSeedOffset);

		node->Node->SetSource(source.Node->BaseNode);
		node->Node->SetOffset(seedOffset);

		return nodeLink;
	}

	UFUNCTION(BlueprintPure, Category = "FastNoiseModifiers")
	FNodeLink Terrace(UPARAM(ref) FNodeLink source, float multiplier = 1.0, float smoothness = 0.0) {
		FString plan = "Terrace\n" + FString::SanitizeFloat(multiplier) + FString::SanitizeFloat(smoothness) + "\n";
		plan += source.Node->Flow;

		checkV(FTerrace);

		node->Node->SetSource(source.Node->BaseNode);
		node->Node->SetMultiplier(multiplier);
		node->Node->SetSmoothness(smoothness);

		return nodeLink;
	}





	//UFUNCTION(BlueprintPure, Category = "FastNoiseEditor")
	//FString GetEncodedNode(FNodeLink node) {
	//	auto nodePtr = (FNode*)node;
	//	auto* metadata = &nodePtr->BaseNode->GetMetadata();

	//	auto nodeData = FastNoise::NodeData(metadata);

	//	return FString(metadata->SerialiseNodeData(&nodeData).c_str());
	//}

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "FastNoiseEditor")
	FNodeLink GetNoiseRef(UObject* creator);
};