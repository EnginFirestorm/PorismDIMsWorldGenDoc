// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FastNoiseObjects.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PORISMDIMSWORLDGENERATOR_FastNoiseObjects_generated_h
#error "FastNoiseObjects.generated.h already included, missing '#pragma once' in FastNoiseObjects.h"
#endif
#define PORISMDIMSWORLDGENERATOR_FastNoiseObjects_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_FastNoiseObjects_h


#define FOREACH_ENUM_FASTNOISEDISTANCEFUNCTION(op) \
	op(FastNoiseDistanceFunction::Euclidean) \
	op(FastNoiseDistanceFunction::EuclideanSquared) \
	op(FastNoiseDistanceFunction::Manhattan) \
	op(FastNoiseDistanceFunction::Hybrid) \
	op(FastNoiseDistanceFunction::MaxAxis) 

enum class FastNoiseDistanceFunction : uint8;
template<> struct TIsUEnumClass<FastNoiseDistanceFunction> { enum { Value = true }; };
template<> PORISMDIMSWORLDGENERATOR_API UEnum* StaticEnum<FastNoiseDistanceFunction>();

#define FOREACH_ENUM_FASTNOISERETURNTYPE(op) \
	op(FastNoiseReturnType::Index0) \
	op(FastNoiseReturnType::Index0Add1) \
	op(FastNoiseReturnType::Index0Sub1) \
	op(FastNoiseReturnType::Index0Mul1) \
	op(FastNoiseReturnType::Index0Div1) 

enum class FastNoiseReturnType : uint8;
template<> struct TIsUEnumClass<FastNoiseReturnType> { enum { Value = true }; };
template<> PORISMDIMSWORLDGENERATOR_API UEnum* StaticEnum<FastNoiseReturnType>();

#define FOREACH_ENUM_FASTNOISEDIM(op) \
	op(FastNoiseDim::X) \
	op(FastNoiseDim::Y) \
	op(FastNoiseDim::Z) \
	op(FastNoiseDim::W) \
	op(FastNoiseDim::Count) 

enum class FastNoiseDim : uint8;
template<> struct TIsUEnumClass<FastNoiseDim> { enum { Value = true }; };
template<> PORISMDIMSWORLDGENERATOR_API UEnum* StaticEnum<FastNoiseDim>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
