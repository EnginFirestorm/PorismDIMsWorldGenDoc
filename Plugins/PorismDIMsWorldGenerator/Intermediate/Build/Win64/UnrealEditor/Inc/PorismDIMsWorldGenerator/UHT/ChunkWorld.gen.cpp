// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PorismDIMsWorldGenerator/Public/ChunkWorld.h"
#include "PorismDIMsWorldGenerator/Public/ChunkWorldStructs.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunkWorld() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PORISMDIMSWORLDGENERATOR_API UClass* Z_Construct_UClass_AChunkWorld();
PORISMDIMSWORLDGENERATOR_API UClass* Z_Construct_UClass_AChunkWorld_NoRegister();
PORISMDIMSWORLDGENERATOR_API UClass* Z_Construct_UClass_UChunkBase_NoRegister();
PORISMDIMSWORLDGENERATOR_API UClass* Z_Construct_UClass_UWorldGenDef_NoRegister();
PORISMDIMSWORLDGENERATOR_API UScriptStruct* Z_Construct_UScriptStruct_FChunkRef();
PORISMDIMSWORLDGENERATOR_API UScriptStruct* Z_Construct_UScriptStruct_FChunkWorldHit();
UPackage* Z_Construct_UPackage__Script_PorismDIMsWorldGenerator();
// End Cross Module References

