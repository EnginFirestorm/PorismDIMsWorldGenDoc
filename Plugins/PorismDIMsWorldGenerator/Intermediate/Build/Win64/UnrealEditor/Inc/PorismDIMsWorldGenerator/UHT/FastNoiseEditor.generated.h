// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FastNoiseEditor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class FastNoiseDim : uint8;
enum class FastNoiseDistanceFunction : uint8;
enum class FastNoiseReturnType : uint8;
struct FNodeLink;
#ifdef PORISMDIMSWORLDGENERATOR_FastNoiseEditor_generated_h
#error "FastNoiseEditor.generated.h already included, missing '#pragma once' in FastNoiseEditor.h"
#endif
#define PORISMDIMSWORLDGENERATOR_FastNoiseEditor_generated_h

#define FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_FastNoiseEditor_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNodeLink_Statics; \
	PORISMDIMSWORLDGENERATOR_API static class UScriptStruct* StaticStruct();


template<> PORISMDIMSWORLDGENERATOR_API UScriptStruct* StaticStruct<struct FNodeLink>();

#define FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_FastNoiseEditor_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTerrace); \
	DECLARE_FUNCTION(execSeedOffset); \
	DECLARE_FUNCTION(execRemoveDimension); \
	DECLARE_FUNCTION(execRemap); \
	DECLARE_FUNCTION(execGeneratorCache); \
	DECLARE_FUNCTION(execDomainScale); \
	DECLARE_FUNCTION(execDomainRotate); \
	DECLARE_FUNCTION(execDomainOffset); \
	DECLARE_FUNCTION(execDomainAxisScale); \
	DECLARE_FUNCTION(execAddDimension); \
	DECLARE_FUNCTION(execFractalRidged); \
	DECLARE_FUNCTION(execFractalPingPong); \
	DECLARE_FUNCTION(execFractalFBm); \
	DECLARE_FUNCTION(execDomainWarpGradient); \
	DECLARE_FUNCTION(execValue); \
	DECLARE_FUNCTION(execSimplex); \
	DECLARE_FUNCTION(execPerlin); \
	DECLARE_FUNCTION(execOpenSimplex2S); \
	DECLARE_FUNCTION(execOpenSimplex2); \
	DECLARE_FUNCTION(execCellularValue); \
	DECLARE_FUNCTION(execCellularLookup); \
	DECLARE_FUNCTION(execCellularDistance); \
	DECLARE_FUNCTION(execSubtractFloat); \
	DECLARE_FUNCTION(execSubtract); \
	DECLARE_FUNCTION(execPowInt); \
	DECLARE_FUNCTION(execPowFloatFloat); \
	DECLARE_FUNCTION(execPowFloat); \
	DECLARE_FUNCTION(execMultiplyFloat); \
	DECLARE_FUNCTION(execMultiply); \
	DECLARE_FUNCTION(execMinSmoothFloat); \
	DECLARE_FUNCTION(execMinSmooth); \
	DECLARE_FUNCTION(execMinFloat); \
	DECLARE_FUNCTION(execMin); \
	DECLARE_FUNCTION(execMaxSmoothFloat); \
	DECLARE_FUNCTION(execMaxSmooth); \
	DECLARE_FUNCTION(execMaxFloat); \
	DECLARE_FUNCTION(execMax); \
	DECLARE_FUNCTION(execFadeFloat); \
	DECLARE_FUNCTION(execFade); \
	DECLARE_FUNCTION(execDivideFloat); \
	DECLARE_FUNCTION(execDivide); \
	DECLARE_FUNCTION(execAddFloat); \
	DECLARE_FUNCTION(execAdd); \
	DECLARE_FUNCTION(execWhite); \
	DECLARE_FUNCTION(execSineWave); \
	DECLARE_FUNCTION(execPositionOutput); \
	DECLARE_FUNCTION(execDistanceToPoint); \
	DECLARE_FUNCTION(execConstant); \
	DECLARE_FUNCTION(execCheckerboard);


#define FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_FastNoiseEditor_h_32_CALLBACK_WRAPPERS
#define FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_FastNoiseEditor_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFastNoiseEditor(); \
	friend struct Z_Construct_UClass_UFastNoiseEditor_Statics; \
public: \
	DECLARE_CLASS(UFastNoiseEditor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PorismDIMsWorldGenerator"), NO_API) \
	DECLARE_SERIALIZER(UFastNoiseEditor)


#define FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_FastNoiseEditor_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFastNoiseEditor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFastNoiseEditor(UFastNoiseEditor&&); \
	UFastNoiseEditor(const UFastNoiseEditor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFastNoiseEditor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFastNoiseEditor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFastNoiseEditor) \
	NO_API virtual ~UFastNoiseEditor();


#define FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_FastNoiseEditor_h_29_PROLOG
#define FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_FastNoiseEditor_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_FastNoiseEditor_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_FastNoiseEditor_h_32_CALLBACK_WRAPPERS \
	FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_FastNoiseEditor_h_32_INCLASS_NO_PURE_DECLS \
	FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_FastNoiseEditor_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORISMDIMSWORLDGENERATOR_API UClass* StaticClass<class UFastNoiseEditor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_FastNoiseEditor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
