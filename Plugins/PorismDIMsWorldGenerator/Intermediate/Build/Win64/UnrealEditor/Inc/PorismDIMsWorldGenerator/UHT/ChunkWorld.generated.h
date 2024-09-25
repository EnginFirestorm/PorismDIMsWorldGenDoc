// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChunkWorld.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UObject;
struct FChunkRef;
struct FChunkWorldHit;
struct FHitResult;
#ifdef PORISMDIMSWORLDGENERATOR_ChunkWorld_generated_h
#error "ChunkWorld.generated.h already included, missing '#pragma once' in ChunkWorld.h"
#endif
#define PORISMDIMSWORLDGENERATOR_ChunkWorld_generated_h

#define FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorld_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBlockValuesByChunkGridPosLevel); \
	DECLARE_FUNCTION(execSetBlockValuesByBlockWorldPos); \
	DECLARE_FUNCTION(execSetBlockValuesByBlockWorldPosAsync); \
	DECLARE_FUNCTION(execSetBlockValueByBlockWorldPos); \
	DECLARE_FUNCTION(execGetBlockValueByBlockWorldPosLevel); \
	DECLARE_FUNCTION(execGetBlockValueByBlockWorldPos); \
	DECLARE_FUNCTION(execGetChunkWorldHitByHitResult); \
	DECLARE_FUNCTION(execMaterialIndexToMaterial); \
	DECLARE_FUNCTION(execMaterialToMaterialIndex); \
	DECLARE_FUNCTION(execBlockChunkIndexToBlockChunkPos); \
	DECLARE_FUNCTION(execBlockChunkPosToBlockChunkIndex); \
	DECLARE_FUNCTION(execChunkGridPosToBlockWorldPos); \
	DECLARE_FUNCTION(execBlockWorldPosToChunkGridPos); \
	DECLARE_FUNCTION(execBlockChunkPosToBlockWorldPos); \
	DECLARE_FUNCTION(execBlockWorldPosToBlockChunkPos); \
	DECLARE_FUNCTION(execUEWorldPosToBlockWorldPos); \
	DECLARE_FUNCTION(execReadDebugStats); \
	DECLARE_FUNCTION(execDeleteSave); \
	DECLARE_FUNCTION(execDeleteCache); \
	DECLARE_FUNCTION(execStopGen); \
	DECLARE_FUNCTION(execStartGen); \
	DECLARE_FUNCTION(execSetChunkWorldWalkers); \
	DECLARE_FUNCTION(execRemoveChunkWorldWalker); \
	DECLARE_FUNCTION(execAddChunkWorldWalker); \
	DECLARE_FUNCTION(execGetChunkLayerCount); \
	DECLARE_FUNCTION(execIsRuning);


#define FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorld_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChunkWorld(); \
	friend struct Z_Construct_UClass_AChunkWorld_Statics; \
public: \
	DECLARE_CLASS(AChunkWorld, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PorismDIMsWorldGenerator"), NO_API) \
	DECLARE_SERIALIZER(AChunkWorld)


#define FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorld_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AChunkWorld(AChunkWorld&&); \
	AChunkWorld(const AChunkWorld&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChunkWorld); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChunkWorld); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChunkWorld) \
	NO_API virtual ~AChunkWorld();


#define FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorld_h_30_PROLOG
#define FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorld_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorld_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorld_h_33_INCLASS_NO_PURE_DECLS \
	FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorld_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORISMDIMSWORLDGENERATOR_API UClass* StaticClass<class AChunkWorld>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorld_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