// Begin Class AChunkWorld Function AddChunkWorldWalker
struct Z_Construct_UFunction_AChunkWorld_AddChunkWorldWalker_Statics
{
	struct ChunkWorld_eventAddChunkWorldWalker_Parms
	{
		UObject* newWorldLoader;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldGen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds another object to the generator, which is used as the position basis for calculating the surface */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds another object to the generator, which is used as the position basis for calculating the surface" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_newWorldLoader;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChunkWorld_AddChunkWorldWalker_Statics::NewProp_newWorldLoader = { "newWorldLoader", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventAddChunkWorldWalker_Parms, newWorldLoader), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkWorld_AddChunkWorldWalker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_AddChunkWorldWalker_Statics::NewProp_newWorldLoader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_AddChunkWorldWalker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_AddChunkWorldWalker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "AddChunkWorldWalker", nullptr, nullptr, Z_Construct_UFunction_AChunkWorld_AddChunkWorldWalker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_AddChunkWorldWalker_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkWorld_AddChunkWorldWalker_Statics::ChunkWorld_eventAddChunkWorldWalker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_AddChunkWorldWalker_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_AddChunkWorldWalker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChunkWorld_AddChunkWorldWalker_Statics::ChunkWorld_eventAddChunkWorldWalker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChunkWorld_AddChunkWorldWalker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_AddChunkWorldWalker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execAddChunkWorldWalker)
{
	P_GET_OBJECT(UObject,Z_Param_newWorldLoader);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddChunkWorldWalker(Z_Param_newWorldLoader);
	P_NATIVE_END;
}
// End Class AChunkWorld Function AddChunkWorldWalker

// Begin Class AChunkWorld Function BlockChunkIndexToBlockChunkPos
struct Z_Construct_UFunction_AChunkWorld_BlockChunkIndexToBlockChunkPos_Statics
{
	struct ChunkWorld_eventBlockChunkIndexToBlockChunkPos_Parms
	{
		int32 blockChunkIndex;
		int32 detailLevel;
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldTeraform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* With this function you may get the vector of a block index in the Chunk\n\x09* @param blockChunkIndex The index of the vector in the block buffer\n\x09* @param detailLevel The detail level of the block. I don't remember. \"WorldGenDefType\" -> \"WorldChunksDT\" -> \"FChunkDataParams\" the highest number is the smallest size\n\x09* @return The vector of the block index in the chunk\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "With this function you may get the vector of a block index in the Chunk\n@param blockChunkIndex The index of the vector in the block buffer\n@param detailLevel The detail level of the block. I don't remember. \"WorldGenDefType\" -> \"WorldChunksDT\" -> \"FChunkDataParams\" the highest number is the smallest size\n@return The vector of the block index in the chunk" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_blockChunkIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_detailLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_blockChunkIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_detailLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkWorld_BlockChunkIndexToBlockChunkPos_Statics::NewProp_blockChunkIndex = { "blockChunkIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventBlockChunkIndexToBlockChunkPos_Parms, blockChunkIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_blockChunkIndex_MetaData), NewProp_blockChunkIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkWorld_BlockChunkIndexToBlockChunkPos_Statics::NewProp_detailLevel = { "detailLevel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventBlockChunkIndexToBlockChunkPos_Parms, detailLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_detailLevel_MetaData), NewProp_detailLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkWorld_BlockChunkIndexToBlockChunkPos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventBlockChunkIndexToBlockChunkPos_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkWorld_BlockChunkIndexToBlockChunkPos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_BlockChunkIndexToBlockChunkPos_Statics::NewProp_blockChunkIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_BlockChunkIndexToBlockChunkPos_Statics::NewProp_detailLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_BlockChunkIndexToBlockChunkPos_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_BlockChunkIndexToBlockChunkPos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_BlockChunkIndexToBlockChunkPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "BlockChunkIndexToBlockChunkPos", nullptr, nullptr, Z_Construct_UFunction_AChunkWorld_BlockChunkIndexToBlockChunkPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_BlockChunkIndexToBlockChunkPos_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkWorld_BlockChunkIndexToBlockChunkPos_Statics::ChunkWorld_eventBlockChunkIndexToBlockChunkPos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_BlockChunkIndexToBlockChunkPos_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_BlockChunkIndexToBlockChunkPos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChunkWorld_BlockChunkIndexToBlockChunkPos_Statics::ChunkWorld_eventBlockChunkIndexToBlockChunkPos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChunkWorld_BlockChunkIndexToBlockChunkPos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_BlockChunkIndexToBlockChunkPos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execBlockChunkIndexToBlockChunkPos)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_blockChunkIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_detailLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=P_THIS->BlockChunkIndexToBlockChunkPos(Z_Param_blockChunkIndex,Z_Param_detailLevel);
	P_NATIVE_END;
}
// End Class AChunkWorld Function BlockChunkIndexToBlockChunkPos

// Begin Class AChunkWorld Function BlockChunkPosToBlockChunkIndex
struct Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockChunkIndex_Statics
{
	struct ChunkWorld_eventBlockChunkPosToBlockChunkIndex_Parms
	{
		FIntVector blockChunkPos;
		int32 detailLevel;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldTeraform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* With this function you get the index of a vector in the block buffer. You will need it for background tasks\n\x09* @param blockChunkPos A vector in the chunk\n\x09* @param detailLevel The detail level of the block. Do you remember? \"WorldGenDefType\" -> \"WorldChunksDT\" -> \"FChunkDataParams\" the highest number is the smallest size\n\x09* @return The index of the vector in the block buffer (works for cache an save data)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "With this function you get the index of a vector in the block buffer. You will need it for background tasks\n@param blockChunkPos A vector in the chunk\n@param detailLevel The detail level of the block. Do you remember? \"WorldGenDefType\" -> \"WorldChunksDT\" -> \"FChunkDataParams\" the highest number is the smallest size\n@return The index of the vector in the block buffer (works for cache an save data)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_blockChunkPos_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_detailLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_blockChunkPos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_detailLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockChunkIndex_Statics::NewProp_blockChunkPos = { "blockChunkPos", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventBlockChunkPosToBlockChunkIndex_Parms, blockChunkPos), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_blockChunkPos_MetaData), NewProp_blockChunkPos_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockChunkIndex_Statics::NewProp_detailLevel = { "detailLevel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventBlockChunkPosToBlockChunkIndex_Parms, detailLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_detailLevel_MetaData), NewProp_detailLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockChunkIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventBlockChunkPosToBlockChunkIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockChunkIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockChunkIndex_Statics::NewProp_blockChunkPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockChunkIndex_Statics::NewProp_detailLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockChunkIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockChunkIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockChunkIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "BlockChunkPosToBlockChunkIndex", nullptr, nullptr, Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockChunkIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockChunkIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockChunkIndex_Statics::ChunkWorld_eventBlockChunkPosToBlockChunkIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockChunkIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockChunkIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockChunkIndex_Statics::ChunkWorld_eventBlockChunkPosToBlockChunkIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockChunkIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockChunkIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execBlockChunkPosToBlockChunkIndex)
{
	P_GET_STRUCT(FIntVector,Z_Param_blockChunkPos);
	P_GET_PROPERTY(FIntProperty,Z_Param_detailLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->BlockChunkPosToBlockChunkIndex(Z_Param_blockChunkPos,Z_Param_detailLevel);
	P_NATIVE_END;
}
// End Class AChunkWorld Function BlockChunkPosToBlockChunkIndex

// Begin Class AChunkWorld Function BlockChunkPosToBlockWorldPos
struct Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockWorldPos_Statics
{
	struct ChunkWorld_eventBlockChunkPosToBlockWorldPos_Parms
	{
		FIntVector blockChunkPos;
		FChunkRef chunk;
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldTeraform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gives the world pos of a block in the Chunk\n\x09* @param blockChunkPos The pos of the block in the Chunk\n\x09* @param chunk The Chunk in which the block is located\n\x09* @return The block world pos\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gives the world pos of a block in the Chunk\n@param blockChunkPos The pos of the block in the Chunk\n@param chunk The Chunk in which the block is located\n@return The block world pos" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_blockChunkPos_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_chunk_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_blockChunkPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_chunk;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockWorldPos_Statics::NewProp_blockChunkPos = { "blockChunkPos", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventBlockChunkPosToBlockWorldPos_Parms, blockChunkPos), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_blockChunkPos_MetaData), NewProp_blockChunkPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockWorldPos_Statics::NewProp_chunk = { "chunk", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventBlockChunkPosToBlockWorldPos_Parms, chunk), Z_Construct_UScriptStruct_FChunkRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_chunk_MetaData), NewProp_chunk_MetaData) }; // 2638181845
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockWorldPos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventBlockChunkPosToBlockWorldPos_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockWorldPos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockWorldPos_Statics::NewProp_blockChunkPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockWorldPos_Statics::NewProp_chunk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockWorldPos_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockWorldPos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockWorldPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "BlockChunkPosToBlockWorldPos", nullptr, nullptr, Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockWorldPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockWorldPos_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockWorldPos_Statics::ChunkWorld_eventBlockChunkPosToBlockWorldPos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockWorldPos_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockWorldPos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockWorldPos_Statics::ChunkWorld_eventBlockChunkPosToBlockWorldPos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockWorldPos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockWorldPos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execBlockChunkPosToBlockWorldPos)
{
	P_GET_STRUCT(FIntVector,Z_Param_blockChunkPos);
	P_GET_STRUCT(FChunkRef,Z_Param_chunk);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=P_THIS->BlockChunkPosToBlockWorldPos(Z_Param_blockChunkPos,Z_Param_chunk);
	P_NATIVE_END;
}
// End Class AChunkWorld Function BlockChunkPosToBlockWorldPos

// Begin Class AChunkWorld Function BlockWorldPosToBlockChunkPos
struct Z_Construct_UFunction_AChunkWorld_BlockWorldPosToBlockChunkPos_Statics
{
	struct ChunkWorld_eventBlockWorldPosToBlockChunkPos_Parms
	{
		FIntVector blockWorldPos;
		int32 detailLevel;
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldTeraform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* You will need the local pos of the block in order to change the save data\n\x09* @param blockWorldPos The pos of the block in the world\n\x09* @param detailLevel The detail level of the block. Remember, \"WorldGenDefType\" -> \"WorldChunksDT\" -> \"FChunkDataParams\" the highest number is the smallest size\n\x09* @return The block chunk pos relative to the detail level\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "You will need the local pos of the block in order to change the save data\n@param blockWorldPos The pos of the block in the world\n@param detailLevel The detail level of the block. Remember, \"WorldGenDefType\" -> \"WorldChunksDT\" -> \"FChunkDataParams\" the highest number is the smallest size\n@return The block chunk pos relative to the detail level" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_blockWorldPos_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_detailLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_blockWorldPos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_detailLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkWorld_BlockWorldPosToBlockChunkPos_Statics::NewProp_blockWorldPos = { "blockWorldPos", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventBlockWorldPosToBlockChunkPos_Parms, blockWorldPos), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_blockWorldPos_MetaData), NewProp_blockWorldPos_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkWorld_BlockWorldPosToBlockChunkPos_Statics::NewProp_detailLevel = { "detailLevel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventBlockWorldPosToBlockChunkPos_Parms, detailLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_detailLevel_MetaData), NewProp_detailLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkWorld_BlockWorldPosToBlockChunkPos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventBlockWorldPosToBlockChunkPos_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkWorld_BlockWorldPosToBlockChunkPos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_BlockWorldPosToBlockChunkPos_Statics::NewProp_blockWorldPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_BlockWorldPosToBlockChunkPos_Statics::NewProp_detailLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_BlockWorldPosToBlockChunkPos_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_BlockWorldPosToBlockChunkPos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_BlockWorldPosToBlockChunkPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "BlockWorldPosToBlockChunkPos", nullptr, nullptr, Z_Construct_UFunction_AChunkWorld_BlockWorldPosToBlockChunkPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_BlockWorldPosToBlockChunkPos_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkWorld_BlockWorldPosToBlockChunkPos_Statics::ChunkWorld_eventBlockWorldPosToBlockChunkPos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_BlockWorldPosToBlockChunkPos_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_BlockWorldPosToBlockChunkPos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChunkWorld_BlockWorldPosToBlockChunkPos_Statics::ChunkWorld_eventBlockWorldPosToBlockChunkPos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChunkWorld_BlockWorldPosToBlockChunkPos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_BlockWorldPosToBlockChunkPos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execBlockWorldPosToBlockChunkPos)
{
	P_GET_STRUCT(FIntVector,Z_Param_blockWorldPos);
	P_GET_PROPERTY(FIntProperty,Z_Param_detailLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=P_THIS->BlockWorldPosToBlockChunkPos(Z_Param_blockWorldPos,Z_Param_detailLevel);
	P_NATIVE_END;
}
// End Class AChunkWorld Function BlockWorldPosToBlockChunkPos

// Begin Class AChunkWorld Function BlockWorldPosToChunkGridPos
struct Z_Construct_UFunction_AChunkWorld_BlockWorldPosToChunkGridPos_Statics
{
	struct ChunkWorld_eventBlockWorldPosToChunkGridPos_Parms
	{
		FIntVector blockWorldPos;
		int32 detailLevel;
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldTeraform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* With this function you can get the position of the Chunk. It is needed to work with the save data\n\x09* @param blockWorldPos The pos of the block in the world\n\x09* @param detailLevel The detail level of the block. Remember, \"WorldGenDefType\" -> \"WorldChunksDT\" -> \"FChunkDataParams\" the highest number is the smallest size\n\x09* @return The Chunk pos in Chunk codinates\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "With this function you can get the position of the Chunk. It is needed to work with the save data\n@param blockWorldPos The pos of the block in the world\n@param detailLevel The detail level of the block. Remember, \"WorldGenDefType\" -> \"WorldChunksDT\" -> \"FChunkDataParams\" the highest number is the smallest size\n@return The Chunk pos in Chunk codinates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_blockWorldPos_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_detailLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_blockWorldPos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_detailLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkWorld_BlockWorldPosToChunkGridPos_Statics::NewProp_blockWorldPos = { "blockWorldPos", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventBlockWorldPosToChunkGridPos_Parms, blockWorldPos), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_blockWorldPos_MetaData), NewProp_blockWorldPos_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkWorld_BlockWorldPosToChunkGridPos_Statics::NewProp_detailLevel = { "detailLevel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventBlockWorldPosToChunkGridPos_Parms, detailLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_detailLevel_MetaData), NewProp_detailLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkWorld_BlockWorldPosToChunkGridPos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventBlockWorldPosToChunkGridPos_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkWorld_BlockWorldPosToChunkGridPos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_BlockWorldPosToChunkGridPos_Statics::NewProp_blockWorldPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_BlockWorldPosToChunkGridPos_Statics::NewProp_detailLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_BlockWorldPosToChunkGridPos_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_BlockWorldPosToChunkGridPos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_BlockWorldPosToChunkGridPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "BlockWorldPosToChunkGridPos", nullptr, nullptr, Z_Construct_UFunction_AChunkWorld_BlockWorldPosToChunkGridPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_BlockWorldPosToChunkGridPos_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkWorld_BlockWorldPosToChunkGridPos_Statics::ChunkWorld_eventBlockWorldPosToChunkGridPos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_BlockWorldPosToChunkGridPos_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_BlockWorldPosToChunkGridPos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChunkWorld_BlockWorldPosToChunkGridPos_Statics::ChunkWorld_eventBlockWorldPosToChunkGridPos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChunkWorld_BlockWorldPosToChunkGridPos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_BlockWorldPosToChunkGridPos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execBlockWorldPosToChunkGridPos)
{
	P_GET_STRUCT(FIntVector,Z_Param_blockWorldPos);
	P_GET_PROPERTY(FIntProperty,Z_Param_detailLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=P_THIS->BlockWorldPosToChunkGridPos(Z_Param_blockWorldPos,Z_Param_detailLevel);
	P_NATIVE_END;
}
// End Class AChunkWorld Function BlockWorldPosToChunkGridPos

// Begin Class AChunkWorld Function ChunkGridPosToBlockWorldPos
struct Z_Construct_UFunction_AChunkWorld_ChunkGridPosToBlockWorldPos_Statics
{
	struct ChunkWorld_eventChunkGridPosToBlockWorldPos_Parms
	{
		FIntVector chunkGridPos;
		int32 detailLevel;
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldTeraform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* With this function you can get the position of the Chunk. It is needed to work with the save data\n\x09* @param chunkGridPos the Chunk pos in Chunk coordinates\n\x09* @param detailLevel The detail level of the block. Remember, \"WorldGenDefType\" -> \"WorldChunksDT\" -> \"FChunkDataParams\" the highest number is the smallest size\n\x09* @return The pos of the first Chunk block in the world\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "With this function you can get the position of the Chunk. It is needed to work with the save data\n@param chunkGridPos the Chunk pos in Chunk coordinates\n@param detailLevel The detail level of the block. Remember, \"WorldGenDefType\" -> \"WorldChunksDT\" -> \"FChunkDataParams\" the highest number is the smallest size\n@return The pos of the first Chunk block in the world" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_chunkGridPos_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_detailLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_chunkGridPos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_detailLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkWorld_ChunkGridPosToBlockWorldPos_Statics::NewProp_chunkGridPos = { "chunkGridPos", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventChunkGridPosToBlockWorldPos_Parms, chunkGridPos), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_chunkGridPos_MetaData), NewProp_chunkGridPos_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkWorld_ChunkGridPosToBlockWorldPos_Statics::NewProp_detailLevel = { "detailLevel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventChunkGridPosToBlockWorldPos_Parms, detailLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_detailLevel_MetaData), NewProp_detailLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkWorld_ChunkGridPosToBlockWorldPos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventChunkGridPosToBlockWorldPos_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkWorld_ChunkGridPosToBlockWorldPos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_ChunkGridPosToBlockWorldPos_Statics::NewProp_chunkGridPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_ChunkGridPosToBlockWorldPos_Statics::NewProp_detailLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_ChunkGridPosToBlockWorldPos_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_ChunkGridPosToBlockWorldPos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_ChunkGridPosToBlockWorldPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "ChunkGridPosToBlockWorldPos", nullptr, nullptr, Z_Construct_UFunction_AChunkWorld_ChunkGridPosToBlockWorldPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_ChunkGridPosToBlockWorldPos_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkWorld_ChunkGridPosToBlockWorldPos_Statics::ChunkWorld_eventChunkGridPosToBlockWorldPos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_ChunkGridPosToBlockWorldPos_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_ChunkGridPosToBlockWorldPos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChunkWorld_ChunkGridPosToBlockWorldPos_Statics::ChunkWorld_eventChunkGridPosToBlockWorldPos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChunkWorld_ChunkGridPosToBlockWorldPos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_ChunkGridPosToBlockWorldPos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execChunkGridPosToBlockWorldPos)
{
	P_GET_STRUCT(FIntVector,Z_Param_chunkGridPos);
	P_GET_PROPERTY(FIntProperty,Z_Param_detailLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=P_THIS->ChunkGridPosToBlockWorldPos(Z_Param_chunkGridPos,Z_Param_detailLevel);
	P_NATIVE_END;
}
// End Class AChunkWorld Function ChunkGridPosToBlockWorldPos

// Begin Class AChunkWorld Function DeleteCache
struct Z_Construct_UFunction_AChunkWorld_DeleteCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldCache" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Will immediately delete all cache files of the generator target location when executed (the ram is remaining).\n\x09Should also work in live mode, but be use it with caution, as the file system may have a problem with it **/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will immediately delete all cache files of the generator target location when executed (the ram is remaining).\n      Should also work in live mode, but be use it with caution, as the file system may have a problem with it *" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_DeleteCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "DeleteCache", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_DeleteCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_DeleteCache_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AChunkWorld_DeleteCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_DeleteCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execDeleteCache)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteCache();
	P_NATIVE_END;
}
// End Class AChunkWorld Function DeleteCache

// Begin Class AChunkWorld Function DeleteSave
struct Z_Construct_UFunction_AChunkWorld_DeleteSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldCache" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Will immediately delete all save files of the generator target location when executed (the ram is remaining).\n\x09Should also work in live mode, but use it with caution, as the file system may have a problem with it **/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will immediately delete all save files of the generator target location when executed (the ram is remaining).\n      Should also work in live mode, but use it with caution, as the file system may have a problem with it *" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_DeleteSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "DeleteSave", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_DeleteSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_DeleteSave_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AChunkWorld_DeleteSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_DeleteSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execDeleteSave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteSave();
	P_NATIVE_END;
}
// End Class AChunkWorld Function DeleteSave

// Begin Class AChunkWorld Function GetBlockValueByBlockWorldPos
struct Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPos_Statics
{
	struct ChunkWorld_eventGetBlockValueByBlockWorldPos_Parms
	{
		FIntVector blockWorldPos;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldTeraform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the block value from the blockWorldPos of the highest detail level\n\x09* @param blockWorldPos The pos of the block in the world\n\x09* @return The value of the block. Usely a materialIndex if not negative, 0 if the chunk is not generated\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the block value from the blockWorldPos of the highest detail level\n@param blockWorldPos The pos of the block in the world\n@return The value of the block. Usely a materialIndex if not negative, 0 if the chunk is not generated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_blockWorldPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_blockWorldPos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPos_Statics::NewProp_blockWorldPos = { "blockWorldPos", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventGetBlockValueByBlockWorldPos_Parms, blockWorldPos), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_blockWorldPos_MetaData), NewProp_blockWorldPos_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventGetBlockValueByBlockWorldPos_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPos_Statics::NewProp_blockWorldPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPos_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "GetBlockValueByBlockWorldPos", nullptr, nullptr, Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPos_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPos_Statics::ChunkWorld_eventGetBlockValueByBlockWorldPos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPos_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPos_Statics::ChunkWorld_eventGetBlockValueByBlockWorldPos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execGetBlockValueByBlockWorldPos)
{
	P_GET_STRUCT(FIntVector,Z_Param_blockWorldPos);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetBlockValueByBlockWorldPos(Z_Param_blockWorldPos);
	P_NATIVE_END;
}
// End Class AChunkWorld Function GetBlockValueByBlockWorldPos

// Begin Class AChunkWorld Function GetBlockValueByBlockWorldPosLevel
struct Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPosLevel_Statics
{
	struct ChunkWorld_eventGetBlockValueByBlockWorldPosLevel_Parms
	{
		FIntVector blockWorldPos;
		int32 detailLevel;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldTeraform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the block value from the blockWorldPos of the written detail level\n\x09* @param blockWorldPos The pos of the block in the world\n\x09* @param detailLevel The level of detail you want to check\n\x09* @return The value of the block. Usely a materialIndex if not negative, 0 if the chunk is not generated\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the block value from the blockWorldPos of the written detail level\n@param blockWorldPos The pos of the block in the world\n@param detailLevel The level of detail you want to check\n@return The value of the block. Usely a materialIndex if not negative, 0 if the chunk is not generated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_blockWorldPos_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_detailLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_blockWorldPos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_detailLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPosLevel_Statics::NewProp_blockWorldPos = { "blockWorldPos", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventGetBlockValueByBlockWorldPosLevel_Parms, blockWorldPos), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_blockWorldPos_MetaData), NewProp_blockWorldPos_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPosLevel_Statics::NewProp_detailLevel = { "detailLevel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventGetBlockValueByBlockWorldPosLevel_Parms, detailLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_detailLevel_MetaData), NewProp_detailLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPosLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventGetBlockValueByBlockWorldPosLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPosLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPosLevel_Statics::NewProp_blockWorldPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPosLevel_Statics::NewProp_detailLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPosLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPosLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPosLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "GetBlockValueByBlockWorldPosLevel", nullptr, nullptr, Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPosLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPosLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPosLevel_Statics::ChunkWorld_eventGetBlockValueByBlockWorldPosLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPosLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPosLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPosLevel_Statics::ChunkWorld_eventGetBlockValueByBlockWorldPosLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPosLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPosLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execGetBlockValueByBlockWorldPosLevel)
{
	P_GET_STRUCT(FIntVector,Z_Param_blockWorldPos);
	P_GET_PROPERTY(FIntProperty,Z_Param_detailLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetBlockValueByBlockWorldPosLevel(Z_Param_blockWorldPos,Z_Param_detailLevel);
	P_NATIVE_END;
}
// End Class AChunkWorld Function GetBlockValueByBlockWorldPosLevel

// Begin Class AChunkWorld Function GetBlockValuesByChunkGridPosLevel
struct Z_Construct_UFunction_AChunkWorld_GetBlockValuesByChunkGridPosLevel_Statics
{
	struct ChunkWorld_eventGetBlockValuesByChunkGridPosLevel_Parms
	{
		FIntVector ChunkGridPos;
		int32 detailLevel;
		bool found;
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldTeraform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets all block values from the Chunk\n\x09* @param blockWorldPos The pos of the block in the world\n\x09* @param detailLevel The level of detail you want to check\n\x09* @param found Will be set to false if the Chunk is not generated\n\x09* @return The values of the Chunk as a TArray<int> with the size of the Chunk. Caution! This also contains the border blocks, so please expect not e.g. 32x32x32 but 34x34x34.\n\x09Use BlockChunkPosToBlockChunkIndex to search for the right index\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all block values from the Chunk\n@param blockWorldPos The pos of the block in the world\n@param detailLevel The level of detail you want to check\n@param found Will be set to false if the Chunk is not generated\n@return The values of the Chunk as a TArray<int> with the size of the Chunk. Caution! This also contains the border blocks, so please expect not e.g. 32x32x32 but 34x34x34.\n       Use BlockChunkPosToBlockChunkIndex to search for the right index" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkGridPos_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_detailLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkGridPos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_detailLevel;
	static void NewProp_found_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_found;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkWorld_GetBlockValuesByChunkGridPosLevel_Statics::NewProp_ChunkGridPos = { "ChunkGridPos", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventGetBlockValuesByChunkGridPosLevel_Parms, ChunkGridPos), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkGridPos_MetaData), NewProp_ChunkGridPos_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkWorld_GetBlockValuesByChunkGridPosLevel_Statics::NewProp_detailLevel = { "detailLevel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventGetBlockValuesByChunkGridPosLevel_Parms, detailLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_detailLevel_MetaData), NewProp_detailLevel_MetaData) };
void Z_Construct_UFunction_AChunkWorld_GetBlockValuesByChunkGridPosLevel_Statics::NewProp_found_SetBit(void* Obj)
{
	((ChunkWorld_eventGetBlockValuesByChunkGridPosLevel_Parms*)Obj)->found = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChunkWorld_GetBlockValuesByChunkGridPosLevel_Statics::NewProp_found = { "found", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChunkWorld_eventGetBlockValuesByChunkGridPosLevel_Parms), &Z_Construct_UFunction_AChunkWorld_GetBlockValuesByChunkGridPosLevel_Statics::NewProp_found_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkWorld_GetBlockValuesByChunkGridPosLevel_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AChunkWorld_GetBlockValuesByChunkGridPosLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventGetBlockValuesByChunkGridPosLevel_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkWorld_GetBlockValuesByChunkGridPosLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_GetBlockValuesByChunkGridPosLevel_Statics::NewProp_ChunkGridPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_GetBlockValuesByChunkGridPosLevel_Statics::NewProp_detailLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_GetBlockValuesByChunkGridPosLevel_Statics::NewProp_found,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_GetBlockValuesByChunkGridPosLevel_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_GetBlockValuesByChunkGridPosLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_GetBlockValuesByChunkGridPosLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_GetBlockValuesByChunkGridPosLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "GetBlockValuesByChunkGridPosLevel", nullptr, nullptr, Z_Construct_UFunction_AChunkWorld_GetBlockValuesByChunkGridPosLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_GetBlockValuesByChunkGridPosLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkWorld_GetBlockValuesByChunkGridPosLevel_Statics::ChunkWorld_eventGetBlockValuesByChunkGridPosLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_GetBlockValuesByChunkGridPosLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_GetBlockValuesByChunkGridPosLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChunkWorld_GetBlockValuesByChunkGridPosLevel_Statics::ChunkWorld_eventGetBlockValuesByChunkGridPosLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChunkWorld_GetBlockValuesByChunkGridPosLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_GetBlockValuesByChunkGridPosLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execGetBlockValuesByChunkGridPosLevel)
{
	P_GET_STRUCT(FIntVector,Z_Param_ChunkGridPos);
	P_GET_PROPERTY(FIntProperty,Z_Param_detailLevel);
	P_GET_UBOOL_REF(Z_Param_Out_found);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=P_THIS->GetBlockValuesByChunkGridPosLevel(Z_Param_ChunkGridPos,Z_Param_detailLevel,Z_Param_Out_found);
	P_NATIVE_END;
}
// End Class AChunkWorld Function GetBlockValuesByChunkGridPosLevel

// Begin Class AChunkWorld Function GetChunkLayerCount
struct Z_Construct_UFunction_AChunkWorld_GetChunkLayerCount_Statics
{
	struct ChunkWorld_eventGetChunkLayerCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldGen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** To request the number of detail layers/LOD levels of the chunks. The returned value corresponds to the number of entries in\n\x09WorldGenDefType -> WorldChunksDT that you have stored. Caution! Please use the function only if the generator is already running */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To request the number of detail layers/LOD levels of the chunks. The returned value corresponds to the number of entries in\n      WorldGenDefType -> WorldChunksDT that you have stored. Caution! Please use the function only if the generator is already running" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkWorld_GetChunkLayerCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventGetChunkLayerCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkWorld_GetChunkLayerCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_GetChunkLayerCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_GetChunkLayerCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_GetChunkLayerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "GetChunkLayerCount", nullptr, nullptr, Z_Construct_UFunction_AChunkWorld_GetChunkLayerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_GetChunkLayerCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkWorld_GetChunkLayerCount_Statics::ChunkWorld_eventGetChunkLayerCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_GetChunkLayerCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_GetChunkLayerCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChunkWorld_GetChunkLayerCount_Statics::ChunkWorld_eventGetChunkLayerCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChunkWorld_GetChunkLayerCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_GetChunkLayerCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execGetChunkLayerCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetChunkLayerCount();
	P_NATIVE_END;
}
// End Class AChunkWorld Function GetChunkLayerCount

// Begin Class AChunkWorld Function GetChunkWorldHitByHitResult
struct Z_Construct_UFunction_AChunkWorld_GetChunkWorldHitByHitResult_Statics
{
	struct ChunkWorld_eventGetChunkWorldHitByHitResult_Parms
	{
		FHitResult hit;
		bool useLocation;
		FChunkWorldHit ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldTeraform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* If you have a HitResult from this chunkWorld, you can use the retunr of this function to terraform it. Please remember that some renderers may make precise teraforming impossible (e.g. index optimization)\n\x09* @param hit The hit to check\n\x09* @param useLocation This option is mandatory if you have the IndexBuffer optimized. However, it does not work well if the vertex has offsets\n\x09* @return A hit report with all the information you need\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If you have a HitResult from this chunkWorld, you can use the retunr of this function to terraform it. Please remember that some renderers may make precise teraforming impossible (e.g. index optimization)\n@param hit The hit to check\n@param useLocation This option is mandatory if you have the IndexBuffer optimized. However, it does not work well if the vertex has offsets\n@return A hit report with all the information you need" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hit_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_useLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_hit;
	static void NewProp_useLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_useLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkWorld_GetChunkWorldHitByHitResult_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010008000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventGetChunkWorldHitByHitResult_Parms, hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hit_MetaData), NewProp_hit_MetaData) }; // 4100991306
void Z_Construct_UFunction_AChunkWorld_GetChunkWorldHitByHitResult_Statics::NewProp_useLocation_SetBit(void* Obj)
{
	((ChunkWorld_eventGetChunkWorldHitByHitResult_Parms*)Obj)->useLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChunkWorld_GetChunkWorldHitByHitResult_Statics::NewProp_useLocation = { "useLocation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChunkWorld_eventGetChunkWorldHitByHitResult_Parms), &Z_Construct_UFunction_AChunkWorld_GetChunkWorldHitByHitResult_Statics::NewProp_useLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_useLocation_MetaData), NewProp_useLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkWorld_GetChunkWorldHitByHitResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventGetChunkWorldHitByHitResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FChunkWorldHit, METADATA_PARAMS(0, nullptr) }; // 3836483830
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkWorld_GetChunkWorldHitByHitResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_GetChunkWorldHitByHitResult_Statics::NewProp_hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_GetChunkWorldHitByHitResult_Statics::NewProp_useLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_GetChunkWorldHitByHitResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_GetChunkWorldHitByHitResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_GetChunkWorldHitByHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "GetChunkWorldHitByHitResult", nullptr, nullptr, Z_Construct_UFunction_AChunkWorld_GetChunkWorldHitByHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_GetChunkWorldHitByHitResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkWorld_GetChunkWorldHitByHitResult_Statics::ChunkWorld_eventGetChunkWorldHitByHitResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_GetChunkWorldHitByHitResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_GetChunkWorldHitByHitResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChunkWorld_GetChunkWorldHitByHitResult_Statics::ChunkWorld_eventGetChunkWorldHitByHitResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChunkWorld_GetChunkWorldHitByHitResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_GetChunkWorldHitByHitResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execGetChunkWorldHitByHitResult)
{
	P_GET_STRUCT(FHitResult,Z_Param_hit);
	P_GET_UBOOL(Z_Param_useLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FChunkWorldHit*)Z_Param__Result=P_THIS->GetChunkWorldHitByHitResult(Z_Param_hit,Z_Param_useLocation);
	P_NATIVE_END;
}
// End Class AChunkWorld Function GetChunkWorldHitByHitResult

// Begin Class AChunkWorld Function IsRuning
struct Z_Construct_UFunction_AChunkWorld_IsRuning_Statics
{
	struct ChunkWorld_eventIsRuning_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldGen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is the generator runing? */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the generator runing?" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AChunkWorld_IsRuning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ChunkWorld_eventIsRuning_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChunkWorld_IsRuning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChunkWorld_eventIsRuning_Parms), &Z_Construct_UFunction_AChunkWorld_IsRuning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkWorld_IsRuning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_IsRuning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_IsRuning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_IsRuning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "IsRuning", nullptr, nullptr, Z_Construct_UFunction_AChunkWorld_IsRuning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_IsRuning_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkWorld_IsRuning_Statics::ChunkWorld_eventIsRuning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_IsRuning_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_IsRuning_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChunkWorld_IsRuning_Statics::ChunkWorld_eventIsRuning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChunkWorld_IsRuning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_IsRuning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execIsRuning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRuning();
	P_NATIVE_END;
}
// End Class AChunkWorld Function IsRuning

// Begin Class AChunkWorld Function MaterialIndexToMaterial
struct Z_Construct_UFunction_AChunkWorld_MaterialIndexToMaterial_Statics
{
	struct ChunkWorld_eventMaterialIndexToMaterial_Parms
	{
		int32 materialIndex;
		UMaterialInterface* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldTeraform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* With this function you get the material of a materialIndex back (you can receive the material index from the save data). This won't work, if multiMaterial is used\n\x09* @param materialIndex To check\n\x09* @return The material of it, will return nullptr if the material is not in the list\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "With this function you get the material of a materialIndex back (you can receive the material index from the save data). This won't work, if multiMaterial is used\n@param materialIndex To check\n@return The material of it, will return nullptr if the material is not in the list" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_materialIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkWorld_MaterialIndexToMaterial_Statics::NewProp_materialIndex = { "materialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventMaterialIndexToMaterial_Parms, materialIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChunkWorld_MaterialIndexToMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventMaterialIndexToMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkWorld_MaterialIndexToMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_MaterialIndexToMaterial_Statics::NewProp_materialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_MaterialIndexToMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_MaterialIndexToMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_MaterialIndexToMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "MaterialIndexToMaterial", nullptr, nullptr, Z_Construct_UFunction_AChunkWorld_MaterialIndexToMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_MaterialIndexToMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkWorld_MaterialIndexToMaterial_Statics::ChunkWorld_eventMaterialIndexToMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_MaterialIndexToMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_MaterialIndexToMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChunkWorld_MaterialIndexToMaterial_Statics::ChunkWorld_eventMaterialIndexToMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChunkWorld_MaterialIndexToMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_MaterialIndexToMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execMaterialIndexToMaterial)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_materialIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInterface**)Z_Param__Result=P_THIS->MaterialIndexToMaterial(Z_Param_materialIndex);
	P_NATIVE_END;
}
// End Class AChunkWorld Function MaterialIndexToMaterial

// Begin Class AChunkWorld Function MaterialToMaterialIndex
struct Z_Construct_UFunction_AChunkWorld_MaterialToMaterialIndex_Statics
{
	struct ChunkWorld_eventMaterialToMaterialIndex_Parms
	{
		UMaterialInterface* material;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldTeraform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* With this function you can ask for the material index. It is just the order of the materials in the list, you will need it for the save data. This won't work, if multiMaterial is used\n\x09* @param material Your material to check\n\x09* @return The materialIndex of the material. Will return -1 if the material is not in the list\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "With this function you can ask for the material index. It is just the order of the materials in the list, you will need it for the save data. This won't work, if multiMaterial is used\n@param material Your material to check\n@return The materialIndex of the material. Will return -1 if the material is not in the list" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_material;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChunkWorld_MaterialToMaterialIndex_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventMaterialToMaterialIndex_Parms, material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkWorld_MaterialToMaterialIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventMaterialToMaterialIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkWorld_MaterialToMaterialIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_MaterialToMaterialIndex_Statics::NewProp_material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_MaterialToMaterialIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_MaterialToMaterialIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_MaterialToMaterialIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "MaterialToMaterialIndex", nullptr, nullptr, Z_Construct_UFunction_AChunkWorld_MaterialToMaterialIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_MaterialToMaterialIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkWorld_MaterialToMaterialIndex_Statics::ChunkWorld_eventMaterialToMaterialIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_MaterialToMaterialIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_MaterialToMaterialIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChunkWorld_MaterialToMaterialIndex_Statics::ChunkWorld_eventMaterialToMaterialIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChunkWorld_MaterialToMaterialIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_MaterialToMaterialIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execMaterialToMaterialIndex)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_material);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->MaterialToMaterialIndex(Z_Param_material);
	P_NATIVE_END;
}
// End Class AChunkWorld Function MaterialToMaterialIndex

// Begin Class AChunkWorld Function ReadDebugStats
struct Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics
{
	struct ChunkWorld_eventReadDebugStats_Parms
	{
		TArray<int32> chunkTasksOpen;
		TArray<int32> threads;
		int32 chunksLoaded;
		float viewRangeFactor;
		TArray<int32> meshPoints;
		TArray<int32> polyCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldDebug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns the current performance debug data\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current performance debug data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_chunkTasksOpen_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_chunkTasksOpen;
	static const UECodeGen_Private::FIntPropertyParams NewProp_threads_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_threads;
	static const UECodeGen_Private::FIntPropertyParams NewProp_chunksLoaded;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_viewRangeFactor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_meshPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_meshPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_polyCount_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_polyCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::NewProp_chunkTasksOpen_Inner = { "chunkTasksOpen", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::NewProp_chunkTasksOpen = { "chunkTasksOpen", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventReadDebugStats_Parms, chunkTasksOpen), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::NewProp_threads_Inner = { "threads", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::NewProp_threads = { "threads", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventReadDebugStats_Parms, threads), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::NewProp_chunksLoaded = { "chunksLoaded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventReadDebugStats_Parms, chunksLoaded), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::NewProp_viewRangeFactor = { "viewRangeFactor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventReadDebugStats_Parms, viewRangeFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::NewProp_meshPoints_Inner = { "meshPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::NewProp_meshPoints = { "meshPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventReadDebugStats_Parms, meshPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::NewProp_polyCount_Inner = { "polyCount", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::NewProp_polyCount = { "polyCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventReadDebugStats_Parms, polyCount), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::NewProp_chunkTasksOpen_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::NewProp_chunkTasksOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::NewProp_threads_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::NewProp_threads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::NewProp_chunksLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::NewProp_viewRangeFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::NewProp_meshPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::NewProp_meshPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::NewProp_polyCount_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::NewProp_polyCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "ReadDebugStats", nullptr, nullptr, Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::ChunkWorld_eventReadDebugStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::ChunkWorld_eventReadDebugStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChunkWorld_ReadDebugStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_ReadDebugStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execReadDebugStats)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_chunkTasksOpen);
	P_GET_TARRAY_REF(int32,Z_Param_Out_threads);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_chunksLoaded);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_viewRangeFactor);
	P_GET_TARRAY_REF(int32,Z_Param_Out_meshPoints);
	P_GET_TARRAY_REF(int32,Z_Param_Out_polyCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReadDebugStats(Z_Param_Out_chunkTasksOpen,Z_Param_Out_threads,Z_Param_Out_chunksLoaded,Z_Param_Out_viewRangeFactor,Z_Param_Out_meshPoints,Z_Param_Out_polyCount);
	P_NATIVE_END;
}
// End Class AChunkWorld Function ReadDebugStats

// Begin Class AChunkWorld Function RemoveChunkWorldWalker
struct Z_Construct_UFunction_AChunkWorld_RemoveChunkWorldWalker_Statics
{
	struct ChunkWorld_eventRemoveChunkWorldWalker_Parms
	{
		UObject* newWorldLoader;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldGen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Removes the object from the generator tracing */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes the object from the generator tracing" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_newWorldLoader;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChunkWorld_RemoveChunkWorldWalker_Statics::NewProp_newWorldLoader = { "newWorldLoader", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventRemoveChunkWorldWalker_Parms, newWorldLoader), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkWorld_RemoveChunkWorldWalker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_RemoveChunkWorldWalker_Statics::NewProp_newWorldLoader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_RemoveChunkWorldWalker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_RemoveChunkWorldWalker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "RemoveChunkWorldWalker", nullptr, nullptr, Z_Construct_UFunction_AChunkWorld_RemoveChunkWorldWalker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_RemoveChunkWorldWalker_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkWorld_RemoveChunkWorldWalker_Statics::ChunkWorld_eventRemoveChunkWorldWalker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_RemoveChunkWorldWalker_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_RemoveChunkWorldWalker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChunkWorld_RemoveChunkWorldWalker_Statics::ChunkWorld_eventRemoveChunkWorldWalker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChunkWorld_RemoveChunkWorldWalker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_RemoveChunkWorldWalker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execRemoveChunkWorldWalker)
{
	P_GET_OBJECT(UObject,Z_Param_newWorldLoader);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveChunkWorldWalker(Z_Param_newWorldLoader);
	P_NATIVE_END;
}
// End Class AChunkWorld Function RemoveChunkWorldWalker

// Begin Class AChunkWorld Function SetBlockValueByBlockWorldPos
struct Z_Construct_UFunction_AChunkWorld_SetBlockValueByBlockWorldPos_Statics
{
	struct ChunkWorld_eventSetBlockValueByBlockWorldPos_Parms
	{
		FIntVector blockWorldPos;
		int32 materialIndex;
		bool refreshChunks;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldTeraform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Use this function to change a block value in all detail levels\n\x09* @param blockWorldPos The pos of the block in the world\n\x09* @param materialIndex Negative values are considered as air (Or something else if you want to save things) (Please write -1 for air, we try to compress the data, that requires homogeneous numbers)\n\x09* @param refreshChunks Set it to false if you dont want to refresh the visual/physical Chunk(s) after the change.Saves 99% of the worktime. Caution! In case of a client sever connection,\n\x09the client will not receive the changes at all\n\x09* @return\n\x09*/" },
#endif
		{ "CPP_Default_materialIndex", "-1" },
		{ "CPP_Default_refreshChunks", "true" },
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use this function to change a block value in all detail levels\n@param blockWorldPos The pos of the block in the world\n@param materialIndex Negative values are considered as air (Or something else if you want to save things) (Please write -1 for air, we try to compress the data, that requires homogeneous numbers)\n@param refreshChunks Set it to false if you dont want to refresh the visual/physical Chunk(s) after the change.Saves 99% of the worktime. Caution! In case of a client sever connection,\n       the client will not receive the changes at all\n@return" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_blockWorldPos_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_materialIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_refreshChunks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_blockWorldPos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_materialIndex;
	static void NewProp_refreshChunks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_refreshChunks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkWorld_SetBlockValueByBlockWorldPos_Statics::NewProp_blockWorldPos = { "blockWorldPos", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventSetBlockValueByBlockWorldPos_Parms, blockWorldPos), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_blockWorldPos_MetaData), NewProp_blockWorldPos_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkWorld_SetBlockValueByBlockWorldPos_Statics::NewProp_materialIndex = { "materialIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventSetBlockValueByBlockWorldPos_Parms, materialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_materialIndex_MetaData), NewProp_materialIndex_MetaData) };
void Z_Construct_UFunction_AChunkWorld_SetBlockValueByBlockWorldPos_Statics::NewProp_refreshChunks_SetBit(void* Obj)
{
	((ChunkWorld_eventSetBlockValueByBlockWorldPos_Parms*)Obj)->refreshChunks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChunkWorld_SetBlockValueByBlockWorldPos_Statics::NewProp_refreshChunks = { "refreshChunks", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChunkWorld_eventSetBlockValueByBlockWorldPos_Parms), &Z_Construct_UFunction_AChunkWorld_SetBlockValueByBlockWorldPos_Statics::NewProp_refreshChunks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_refreshChunks_MetaData), NewProp_refreshChunks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkWorld_SetBlockValueByBlockWorldPos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_SetBlockValueByBlockWorldPos_Statics::NewProp_blockWorldPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_SetBlockValueByBlockWorldPos_Statics::NewProp_materialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_SetBlockValueByBlockWorldPos_Statics::NewProp_refreshChunks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_SetBlockValueByBlockWorldPos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_SetBlockValueByBlockWorldPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "SetBlockValueByBlockWorldPos", nullptr, nullptr, Z_Construct_UFunction_AChunkWorld_SetBlockValueByBlockWorldPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_SetBlockValueByBlockWorldPos_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkWorld_SetBlockValueByBlockWorldPos_Statics::ChunkWorld_eventSetBlockValueByBlockWorldPos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_SetBlockValueByBlockWorldPos_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_SetBlockValueByBlockWorldPos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChunkWorld_SetBlockValueByBlockWorldPos_Statics::ChunkWorld_eventSetBlockValueByBlockWorldPos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChunkWorld_SetBlockValueByBlockWorldPos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_SetBlockValueByBlockWorldPos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execSetBlockValueByBlockWorldPos)
{
	P_GET_STRUCT(FIntVector,Z_Param_blockWorldPos);
	P_GET_PROPERTY(FIntProperty,Z_Param_materialIndex);
	P_GET_UBOOL(Z_Param_refreshChunks);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBlockValueByBlockWorldPos(Z_Param_blockWorldPos,Z_Param_materialIndex,Z_Param_refreshChunks);
	P_NATIVE_END;
}
// End Class AChunkWorld Function SetBlockValueByBlockWorldPos

// Begin Class AChunkWorld Function SetBlockValuesByBlockWorldPos
struct Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPos_Statics
{
	struct ChunkWorld_eventSetBlockValuesByBlockWorldPos_Parms
	{
		TArray<FIntVector> arrBlockWorldPos;
		TArray<int32> arrMaterialIndex;
		bool refreshChunks;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldTeraform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Use this function for larger random access changes\n* @param arrBlockWorldPos A pos Array of the blocks in the world\n* @param arrMaterialIndex Negative values are considered as air (Or something else if you want to save things) (Please write -1 for air, we try to compress the data, that requires homogeneous numbers)\n* @param refreshChunks Set it to false if you dont want to refresh the visual/physical Chunk(s) after the change.Saves 99% of the worktime. Caution! In case of a client sever connection,\nthe client will not receive the changes at all\n* @return\n*/" },
#endif
		{ "CPP_Default_refreshChunks", "true" },
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use this function for larger random access changes\n@param arrBlockWorldPos A pos Array of the blocks in the world\n@param arrMaterialIndex Negative values are considered as air (Or something else if you want to save things) (Please write -1 for air, we try to compress the data, that requires homogeneous numbers)\n@param refreshChunks Set it to false if you dont want to refresh the visual/physical Chunk(s) after the change.Saves 99% of the worktime. Caution! In case of a client sever connection,\nthe client will not receive the changes at all\n@return" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_arrBlockWorldPos_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_arrMaterialIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_refreshChunks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_arrBlockWorldPos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_arrBlockWorldPos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_arrMaterialIndex_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_arrMaterialIndex;
	static void NewProp_refreshChunks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_refreshChunks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPos_Statics::NewProp_arrBlockWorldPos_Inner = { "arrBlockWorldPos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPos_Statics::NewProp_arrBlockWorldPos = { "arrBlockWorldPos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventSetBlockValuesByBlockWorldPos_Parms, arrBlockWorldPos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_arrBlockWorldPos_MetaData), NewProp_arrBlockWorldPos_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPos_Statics::NewProp_arrMaterialIndex_Inner = { "arrMaterialIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPos_Statics::NewProp_arrMaterialIndex = { "arrMaterialIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventSetBlockValuesByBlockWorldPos_Parms, arrMaterialIndex), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_arrMaterialIndex_MetaData), NewProp_arrMaterialIndex_MetaData) };
void Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPos_Statics::NewProp_refreshChunks_SetBit(void* Obj)
{
	((ChunkWorld_eventSetBlockValuesByBlockWorldPos_Parms*)Obj)->refreshChunks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPos_Statics::NewProp_refreshChunks = { "refreshChunks", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChunkWorld_eventSetBlockValuesByBlockWorldPos_Parms), &Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPos_Statics::NewProp_refreshChunks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_refreshChunks_MetaData), NewProp_refreshChunks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPos_Statics::NewProp_arrBlockWorldPos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPos_Statics::NewProp_arrBlockWorldPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPos_Statics::NewProp_arrMaterialIndex_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPos_Statics::NewProp_arrMaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPos_Statics::NewProp_refreshChunks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "SetBlockValuesByBlockWorldPos", nullptr, nullptr, Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPos_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPos_Statics::ChunkWorld_eventSetBlockValuesByBlockWorldPos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPos_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPos_Statics::ChunkWorld_eventSetBlockValuesByBlockWorldPos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execSetBlockValuesByBlockWorldPos)
{
	P_GET_TARRAY_REF(FIntVector,Z_Param_Out_arrBlockWorldPos);
	P_GET_TARRAY_REF(int32,Z_Param_Out_arrMaterialIndex);
	P_GET_UBOOL(Z_Param_refreshChunks);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBlockValuesByBlockWorldPos(Z_Param_Out_arrBlockWorldPos,Z_Param_Out_arrMaterialIndex,Z_Param_refreshChunks);
	P_NATIVE_END;
}
// End Class AChunkWorld Function SetBlockValuesByBlockWorldPos

// Begin Class AChunkWorld Function SetBlockValuesByBlockWorldPosAsync
struct Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPosAsync_Statics
{
	struct ChunkWorld_eventSetBlockValuesByBlockWorldPosAsync_Parms
	{
		TArray<FIntVector> arrBlockWorldPos;
		TArray<int32> arrMaterialIndex;
		bool refreshChunks;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldTeraform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Use this function for larger random access changes, execution takes place on a different thread and may be delayed accordingly\n* @param arrBlockWorldPos A pos Array of the blocks in the world\n* @param arrMaterialIndex Negative values are considered as air (Or something else if you want to save things) (Please write -1 for air, we try to compress the data, that requires homogeneous numbers)\n* @param refreshChunks Set it to false if you dont want to refresh the visual/physical Chunk(s) after the change.Saves 99% of the worktime. Caution! In case of a client sever connection,\nthe client will not receive the changes at all\n* @return\n*/" },
#endif
		{ "CPP_Default_refreshChunks", "true" },
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use this function for larger random access changes, execution takes place on a different thread and may be delayed accordingly\n@param arrBlockWorldPos A pos Array of the blocks in the world\n@param arrMaterialIndex Negative values are considered as air (Or something else if you want to save things) (Please write -1 for air, we try to compress the data, that requires homogeneous numbers)\n@param refreshChunks Set it to false if you dont want to refresh the visual/physical Chunk(s) after the change.Saves 99% of the worktime. Caution! In case of a client sever connection,\nthe client will not receive the changes at all\n@return" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_arrBlockWorldPos_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_arrMaterialIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_refreshChunks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_arrBlockWorldPos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_arrBlockWorldPos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_arrMaterialIndex_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_arrMaterialIndex;
	static void NewProp_refreshChunks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_refreshChunks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPosAsync_Statics::NewProp_arrBlockWorldPos_Inner = { "arrBlockWorldPos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPosAsync_Statics::NewProp_arrBlockWorldPos = { "arrBlockWorldPos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventSetBlockValuesByBlockWorldPosAsync_Parms, arrBlockWorldPos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_arrBlockWorldPos_MetaData), NewProp_arrBlockWorldPos_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPosAsync_Statics::NewProp_arrMaterialIndex_Inner = { "arrMaterialIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPosAsync_Statics::NewProp_arrMaterialIndex = { "arrMaterialIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventSetBlockValuesByBlockWorldPosAsync_Parms, arrMaterialIndex), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_arrMaterialIndex_MetaData), NewProp_arrMaterialIndex_MetaData) };
void Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPosAsync_Statics::NewProp_refreshChunks_SetBit(void* Obj)
{
	((ChunkWorld_eventSetBlockValuesByBlockWorldPosAsync_Parms*)Obj)->refreshChunks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPosAsync_Statics::NewProp_refreshChunks = { "refreshChunks", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ChunkWorld_eventSetBlockValuesByBlockWorldPosAsync_Parms), &Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPosAsync_Statics::NewProp_refreshChunks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_refreshChunks_MetaData), NewProp_refreshChunks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPosAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPosAsync_Statics::NewProp_arrBlockWorldPos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPosAsync_Statics::NewProp_arrBlockWorldPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPosAsync_Statics::NewProp_arrMaterialIndex_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPosAsync_Statics::NewProp_arrMaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPosAsync_Statics::NewProp_refreshChunks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPosAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPosAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "SetBlockValuesByBlockWorldPosAsync", nullptr, nullptr, Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPosAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPosAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPosAsync_Statics::ChunkWorld_eventSetBlockValuesByBlockWorldPosAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPosAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPosAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPosAsync_Statics::ChunkWorld_eventSetBlockValuesByBlockWorldPosAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPosAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPosAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execSetBlockValuesByBlockWorldPosAsync)
{
	P_GET_TARRAY_REF(FIntVector,Z_Param_Out_arrBlockWorldPos);
	P_GET_TARRAY_REF(int32,Z_Param_Out_arrMaterialIndex);
	P_GET_UBOOL(Z_Param_refreshChunks);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBlockValuesByBlockWorldPosAsync(Z_Param_Out_arrBlockWorldPos,Z_Param_Out_arrMaterialIndex,Z_Param_refreshChunks);
	P_NATIVE_END;
}
// End Class AChunkWorld Function SetBlockValuesByBlockWorldPosAsync

// Begin Class AChunkWorld Function SetChunkWorldWalkers
struct Z_Construct_UFunction_AChunkWorld_SetChunkWorldWalkers_Statics
{
	struct ChunkWorld_eventSetChunkWorldWalkers_Parms
	{
		TArray<UObject*> newWorldLoader;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldGen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Overwrite generator tracing. Caution! The array should no longer be edited (thread collisions) */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overwrite generator tracing. Caution! The array should no longer be edited (thread collisions)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_newWorldLoader_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_newWorldLoader;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChunkWorld_SetChunkWorldWalkers_Statics::NewProp_newWorldLoader_Inner = { "newWorldLoader", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AChunkWorld_SetChunkWorldWalkers_Statics::NewProp_newWorldLoader = { "newWorldLoader", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventSetChunkWorldWalkers_Parms, newWorldLoader), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkWorld_SetChunkWorldWalkers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_SetChunkWorldWalkers_Statics::NewProp_newWorldLoader_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_SetChunkWorldWalkers_Statics::NewProp_newWorldLoader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_SetChunkWorldWalkers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_SetChunkWorldWalkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "SetChunkWorldWalkers", nullptr, nullptr, Z_Construct_UFunction_AChunkWorld_SetChunkWorldWalkers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_SetChunkWorldWalkers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkWorld_SetChunkWorldWalkers_Statics::ChunkWorld_eventSetChunkWorldWalkers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_SetChunkWorldWalkers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_SetChunkWorldWalkers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChunkWorld_SetChunkWorldWalkers_Statics::ChunkWorld_eventSetChunkWorldWalkers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChunkWorld_SetChunkWorldWalkers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_SetChunkWorldWalkers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execSetChunkWorldWalkers)
{
	P_GET_TARRAY(UObject*,Z_Param_newWorldLoader);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetChunkWorldWalkers(Z_Param_newWorldLoader);
	P_NATIVE_END;
}
// End Class AChunkWorld Function SetChunkWorldWalkers

// Begin Class AChunkWorld Function StartGen
struct Z_Construct_UFunction_AChunkWorld_StartGen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldGen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Starts the generator. When already started, will restart it. Please trigger this only once per frame **/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts the generator. When already started, will restart it. Please trigger this only once per frame *" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_StartGen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "StartGen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_StartGen_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_StartGen_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AChunkWorld_StartGen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_StartGen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execStartGen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartGen();
	P_NATIVE_END;
}
// End Class AChunkWorld Function StartGen

// Begin Class AChunkWorld Function StopGen
struct Z_Construct_UFunction_AChunkWorld_StopGen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldGen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stops the generator **/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops the generator *" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_StopGen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "StopGen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_StopGen_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_StopGen_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AChunkWorld_StopGen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_StopGen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execStopGen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopGen();
	P_NATIVE_END;
}
// End Class AChunkWorld Function StopGen

// Begin Class AChunkWorld Function UEWorldPosToBlockWorldPos
struct Z_Construct_UFunction_AChunkWorld_UEWorldPosToBlockWorldPos_Statics
{
	struct ChunkWorld_eventUEWorldPosToBlockWorldPos_Parms
	{
		FVector ueWorldPos;
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldTeraform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Can convert an engin world position into a \"blockWorldPos\"\n\x09* @param ueWorldPos The engin world pos\n\x09* @return The block chunk pos relative to the detail level\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can convert an engin world position into a \"blockWorldPos\"\n@param ueWorldPos The engin world pos\n@return The block chunk pos relative to the detail level" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ueWorldPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ueWorldPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkWorld_UEWorldPosToBlockWorldPos_Statics::NewProp_ueWorldPos = { "ueWorldPos", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventUEWorldPosToBlockWorldPos_Parms, ueWorldPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ueWorldPos_MetaData), NewProp_ueWorldPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChunkWorld_UEWorldPosToBlockWorldPos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorld_eventUEWorldPosToBlockWorldPos_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChunkWorld_UEWorldPosToBlockWorldPos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_UEWorldPosToBlockWorldPos_Statics::NewProp_ueWorldPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChunkWorld_UEWorldPosToBlockWorldPos_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_UEWorldPosToBlockWorldPos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChunkWorld_UEWorldPosToBlockWorldPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChunkWorld, nullptr, "UEWorldPosToBlockWorldPos", nullptr, nullptr, Z_Construct_UFunction_AChunkWorld_UEWorldPosToBlockWorldPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_UEWorldPosToBlockWorldPos_Statics::PropPointers), sizeof(Z_Construct_UFunction_AChunkWorld_UEWorldPosToBlockWorldPos_Statics::ChunkWorld_eventUEWorldPosToBlockWorldPos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AChunkWorld_UEWorldPosToBlockWorldPos_Statics::Function_MetaDataParams), Z_Construct_UFunction_AChunkWorld_UEWorldPosToBlockWorldPos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AChunkWorld_UEWorldPosToBlockWorldPos_Statics::ChunkWorld_eventUEWorldPosToBlockWorldPos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AChunkWorld_UEWorldPosToBlockWorldPos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChunkWorld_UEWorldPosToBlockWorldPos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AChunkWorld::execUEWorldPosToBlockWorldPos)
{
	P_GET_STRUCT(FVector,Z_Param_ueWorldPos);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=P_THIS->UEWorldPosToBlockWorldPos(Z_Param_ueWorldPos);
	P_NATIVE_END;
}
// End Class AChunkWorld Function UEWorldPosToBlockWorldPos

// Begin Class AChunkWorld
void AChunkWorld::StaticRegisterNativesAChunkWorld()
{
	UClass* Class = AChunkWorld::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddChunkWorldWalker", &AChunkWorld::execAddChunkWorldWalker },
		{ "BlockChunkIndexToBlockChunkPos", &AChunkWorld::execBlockChunkIndexToBlockChunkPos },
		{ "BlockChunkPosToBlockChunkIndex", &AChunkWorld::execBlockChunkPosToBlockChunkIndex },
		{ "BlockChunkPosToBlockWorldPos", &AChunkWorld::execBlockChunkPosToBlockWorldPos },
		{ "BlockWorldPosToBlockChunkPos", &AChunkWorld::execBlockWorldPosToBlockChunkPos },
		{ "BlockWorldPosToChunkGridPos", &AChunkWorld::execBlockWorldPosToChunkGridPos },
		{ "ChunkGridPosToBlockWorldPos", &AChunkWorld::execChunkGridPosToBlockWorldPos },
		{ "DeleteCache", &AChunkWorld::execDeleteCache },
		{ "DeleteSave", &AChunkWorld::execDeleteSave },
		{ "GetBlockValueByBlockWorldPos", &AChunkWorld::execGetBlockValueByBlockWorldPos },
		{ "GetBlockValueByBlockWorldPosLevel", &AChunkWorld::execGetBlockValueByBlockWorldPosLevel },
		{ "GetBlockValuesByChunkGridPosLevel", &AChunkWorld::execGetBlockValuesByChunkGridPosLevel },
		{ "GetChunkLayerCount", &AChunkWorld::execGetChunkLayerCount },
		{ "GetChunkWorldHitByHitResult", &AChunkWorld::execGetChunkWorldHitByHitResult },
		{ "IsRuning", &AChunkWorld::execIsRuning },
		{ "MaterialIndexToMaterial", &AChunkWorld::execMaterialIndexToMaterial },
		{ "MaterialToMaterialIndex", &AChunkWorld::execMaterialToMaterialIndex },
		{ "ReadDebugStats", &AChunkWorld::execReadDebugStats },
		{ "RemoveChunkWorldWalker", &AChunkWorld::execRemoveChunkWorldWalker },
		{ "SetBlockValueByBlockWorldPos", &AChunkWorld::execSetBlockValueByBlockWorldPos },
		{ "SetBlockValuesByBlockWorldPos", &AChunkWorld::execSetBlockValuesByBlockWorldPos },
		{ "SetBlockValuesByBlockWorldPosAsync", &AChunkWorld::execSetBlockValuesByBlockWorldPosAsync },
		{ "SetChunkWorldWalkers", &AChunkWorld::execSetChunkWorldWalkers },
		{ "StartGen", &AChunkWorld::execStartGen },
		{ "StopGen", &AChunkWorld::execStopGen },
		{ "UEWorldPosToBlockWorldPos", &AChunkWorld::execUEWorldPosToBlockWorldPos },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChunkWorld);
UClass* Z_Construct_UClass_AChunkWorld_NoRegister()
{
	return AChunkWorld::StaticClass();
}
struct Z_Construct_UClass_AChunkWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hi just as a little warning. Yes I set all to public, but be aware that the most tings work strongly multithreaded, so be really carefull! Only the UPROPERTY() are safe to edit on the main thread.\n// When the generator is running, it is not recommended to change the settings, as this can lead to a crash or broken data, but try your luck, easy things like distance and max counts are safe to change.\n// If you need something specific, feel free to ask me. I will try to help you as good as I can.\n" },
#endif
		{ "IncludePath", "ChunkWorld.h" },
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hi just as a little warning. Yes I set all to public, but be aware that the most tings work strongly multithreaded, so be really carefull! Only the UPROPERTY() are safe to edit on the main thread.\nWhen the generator is running, it is not recommended to change the settings, as this can lead to a crash or broken data, but try your luck, easy things like distance and max counts are safe to change.\nIf you need something specific, feel free to ask me. I will try to help you as good as I can." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "WorldGenDef" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The seed for the generator. If you want to have the same world, you will have to use the same seed, otherwise the world will be different */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The seed for the generator. If you want to have the same world, you will have to use the same seed, otherwise the world will be different" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldGenDefType_MetaData[] = {
		{ "Category", "WorldGenDef" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The configuration of the generator is inserted here. Please do not change or edit it while the generator is still running. Almost all changes to the generator will\n\x09""damage the save and cache data regardless of the generator state and should therefore not be edited in the game release version.\n\x09""A converter will be implemented for updating the savefile in order to be able to implement various extensions and format changes*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The configuration of the generator is inserted here. Please do not change or edit it while the generator is still running. Almost all changes to the generator will\n      damage the save and cache data regardless of the generator state and should therefore not be edited in the game release version.\n      A converter will be implemented for updating the savefile in order to be able to implement various extensions and format changes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldGenDef_MetaData[] = {
		{ "Category", "WorldGenDef" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The configuration of the generator is inserted here. Please do not change or edit it while the generator is still running. Almost all changes to the generator will\n\x09""damage the save and cache data regardless of the generator state and should therefore not be edited in the game release version.\n\x09""A converter will be implemented for updating the savefile in order to be able to implement various extensions and format changes*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The configuration of the generator is inserted here. Please do not change or edit it while the generator is still running. Almost all changes to the generator will\n      damage the save and cache data regardless of the generator state and should therefore not be edited in the game release version.\n      A converter will be implemented for updating the savefile in order to be able to implement various extensions and format changes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "WorldGenDef" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Not really to change, except you want to do something with it*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Not really to change, except you want to do something with it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseChunkAutoRefresh_MetaData[] = {
		{ "Category", "ChunkWorldFeatures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If you want to work without automatic loading, deletion and tracking of the chunks, this would be the way to go.\nDeactivation during operation is possible and is comparable to a kind of pause state for the functions mentioned. */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If you want to work without automatic loading, deletion and tracking of the chunks, this would be the way to go.\nDeactivation during operation is possible and is comparable to a kind of pause state for the functions mentioned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseChunkNoiseGenerator_MetaData[] = {
		{ "Category", "ChunkWorldFeatures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If deactivated, all new cache chunks are initialized with air, the save data is not affected and you can continue working as usual using the terraform functions. */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If deactivated, all new cache chunks are initialized with air, the save data is not affected and you can continue working as usual using the terraform functions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowDebugData_MetaData[] = {
		{ "Category", "ChunkWorldFeatures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decide here whether the debug data links should be visible at the top */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decide here whether the debug data links should be visible at the top" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkRefreshTime_MetaData[] = {
		{ "Category", "ChunkWorldPer (Needs Full Version)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The amount of frames until the next Chunk check. It is a waste of performance to have this function executed to frequently */" },
#endif
		{ "EditCondition", "1==2" },
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of frames until the next Chunk check. It is a waste of performance to have this function executed to frequently" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkOutOfRange_MetaData[] = {
		{ "Category", "ChunkWorldPer (Needs Full Version)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ChunkOutOfRange * ChunkRefreshTime = The time until the Chunk gets removed form the world, making this less frequent, results in less cpu load but but maybe more memory and gpu load,\n\x09since we dont need to regenerate the Chunks that often */" },
#endif
		{ "EditCondition", "1 == 2" },
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ChunkOutOfRange * ChunkRefreshTime = The time until the Chunk gets removed form the world, making this less frequent, results in less cpu load but but maybe more memory and gpu load,\n      since we dont need to regenerate the Chunks that often" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetFrameTimeMin_MetaData[] = {
		{ "Category", "ChunkWorldPer (Needs Full Version)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This is your expected minimum time that the game should take to do a frame. If the game is faster, the generator will try to increase the view range*/" },
#endif
		{ "EditCondition", "1 == 2" },
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is your expected minimum time that the game should take to do a frame. If the game is faster, the generator will try to increase the view range" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetFrameTimeMax_MetaData[] = {
		{ "Category", "ChunkWorldPer (Needs Full Version)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This is your expected maximum time that the game should take to do a frame. If the game is slower, the generator will try to decrease the view range*/" },
#endif
		{ "EditCondition", "1 == 2" },
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is your expected maximum time that the game should take to do a frame. If the game is slower, the generator will try to decrease the view range" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameViewRangeFactorMin_MetaData[] = {
		{ "Category", "ChunkWorldPer (Needs Full Version)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The minimal allowed view range factor of the generator */" },
#endif
		{ "EditCondition", "1 == 2" },
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The minimal allowed view range factor of the generator" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameViewRangeFactorMax_MetaData[] = {
		{ "Category", "ChunkWorldPer (Needs Full Version)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The maximal allowed view range factor of the generator */" },
#endif
		{ "EditCondition", "1 == 2" },
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximal allowed view range factor of the generator" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPriTasks_MetaData[] = {
		{ "Category", "ChunkWorldThreads (Needs Full Version)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The maximal number of open threads which are reserved for primary tasks (Chunks surrounding the actor) */" },
#endif
		{ "EditCondition", "1 == 2" },
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximal number of open threads which are reserved for primary tasks (Chunks surrounding the actor)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSecTasks_MetaData[] = {
		{ "Category", "ChunkWorldThreads (Needs Full Version)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The maximal number of open threads for non prio generation (Overall default generator usage) */" },
#endif
		{ "EditCondition", "1 == 2" },
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximal number of open threads for non prio generation (Overall default generator usage)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFileTasks_MetaData[] = {
		{ "Category", "ChunkWorldThreads (Needs Full Version)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The maximal number of open threads for the data only generation (Mostly usless when you dont use the cache feature) */" },
#endif
		{ "EditCondition", "1 == 2" },
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximal number of open threads for the data only generation (Mostly usless when you dont use the cache feature)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryRange_MetaData[] = {
		{ "Category", "ChunkWorldThreads (Needs Full Version)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The range in which only primary threads are included for generation */" },
#endif
		{ "EditCondition", "1 == 2" },
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The range in which only primary threads are included for generation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileRange_MetaData[] = {
		{ "Category", "ChunkWorldThreads (Needs Full Version)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The radius in which the generator tries to prepare data (1 file = 8 chunks ) Hint: Try to have more Chunks then in your ChunkDataParams */" },
#endif
		{ "EditCondition", "1 == 2" },
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The radius in which the generator tries to prepare data (1 file = 8 chunks ) Hint: Try to have more Chunks then in your ChunkDataParams" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualThreadStack_MetaData[] = {
		{ "Category", "ChunkWorldThreads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A simulated Stack for the generator buffers in MiB, while using a thread. This amount will be malloc in the memory */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A simulated Stack for the generator buffers in MiB, while using a thread. This amount will be malloc in the memory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseCache_MetaData[] = {
		{ "Category", "ChunkWorldCache" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Just the switch to turn this function on or off. Be aware, depending on the distance traveled,\n\x09more memory will be used on the hard disk, but the advantage is clear when active: Considerably less CPU load, and depending on the hard disk faster response time */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Just the switch to turn this function on or off. Be aware, depending on the distance traveled,\n      more memory will be used on the hard disk, but the advantage is clear when active: Considerably less CPU load, and depending on the hard disk faster response time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCacheMemUse_MetaData[] = {
		{ "Category", "ChunkWorldCache (Needs Full Version)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Cache will start to save and remove from the memory when MiB limit is reached */" },
#endif
		{ "EditCondition", "1 == 2" },
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Cache will start to save and remove from the memory when MiB limit is reached" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheTarget_MetaData[] = {
		{ "Category", "ChunkWorldCache (Needs Full Version)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cache target folder */" },
#endif
		{ "EditCondition", "1 == 2" },
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cache target folder" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveTarget_MetaData[] = {
		{ "Category", "ChunkWorldCache" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Save target folder */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save target folder" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugColors_MetaData[] = {
		{ "Category", "ChunkWorldDebug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Switches the generator to debug colors */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Switches the generator to debug colors" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WorldGenDefType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldGenDef;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MeshComponent;
	static void NewProp_UseChunkAutoRefresh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseChunkAutoRefresh;
	static void NewProp_UseChunkNoiseGenerator_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseChunkNoiseGenerator;
	static void NewProp_ShowDebugData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowDebugData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChunkRefreshTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChunkOutOfRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetFrameTimeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetFrameTimeMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameViewRangeFactorMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameViewRangeFactorMax;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPriTasks;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSecTasks;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxFileTasks;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrimaryRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FileRange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VirtualThreadStack;
	static void NewProp_UseCache_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseCache;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCacheMemUse;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CacheTarget;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveTarget;
	static void NewProp_DebugColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugColors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AChunkWorld_AddChunkWorldWalker, "AddChunkWorldWalker" }, // 217502382
		{ &Z_Construct_UFunction_AChunkWorld_BlockChunkIndexToBlockChunkPos, "BlockChunkIndexToBlockChunkPos" }, // 4268723552
		{ &Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockChunkIndex, "BlockChunkPosToBlockChunkIndex" }, // 511902511
		{ &Z_Construct_UFunction_AChunkWorld_BlockChunkPosToBlockWorldPos, "BlockChunkPosToBlockWorldPos" }, // 2100987285
		{ &Z_Construct_UFunction_AChunkWorld_BlockWorldPosToBlockChunkPos, "BlockWorldPosToBlockChunkPos" }, // 3998560266
		{ &Z_Construct_UFunction_AChunkWorld_BlockWorldPosToChunkGridPos, "BlockWorldPosToChunkGridPos" }, // 4018791374
		{ &Z_Construct_UFunction_AChunkWorld_ChunkGridPosToBlockWorldPos, "ChunkGridPosToBlockWorldPos" }, // 721631058
		{ &Z_Construct_UFunction_AChunkWorld_DeleteCache, "DeleteCache" }, // 2344702828
		{ &Z_Construct_UFunction_AChunkWorld_DeleteSave, "DeleteSave" }, // 4216828275
		{ &Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPos, "GetBlockValueByBlockWorldPos" }, // 2341469058
		{ &Z_Construct_UFunction_AChunkWorld_GetBlockValueByBlockWorldPosLevel, "GetBlockValueByBlockWorldPosLevel" }, // 64429998
		{ &Z_Construct_UFunction_AChunkWorld_GetBlockValuesByChunkGridPosLevel, "GetBlockValuesByChunkGridPosLevel" }, // 539574860
		{ &Z_Construct_UFunction_AChunkWorld_GetChunkLayerCount, "GetChunkLayerCount" }, // 4239256174
		{ &Z_Construct_UFunction_AChunkWorld_GetChunkWorldHitByHitResult, "GetChunkWorldHitByHitResult" }, // 2022344455
		{ &Z_Construct_UFunction_AChunkWorld_IsRuning, "IsRuning" }, // 2717301172
		{ &Z_Construct_UFunction_AChunkWorld_MaterialIndexToMaterial, "MaterialIndexToMaterial" }, // 3798318531
		{ &Z_Construct_UFunction_AChunkWorld_MaterialToMaterialIndex, "MaterialToMaterialIndex" }, // 938361656
		{ &Z_Construct_UFunction_AChunkWorld_ReadDebugStats, "ReadDebugStats" }, // 2870316568
		{ &Z_Construct_UFunction_AChunkWorld_RemoveChunkWorldWalker, "RemoveChunkWorldWalker" }, // 3054339161
		{ &Z_Construct_UFunction_AChunkWorld_SetBlockValueByBlockWorldPos, "SetBlockValueByBlockWorldPos" }, // 6063608
		{ &Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPos, "SetBlockValuesByBlockWorldPos" }, // 1014863824
		{ &Z_Construct_UFunction_AChunkWorld_SetBlockValuesByBlockWorldPosAsync, "SetBlockValuesByBlockWorldPosAsync" }, // 3138775330
		{ &Z_Construct_UFunction_AChunkWorld_SetChunkWorldWalkers, "SetChunkWorldWalkers" }, // 779821235
		{ &Z_Construct_UFunction_AChunkWorld_StartGen, "StartGen" }, // 877338494
		{ &Z_Construct_UFunction_AChunkWorld_StopGen, "StopGen" }, // 4147127973
		{ &Z_Construct_UFunction_AChunkWorld_UEWorldPosToBlockWorldPos, "UEWorldPosToBlockWorldPos" }, // 3988033086
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChunkWorld>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_WorldGenDefType = { "WorldGenDefType", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, WorldGenDefType), Z_Construct_UClass_UClass, Z_Construct_UClass_UWorldGenDef_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldGenDefType_MetaData), NewProp_WorldGenDefType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_WorldGenDef = { "WorldGenDef", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, WorldGenDef), Z_Construct_UClass_UWorldGenDef_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldGenDef_MetaData), NewProp_WorldGenDef_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, MeshComponent), Z_Construct_UClass_UClass, Z_Construct_UClass_UChunkBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
void Z_Construct_UClass_AChunkWorld_Statics::NewProp_UseChunkAutoRefresh_SetBit(void* Obj)
{
	((AChunkWorld*)Obj)->UseChunkAutoRefresh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_UseChunkAutoRefresh = { "UseChunkAutoRefresh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AChunkWorld), &Z_Construct_UClass_AChunkWorld_Statics::NewProp_UseChunkAutoRefresh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseChunkAutoRefresh_MetaData), NewProp_UseChunkAutoRefresh_MetaData) };
void Z_Construct_UClass_AChunkWorld_Statics::NewProp_UseChunkNoiseGenerator_SetBit(void* Obj)
{
	((AChunkWorld*)Obj)->UseChunkNoiseGenerator = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_UseChunkNoiseGenerator = { "UseChunkNoiseGenerator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AChunkWorld), &Z_Construct_UClass_AChunkWorld_Statics::NewProp_UseChunkNoiseGenerator_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseChunkNoiseGenerator_MetaData), NewProp_UseChunkNoiseGenerator_MetaData) };
void Z_Construct_UClass_AChunkWorld_Statics::NewProp_ShowDebugData_SetBit(void* Obj)
{
	((AChunkWorld*)Obj)->ShowDebugData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_ShowDebugData = { "ShowDebugData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AChunkWorld), &Z_Construct_UClass_AChunkWorld_Statics::NewProp_ShowDebugData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowDebugData_MetaData), NewProp_ShowDebugData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_ChunkRefreshTime = { "ChunkRefreshTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, ChunkRefreshTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkRefreshTime_MetaData), NewProp_ChunkRefreshTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_ChunkOutOfRange = { "ChunkOutOfRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, ChunkOutOfRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkOutOfRange_MetaData), NewProp_ChunkOutOfRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_TargetFrameTimeMin = { "TargetFrameTimeMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, TargetFrameTimeMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetFrameTimeMin_MetaData), NewProp_TargetFrameTimeMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_TargetFrameTimeMax = { "TargetFrameTimeMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, TargetFrameTimeMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetFrameTimeMax_MetaData), NewProp_TargetFrameTimeMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_FrameViewRangeFactorMin = { "FrameViewRangeFactorMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, FrameViewRangeFactorMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameViewRangeFactorMin_MetaData), NewProp_FrameViewRangeFactorMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_FrameViewRangeFactorMax = { "FrameViewRangeFactorMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, FrameViewRangeFactorMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameViewRangeFactorMax_MetaData), NewProp_FrameViewRangeFactorMax_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_MaxPriTasks = { "MaxPriTasks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, MaxPriTasks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPriTasks_MetaData), NewProp_MaxPriTasks_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_MaxSecTasks = { "MaxSecTasks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, MaxSecTasks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSecTasks_MetaData), NewProp_MaxSecTasks_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_MaxFileTasks = { "MaxFileTasks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, MaxFileTasks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFileTasks_MetaData), NewProp_MaxFileTasks_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_PrimaryRange = { "PrimaryRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, PrimaryRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryRange_MetaData), NewProp_PrimaryRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_FileRange = { "FileRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, FileRange), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileRange_MetaData), NewProp_FileRange_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_VirtualThreadStack = { "VirtualThreadStack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, VirtualThreadStack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualThreadStack_MetaData), NewProp_VirtualThreadStack_MetaData) };
void Z_Construct_UClass_AChunkWorld_Statics::NewProp_UseCache_SetBit(void* Obj)
{
	((AChunkWorld*)Obj)->UseCache = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_UseCache = { "UseCache", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AChunkWorld), &Z_Construct_UClass_AChunkWorld_Statics::NewProp_UseCache_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseCache_MetaData), NewProp_UseCache_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_MaxCacheMemUse = { "MaxCacheMemUse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, MaxCacheMemUse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCacheMemUse_MetaData), NewProp_MaxCacheMemUse_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_CacheTarget = { "CacheTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, CacheTarget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheTarget_MetaData), NewProp_CacheTarget_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_SaveTarget = { "SaveTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkWorld, SaveTarget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveTarget_MetaData), NewProp_SaveTarget_MetaData) };
void Z_Construct_UClass_AChunkWorld_Statics::NewProp_DebugColors_SetBit(void* Obj)
{
	((AChunkWorld*)Obj)->DebugColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChunkWorld_Statics::NewProp_DebugColors = { "DebugColors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AChunkWorld), &Z_Construct_UClass_AChunkWorld_Statics::NewProp_DebugColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugColors_MetaData), NewProp_DebugColors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChunkWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_WorldGenDefType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_WorldGenDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_UseChunkAutoRefresh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_UseChunkNoiseGenerator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_ShowDebugData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_ChunkRefreshTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_ChunkOutOfRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_TargetFrameTimeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_TargetFrameTimeMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_FrameViewRangeFactorMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_FrameViewRangeFactorMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_MaxPriTasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_MaxSecTasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_MaxFileTasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_PrimaryRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_FileRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_VirtualThreadStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_UseCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_MaxCacheMemUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_CacheTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_SaveTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkWorld_Statics::NewProp_DebugColors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkWorld_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AChunkWorld_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PorismDIMsWorldGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkWorld_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AChunkWorld_Statics::ClassParams = {
	&AChunkWorld::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AChunkWorld_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AChunkWorld_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkWorld_Statics::Class_MetaDataParams), Z_Construct_UClass_AChunkWorld_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AChunkWorld()
{
	if (!Z_Registration_Info_UClass_AChunkWorld.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChunkWorld.OuterSingleton, Z_Construct_UClass_AChunkWorld_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AChunkWorld.OuterSingleton;
}
template<> PORISMDIMSWORLDGENERATOR_API UClass* StaticClass<AChunkWorld>()
{
	return AChunkWorld::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AChunkWorld);
AChunkWorld::~AChunkWorld() {}
// End Class AChunkWorld

// Begin Registration
struct Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorld_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AChunkWorld, AChunkWorld::StaticClass, TEXT("AChunkWorld"), &Z_Registration_Info_UClass_AChunkWorld, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChunkWorld), 641551579U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorld_h_291175242(TEXT("/Script/PorismDIMsWorldGenerator"),
	Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorld_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorld_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
