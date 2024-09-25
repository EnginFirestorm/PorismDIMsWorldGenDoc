// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChunkWorldWalker.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PORISMDIMSWORLDGENERATOR_ChunkWorldWalker_generated_h
#error "ChunkWorldWalker.generated.h already included, missing '#pragma once' in ChunkWorldWalker.h"
#endif
#define PORISMDIMSWORLDGENERATOR_ChunkWorldWalker_generated_h

#define FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldWalker_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TArray<double> GetViewDistanceMultiplier_Implementation() const { return TArray<double>(); }; \
	virtual FVector GetTracingVector_Implementation() const { return FVector(ForceInit); }; \
	virtual FVector GetTracingLocation_Implementation() const { return FVector(ForceInit); }; \
	DECLARE_FUNCTION(execGetViewDistanceMultiplier); \
	DECLARE_FUNCTION(execGetTracingVector); \
	DECLARE_FUNCTION(execGetTracingLocation);


#define FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldWalker_h_11_CALLBACK_WRAPPERS
#define FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldWalker_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PORISMDIMSWORLDGENERATOR_API UChunkWorldWalker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChunkWorldWalker(UChunkWorldWalker&&); \
	UChunkWorldWalker(const UChunkWorldWalker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PORISMDIMSWORLDGENERATOR_API, UChunkWorldWalker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChunkWorldWalker); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChunkWorldWalker) \
	PORISMDIMSWORLDGENERATOR_API virtual ~UChunkWorldWalker();


#define FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldWalker_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUChunkWorldWalker(); \
	friend struct Z_Construct_UClass_UChunkWorldWalker_Statics; \
public: \
	DECLARE_CLASS(UChunkWorldWalker, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PorismDIMsWorldGenerator"), PORISMDIMSWORLDGENERATOR_API) \
	DECLARE_SERIALIZER(UChunkWorldWalker)


#define FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldWalker_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldWalker_h_11_GENERATED_UINTERFACE_BODY() \
	FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldWalker_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldWalker_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IChunkWorldWalker() {} \
public: \
	typedef UChunkWorldWalker UClassType; \
	typedef IChunkWorldWalker ThisClass; \
	static FVector Execute_GetTracingLocation(const UObject* O); \
	static FVector Execute_GetTracingVector(const UObject* O); \
	static TArray<double> Execute_GetViewDistanceMultiplier(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldWalker_h_8_PROLOG
#define FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldWalker_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldWalker_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldWalker_h_11_CALLBACK_WRAPPERS \
	FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldWalker_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORISMDIMSWORLDGENERATOR_API UClass* StaticClass<class UChunkWorldWalker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldWalker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
