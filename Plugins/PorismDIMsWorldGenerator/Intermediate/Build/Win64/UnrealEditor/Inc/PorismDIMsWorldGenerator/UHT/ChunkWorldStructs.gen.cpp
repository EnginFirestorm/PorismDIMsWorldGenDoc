// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PorismDIMsWorldGenerator/Public/ChunkWorldStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunkWorldStructs() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionEnabled();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
PORISMDIMSWORLDGENERATOR_API UClass* Z_Construct_UClass_UChunkBlock();
PORISMDIMSWORLDGENERATOR_API UClass* Z_Construct_UClass_UChunkBlock_NoRegister();
PORISMDIMSWORLDGENERATOR_API UClass* Z_Construct_UClass_UFastNoiseEditor_NoRegister();
PORISMDIMSWORLDGENERATOR_API UClass* Z_Construct_UClass_UWorldGenDef();
PORISMDIMSWORLDGENERATOR_API UClass* Z_Construct_UClass_UWorldGenDef_NoRegister();
PORISMDIMSWORLDGENERATOR_API UEnum* Z_Construct_UEnum_PorismDIMsWorldGenerator_AxisBehavior();
PORISMDIMSWORLDGENERATOR_API UEnum* Z_Construct_UEnum_PorismDIMsWorldGenerator_ChunkTypes();
PORISMDIMSWORLDGENERATOR_API UEnum* Z_Construct_UEnum_PorismDIMsWorldGenerator_SurfaceGenType();
PORISMDIMSWORLDGENERATOR_API UScriptStruct* Z_Construct_UScriptStruct_FBiomeDualData();
PORISMDIMSWORLDGENERATOR_API UScriptStruct* Z_Construct_UScriptStruct_FBiomeMaterialStep();
PORISMDIMSWORLDGENERATOR_API UScriptStruct* Z_Construct_UScriptStruct_FBlockChangeCall();
PORISMDIMSWORLDGENERATOR_API UScriptStruct* Z_Construct_UScriptStruct_FChunkDataParams();
PORISMDIMSWORLDGENERATOR_API UScriptStruct* Z_Construct_UScriptStruct_FChunkRef();
PORISMDIMSWORLDGENERATOR_API UScriptStruct* Z_Construct_UScriptStruct_FChunkWorldHit();
PORISMDIMSWORLDGENERATOR_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialDef();
PORISMDIMSWORLDGENERATOR_API UScriptStruct* Z_Construct_UScriptStruct_FMeshEntry();
UPackage* Z_Construct_UPackage__Script_PorismDIMsWorldGenerator();
// End Cross Module References

// Begin ScriptStruct FChunkRef
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChunkRef;
class UScriptStruct* FChunkRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChunkRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChunkRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkRef, (UObject*)Z_Construct_UPackage__Script_PorismDIMsWorldGenerator(), TEXT("ChunkRef"));
	}
	return Z_Registration_Info_UScriptStruct_ChunkRef.OuterSingleton;
}
template<> PORISMDIMSWORLDGENERATOR_API UScriptStruct* StaticStruct<FChunkRef>()
{
	return FChunkRef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChunkRef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkRef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChunkRef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PorismDIMsWorldGenerator,
	nullptr,
	&NewStructOps,
	"ChunkRef",
	nullptr,
	0,
	sizeof(FChunkRef),
	alignof(FChunkRef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkRef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChunkRef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChunkRef()
{
	if (!Z_Registration_Info_UScriptStruct_ChunkRef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChunkRef.InnerSingleton, Z_Construct_UScriptStruct_FChunkRef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChunkRef.InnerSingleton;
}
// End ScriptStruct FChunkRef

// Begin Class UChunkBlock
void UChunkBlock::StaticRegisterNativesUChunkBlock()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChunkBlock);
UClass* Z_Construct_UClass_UChunkBlock_NoRegister()
{
	return UChunkBlock::StaticClass();
}
struct Z_Construct_UClass_UChunkBlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A render-specific class for settings. Extra functions can be activated via this to change the design a little. Attention! This class only works for its partner */" },
#endif
		{ "IncludePath", "ChunkWorldStructs.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A render-specific class for settings. Extra functions can be activated via this to change the design a little. Attention! This class only works for its partner" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChunkBlock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UChunkBlock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PorismDIMsWorldGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChunkBlock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChunkBlock_Statics::ClassParams = {
	&UChunkBlock::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChunkBlock_Statics::Class_MetaDataParams), Z_Construct_UClass_UChunkBlock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChunkBlock()
{
	if (!Z_Registration_Info_UClass_UChunkBlock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChunkBlock.OuterSingleton, Z_Construct_UClass_UChunkBlock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChunkBlock.OuterSingleton;
}
template<> PORISMDIMSWORLDGENERATOR_API UClass* StaticClass<UChunkBlock>()
{
	return UChunkBlock::StaticClass();
}
UChunkBlock::UChunkBlock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChunkBlock);
UChunkBlock::~UChunkBlock() {}
// End Class UChunkBlock

// Begin ScriptStruct FChunkWorldHit
static_assert(std::is_polymorphic<FChunkWorldHit>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FChunkWorldHit cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChunkWorldHit;
class UScriptStruct* FChunkWorldHit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChunkWorldHit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChunkWorldHit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkWorldHit, (UObject*)Z_Construct_UPackage__Script_PorismDIMsWorldGenerator(), TEXT("ChunkWorldHit"));
	}
	return Z_Registration_Info_UScriptStruct_ChunkWorldHit.OuterSingleton;
}
template<> PORISMDIMSWORLDGENERATOR_API UScriptStruct* StaticStruct<FChunkWorldHit>()
{
	return FChunkWorldHit::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChunkWorldHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//----------------------------------------------------------------------//\n" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Report" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If valid, the hit material, e.g. for your item drop */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If valid, the hit material, e.g. for your item drop" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Report" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If valid, the hit mesh, e.g. for your item drop */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If valid, the hit mesh, e.g. for your item drop" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[] = {
		{ "Category", "Report" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If valid, the hit materialIndex, e.g. for your item drop */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If valid, the hit materialIndex, e.g. for your item drop" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chunk_MetaData[] = {
		{ "Category", "Report" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If valid, the hit Chunk */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If valid, the hit Chunk" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetailLevel_MetaData[] = {
		{ "Category", "Report" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If valid, the detail layer of the Chunk */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If valid, the detail layer of the Chunk" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockChunkIndex_MetaData[] = {
		{ "Category", "Report" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If valid, the blockChunkIndex, is the stored position in the Chunk data set */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If valid, the blockChunkIndex, is the stored position in the Chunk data set" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockChunkPos_MetaData[] = {
		{ "Category", "Report" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If valid, the blockChunkPos. The 3D position in the Chunk */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If valid, the blockChunkPos. The 3D position in the Chunk" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkGridPos_MetaData[] = {
		{ "Category", "Report" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If valid, the chunkGridPos of the chunk */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If valid, the chunkGridPos of the chunk" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockWorldPos_MetaData[] = {
		{ "Category", "Report" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If valid, the blockWorldPos, the 3D position in the chunkworld, which is important for terraforming */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If valid, the blockWorldPos, the 3D position in the chunkworld, which is important for terraforming" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkWasReadyToUse_MetaData[] = {
		{ "Category", "Report" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If false. You used a chunk while it was in generate or render state, this makes the rest of the results questionable, as they may not correspond to reality. May try it in 1 frame again */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If false. You used a chunk while it was in generate or render state, this makes the rest of the results questionable, as they may not correspond to reality. May try it in 1 frame again" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckSuccess_MetaData[] = {
		{ "Category", "Report" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true. The check was canceled, this only happens if there is a problem with the generator or the hit data e.g. generator is not running or the hit did not go to the generator collision */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true. The check was canceled, this only happens if there is a problem with the generator or the hit data e.g. generator is not running or the hit did not go to the generator collision" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Chunk;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DetailLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlockChunkIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockChunkPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkGridPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockWorldPos;
	static void NewProp_ChunkWasReadyToUse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ChunkWasReadyToUse;
	static void NewProp_CheckSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CheckSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkWorldHit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkWorldHit, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkWorldHit, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkWorldHit, MaterialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialIndex_MetaData), NewProp_MaterialIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_Chunk = { "Chunk", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkWorldHit, Chunk), Z_Construct_UScriptStruct_FChunkRef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chunk_MetaData), NewProp_Chunk_MetaData) }; // 2638181845
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_DetailLevel = { "DetailLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkWorldHit, DetailLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetailLevel_MetaData), NewProp_DetailLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_BlockChunkIndex = { "BlockChunkIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkWorldHit, BlockChunkIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockChunkIndex_MetaData), NewProp_BlockChunkIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_BlockChunkPos = { "BlockChunkPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkWorldHit, BlockChunkPos), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockChunkPos_MetaData), NewProp_BlockChunkPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_ChunkGridPos = { "ChunkGridPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkWorldHit, ChunkGridPos), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkGridPos_MetaData), NewProp_ChunkGridPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_BlockWorldPos = { "BlockWorldPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkWorldHit, BlockWorldPos), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockWorldPos_MetaData), NewProp_BlockWorldPos_MetaData) };
void Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_ChunkWasReadyToUse_SetBit(void* Obj)
{
	((FChunkWorldHit*)Obj)->ChunkWasReadyToUse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_ChunkWasReadyToUse = { "ChunkWasReadyToUse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChunkWorldHit), &Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_ChunkWasReadyToUse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkWasReadyToUse_MetaData), NewProp_ChunkWasReadyToUse_MetaData) };
void Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_CheckSuccess_SetBit(void* Obj)
{
	((FChunkWorldHit*)Obj)->CheckSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_CheckSuccess = { "CheckSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChunkWorldHit), &Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_CheckSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckSuccess_MetaData), NewProp_CheckSuccess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChunkWorldHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_MaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_Chunk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_DetailLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_BlockChunkIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_BlockChunkPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_ChunkGridPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_BlockWorldPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_ChunkWasReadyToUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewProp_CheckSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkWorldHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChunkWorldHit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PorismDIMsWorldGenerator,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ChunkWorldHit",
	Z_Construct_UScriptStruct_FChunkWorldHit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkWorldHit_Statics::PropPointers),
	sizeof(FChunkWorldHit),
	alignof(FChunkWorldHit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkWorldHit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChunkWorldHit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChunkWorldHit()
{
	if (!Z_Registration_Info_UScriptStruct_ChunkWorldHit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChunkWorldHit.InnerSingleton, Z_Construct_UScriptStruct_FChunkWorldHit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChunkWorldHit.InnerSingleton;
}
// End ScriptStruct FChunkWorldHit

// Begin Enum ChunkTypes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ChunkTypes;
static UEnum* ChunkTypes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ChunkTypes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ChunkTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PorismDIMsWorldGenerator_ChunkTypes, (UObject*)Z_Construct_UPackage__Script_PorismDIMsWorldGenerator(), TEXT("ChunkTypes"));
	}
	return Z_Registration_Info_UEnum_ChunkTypes.OuterSingleton;
}
template<> PORISMDIMSWORLDGENERATOR_API UEnum* StaticEnum<ChunkTypes>()
{
	return ChunkTypes_StaticEnum();
}
struct Z_Construct_UEnum_PorismDIMsWorldGenerator_ChunkTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChunkCubic.DisplayName", "ChunkCubic" },
		{ "ChunkCubic.Name", "ChunkTypes::ChunkCubic" },
		{ "ChunkCubicX2.DisplayName", "ChunkCubicX2" },
		{ "ChunkCubicX2.Name", "ChunkTypes::ChunkCubicX2" },
		{ "ChunkHexagonal.DisplayName", "ChunkHexagonal" },
		{ "ChunkHexagonal.Name", "ChunkTypes::ChunkHexagonal" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ChunkTypes::ChunkCubic", (int64)ChunkTypes::ChunkCubic },
		{ "ChunkTypes::ChunkHexagonal", (int64)ChunkTypes::ChunkHexagonal },
		{ "ChunkTypes::ChunkCubicX2", (int64)ChunkTypes::ChunkCubicX2 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PorismDIMsWorldGenerator_ChunkTypes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PorismDIMsWorldGenerator,
	nullptr,
	"ChunkTypes",
	"ChunkTypes",
	Z_Construct_UEnum_PorismDIMsWorldGenerator_ChunkTypes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PorismDIMsWorldGenerator_ChunkTypes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PorismDIMsWorldGenerator_ChunkTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PorismDIMsWorldGenerator_ChunkTypes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PorismDIMsWorldGenerator_ChunkTypes()
{
	if (!Z_Registration_Info_UEnum_ChunkTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ChunkTypes.InnerSingleton, Z_Construct_UEnum_PorismDIMsWorldGenerator_ChunkTypes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ChunkTypes.InnerSingleton;
}
// End Enum ChunkTypes

// Begin ScriptStruct FChunkDataParams
static_assert(std::is_polymorphic<FChunkDataParams>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FChunkDataParams cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChunkDataParams;
class UScriptStruct* FChunkDataParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChunkDataParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChunkDataParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkDataParams, (UObject*)Z_Construct_UPackage__Script_PorismDIMsWorldGenerator(), TEXT("ChunkDataParams"));
	}
	return Z_Registration_Info_UScriptStruct_ChunkDataParams.OuterSingleton;
}
template<> PORISMDIMSWORLDGENERATOR_API UScriptStruct* StaticStruct<FChunkDataParams>()
{
	return FChunkDataParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChunkDataParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkType_MetaData[] = {
		{ "Category", "BlockShape" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This is for the visual surface look */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is for the visual surface look" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockTools_MetaData[] = {
		{ "Category", "BlockShape" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This is a parameter extension for ChunkType */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a parameter extension for ChunkType" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectorCount_MetaData[] = {
		{ "Category", "ViewDistance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This defines, how many Chunks are loaded in which axis direction */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This defines, how many Chunks are loaded in which axis direction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockSizeMulti_MetaData[] = {
		{ "Category", "ChunkShape" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The size in unreal units of a block */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The size in unreal units of a block" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkSizeMulti_MetaData[] = {
		{ "Category", "ChunkShape" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This specification allows you to change the shape of the Chunk. Please note that the background calculation is done with int, the smallest chunk must be 1,1,1. please refer to the examples */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This specification allows you to change the shape of the Chunk. Please note that the background calculation is done with int, the smallest chunk must be 1,1,1. please refer to the examples" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenTemplateDetailLevel_MetaData[] = {
		{ "Category", "ChunkShape (Needs Full Version)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gives the possibility to define a template chunk of a certain detail level for the generation of the surface.\n\x09This allows, for example, LOD Level 0 to be generated using the data from LOD Level 1, which results in a \xe2\x80\x9cpixelation\xe2\x80\x9d of LOD Level 0.\n\x09This can be useful if the player is to have the option of \xe2\x80\x9c removing half blocks\xe2\x80\x9d, for example. \n\x09Please only ever use the index of the preceding lines as the specification */" },
#endif
		{ "EditCondition", "1 == 2" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gives the possibility to define a template chunk of a certain detail level for the generation of the surface.\n      This allows, for example, LOD Level 0 to be generated using the data from LOD Level 1, which results in a \xe2\x80\x9cpixelation\xe2\x80\x9d of LOD Level 0.\n      This can be useful if the player is to have the option of \xe2\x80\x9c removing half blocks\xe2\x80\x9d, for example.\n      Please only ever use the index of the preceding lines as the specification" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[] = {
		{ "Category", "ShapeCollision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should this Chunk support collision? */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should this Chunk support collision?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileName_MetaData[] = {
		{ "Category", "ShapeCollision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collision profile to use */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision profile to use" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionEnabled_MetaData[] = {
		{ "Category", "ShapeCollision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collision type */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shadows_MetaData[] = {
		{ "Category", "ShapeShadows" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should this Chunk support Shadows? (Collisions and Shadows share the model generation) */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should this Chunk support Shadows? (Collisions and Shadows share the model generation)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransparencySupport_MetaData[] = {
		{ "Category", "ShapeFeatures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Needs WorldGenDef->TransparentMaterialIndexs or WorldGenDef->TransparentMaterial to work */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Needs WorldGenDef->TransparentMaterialIndexs or WorldGenDef->TransparentMaterial to work" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptimizeVertexBuffer_MetaData[] = {
		{ "Category", "ShapeFeatures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should the vertex buffers be optimized in this Chunk? It's just for memory. Please also note that this may share the vertex between the polygons */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the vertex buffers be optimized in this Chunk? It's just for memory. Please also note that this may share the vertex between the polygons" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptimizeIndexBuffer_MetaData[] = {
		{ "Category", "ShapeFeatures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should the index buffers be optimized in this Chunk? Attention, this will definitely make some effects unusable, as this function deletes polygons and merges vertexes.\n\x09Requires \"OptimizeVertexBuffer\" to work. */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the index buffers be optimized in this Chunk? Attention, this will definitely make some effects unusable, as this function deletes polygons and merges vertexes.\n      Requires \"OptimizeVertexBuffer\" to work." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderChunkBorder_MetaData[] = {
		{ "Category", "ShapeFeatures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should we render the borders? This wastes render resources, but is necessary to avoid gaps between the Chunk zones and prevents flickering while terraforming */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we render the borders? This wastes render resources, but is necessary to avoid gaps between the Chunk zones and prevents flickering while terraforming" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderInstancedMeshs_MetaData[] = {
		{ "Category", "ShapeFeatures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should this Chunk render InstancedMeshs? */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should this Chunk render InstancedMeshs?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiMaterial_MetaData[] = {
		{ "Category", "ShapeFeatures" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Here you can optionally use a material to display the entire detail level. If this field is filled, the materials in the biome list will be ignored. This is also the only way to overlay textures/colors, see examples */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Here you can optionally use a material to display the entire detail level. If this field is filled, the materials in the biome list will be ignored. This is also the only way to overlay textures/colors, see examples" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugMaterial_MetaData[] = {
		{ "Category", "ShapeDebug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If active, only the debug material will be displayed in this Chunk, which can be used to determine whether the distance generator is working correctly */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If active, only the debug material will be displayed in this Chunk, which can be used to determine whether the distance generator is working correctly" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMeshCollision_MetaData[] = {
		{ "Category", "InstancedMeshCollision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should this Chunk support InstancedMeshCollision? */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should this Chunk support InstancedMeshCollision?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMeshCollisionProfileName_MetaData[] = {
		{ "Category", "InstancedMeshCollision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** InstancedMeshCollision profile to use */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InstancedMeshCollision profile to use" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMeshCollisionEnabled_MetaData[] = {
		{ "Category", "InstancedMeshCollision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** InstancedMeshCollision type */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InstancedMeshCollision type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMeshShadows_MetaData[] = {
		{ "Category", "InstancedMeshShapeShadows" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should this Chunk support InstancedMeshShadows? */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should this Chunk support InstancedMeshShadows?" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChunkType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChunkType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BlockTools;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectorCount;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BlockSizeMulti;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkSizeMulti;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GenTemplateDetailLevel;
	static void NewProp_Collision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Collision;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CollisionProfileName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionEnabled;
	static void NewProp_Shadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Shadows;
	static void NewProp_TransparencySupport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TransparencySupport;
	static void NewProp_OptimizeVertexBuffer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OptimizeVertexBuffer;
	static void NewProp_OptimizeIndexBuffer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OptimizeIndexBuffer;
	static void NewProp_RenderChunkBorder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderChunkBorder;
	static void NewProp_RenderInstancedMeshs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderInstancedMeshs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MultiMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugMaterial;
	static void NewProp_InstancedMeshCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InstancedMeshCollision;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InstancedMeshCollisionProfileName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InstancedMeshCollisionEnabled;
	static void NewProp_InstancedMeshShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InstancedMeshShadows;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkDataParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_ChunkType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_ChunkType = { "ChunkType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkDataParams, ChunkType), Z_Construct_UEnum_PorismDIMsWorldGenerator_ChunkTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkType_MetaData), NewProp_ChunkType_MetaData) }; // 2655872078
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_BlockTools = { "BlockTools", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkDataParams, BlockTools), Z_Construct_UClass_UClass, Z_Construct_UClass_UChunkBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockTools_MetaData), NewProp_BlockTools_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_SectorCount = { "SectorCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkDataParams, SectorCount), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectorCount_MetaData), NewProp_SectorCount_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_BlockSizeMulti = { "BlockSizeMulti", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkDataParams, BlockSizeMulti), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockSizeMulti_MetaData), NewProp_BlockSizeMulti_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_ChunkSizeMulti = { "ChunkSizeMulti", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkDataParams, ChunkSizeMulti), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkSizeMulti_MetaData), NewProp_ChunkSizeMulti_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_GenTemplateDetailLevel = { "GenTemplateDetailLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkDataParams, GenTemplateDetailLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenTemplateDetailLevel_MetaData), NewProp_GenTemplateDetailLevel_MetaData) };
void Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_Collision_SetBit(void* Obj)
{
	((FChunkDataParams*)Obj)->Collision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChunkDataParams), &Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_Collision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collision_MetaData), NewProp_Collision_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_CollisionProfileName = { "CollisionProfileName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkDataParams, CollisionProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionProfileName_MetaData), NewProp_CollisionProfileName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_CollisionEnabled = { "CollisionEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkDataParams, CollisionEnabled), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionEnabled_MetaData), NewProp_CollisionEnabled_MetaData) }; // 2362857466
void Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_Shadows_SetBit(void* Obj)
{
	((FChunkDataParams*)Obj)->Shadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_Shadows = { "Shadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChunkDataParams), &Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_Shadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shadows_MetaData), NewProp_Shadows_MetaData) };
void Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_TransparencySupport_SetBit(void* Obj)
{
	((FChunkDataParams*)Obj)->TransparencySupport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_TransparencySupport = { "TransparencySupport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChunkDataParams), &Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_TransparencySupport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransparencySupport_MetaData), NewProp_TransparencySupport_MetaData) };
void Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_OptimizeVertexBuffer_SetBit(void* Obj)
{
	((FChunkDataParams*)Obj)->OptimizeVertexBuffer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_OptimizeVertexBuffer = { "OptimizeVertexBuffer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChunkDataParams), &Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_OptimizeVertexBuffer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptimizeVertexBuffer_MetaData), NewProp_OptimizeVertexBuffer_MetaData) };
void Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_OptimizeIndexBuffer_SetBit(void* Obj)
{
	((FChunkDataParams*)Obj)->OptimizeIndexBuffer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_OptimizeIndexBuffer = { "OptimizeIndexBuffer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChunkDataParams), &Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_OptimizeIndexBuffer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptimizeIndexBuffer_MetaData), NewProp_OptimizeIndexBuffer_MetaData) };
void Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_RenderChunkBorder_SetBit(void* Obj)
{
	((FChunkDataParams*)Obj)->RenderChunkBorder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_RenderChunkBorder = { "RenderChunkBorder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChunkDataParams), &Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_RenderChunkBorder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderChunkBorder_MetaData), NewProp_RenderChunkBorder_MetaData) };
void Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_RenderInstancedMeshs_SetBit(void* Obj)
{
	((FChunkDataParams*)Obj)->RenderInstancedMeshs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_RenderInstancedMeshs = { "RenderInstancedMeshs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChunkDataParams), &Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_RenderInstancedMeshs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderInstancedMeshs_MetaData), NewProp_RenderInstancedMeshs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_MultiMaterial = { "MultiMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkDataParams, MultiMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiMaterial_MetaData), NewProp_MultiMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_DebugMaterial = { "DebugMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkDataParams, DebugMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugMaterial_MetaData), NewProp_DebugMaterial_MetaData) };
void Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_InstancedMeshCollision_SetBit(void* Obj)
{
	((FChunkDataParams*)Obj)->InstancedMeshCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_InstancedMeshCollision = { "InstancedMeshCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChunkDataParams), &Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_InstancedMeshCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedMeshCollision_MetaData), NewProp_InstancedMeshCollision_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_InstancedMeshCollisionProfileName = { "InstancedMeshCollisionProfileName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkDataParams, InstancedMeshCollisionProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedMeshCollisionProfileName_MetaData), NewProp_InstancedMeshCollisionProfileName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_InstancedMeshCollisionEnabled = { "InstancedMeshCollisionEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkDataParams, InstancedMeshCollisionEnabled), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedMeshCollisionEnabled_MetaData), NewProp_InstancedMeshCollisionEnabled_MetaData) }; // 2362857466
void Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_InstancedMeshShadows_SetBit(void* Obj)
{
	((FChunkDataParams*)Obj)->InstancedMeshShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_InstancedMeshShadows = { "InstancedMeshShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChunkDataParams), &Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_InstancedMeshShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedMeshShadows_MetaData), NewProp_InstancedMeshShadows_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChunkDataParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_ChunkType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_ChunkType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_BlockTools,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_SectorCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_BlockSizeMulti,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_ChunkSizeMulti,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_GenTemplateDetailLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_Collision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_CollisionProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_CollisionEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_Shadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_TransparencySupport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_OptimizeVertexBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_OptimizeIndexBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_RenderChunkBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_RenderInstancedMeshs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_MultiMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_DebugMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_InstancedMeshCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_InstancedMeshCollisionProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_InstancedMeshCollisionEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewProp_InstancedMeshShadows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkDataParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChunkDataParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PorismDIMsWorldGenerator,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ChunkDataParams",
	Z_Construct_UScriptStruct_FChunkDataParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkDataParams_Statics::PropPointers),
	sizeof(FChunkDataParams),
	alignof(FChunkDataParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkDataParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChunkDataParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChunkDataParams()
{
	if (!Z_Registration_Info_UScriptStruct_ChunkDataParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChunkDataParams.InnerSingleton, Z_Construct_UScriptStruct_FChunkDataParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChunkDataParams.InnerSingleton;
}
// End ScriptStruct FChunkDataParams

// Begin Enum SurfaceGenType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_SurfaceGenType;
static UEnum* SurfaceGenType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_SurfaceGenType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_SurfaceGenType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PorismDIMsWorldGenerator_SurfaceGenType, (UObject*)Z_Construct_UPackage__Script_PorismDIMsWorldGenerator(), TEXT("SurfaceGenType"));
	}
	return Z_Registration_Info_UEnum_SurfaceGenType.OuterSingleton;
}
template<> PORISMDIMSWORLDGENERATOR_API UEnum* StaticEnum<SurfaceGenType>()
{
	return SurfaceGenType_StaticEnum();
}
struct Z_Construct_UEnum_PorismDIMsWorldGenerator_SurfaceGenType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//----------------------------------------------------------------------//\n" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
		{ "Normal.Comment", "//----------------------------------------------------------------------//\n" },
		{ "Normal.DisplayName", "Normal" },
		{ "Normal.Name", "SurfaceGenType::Normal" },
		{ "OnTopOf.Comment", "//----------------------------------------------------------------------//\n" },
		{ "OnTopOf.DisplayName", "CheckOnTopOf Z-PN" },
		{ "OnTopOf.Name", "SurfaceGenType::OnTopOf" },
		{ "OnTopOfAround.Comment", "//----------------------------------------------------------------------//\n" },
		{ "OnTopOfAround.DisplayName", "CheckOnTopOf Around Point" },
		{ "OnTopOfAround.Name", "SurfaceGenType::OnTopOfAround" },
		{ "TopLayer.Comment", "//----------------------------------------------------------------------//\n" },
		{ "TopLayer.DisplayName", "CheckTopLayer Z-P" },
		{ "TopLayer.Name", "SurfaceGenType::TopLayer" },
		{ "TopLayerAround.Comment", "//----------------------------------------------------------------------//\n" },
		{ "TopLayerAround.DisplayName", "CheckTopLayerAround Point" },
		{ "TopLayerAround.Name", "SurfaceGenType::TopLayerAround" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "SurfaceGenType::Normal", (int64)SurfaceGenType::Normal },
		{ "SurfaceGenType::TopLayer", (int64)SurfaceGenType::TopLayer },
		{ "SurfaceGenType::TopLayerAround", (int64)SurfaceGenType::TopLayerAround },
		{ "SurfaceGenType::OnTopOf", (int64)SurfaceGenType::OnTopOf },
		{ "SurfaceGenType::OnTopOfAround", (int64)SurfaceGenType::OnTopOfAround },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PorismDIMsWorldGenerator_SurfaceGenType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PorismDIMsWorldGenerator,
	nullptr,
	"SurfaceGenType",
	"SurfaceGenType",
	Z_Construct_UEnum_PorismDIMsWorldGenerator_SurfaceGenType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PorismDIMsWorldGenerator_SurfaceGenType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PorismDIMsWorldGenerator_SurfaceGenType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PorismDIMsWorldGenerator_SurfaceGenType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PorismDIMsWorldGenerator_SurfaceGenType()
{
	if (!Z_Registration_Info_UEnum_SurfaceGenType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_SurfaceGenType.InnerSingleton, Z_Construct_UEnum_PorismDIMsWorldGenerator_SurfaceGenType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_SurfaceGenType.InnerSingleton;
}
// End Enum SurfaceGenType

// Begin ScriptStruct FMeshEntry
static_assert(std::is_polymorphic<FMeshEntry>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMeshEntry cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshEntry;
class UScriptStruct* FMeshEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshEntry, (UObject*)Z_Construct_UPackage__Script_PorismDIMsWorldGenerator(), TEXT("MeshEntry"));
	}
	return Z_Registration_Info_UScriptStruct_MeshEntry.OuterSingleton;
}
template<> PORISMDIMSWORLDGENERATOR_API UScriptStruct* StaticStruct<FMeshEntry>()
{
	return FMeshEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeshEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshId_MetaData[] = {
		{ "Category", "MeshEntry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A placeholder to assign the mesh to a BiomeMaterialStep, this is later replaced by an internal number when loading */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A placeholder to assign the mesh to a BiomeMaterialStep, this is later replaced by an internal number when loading" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "MeshEntry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The mesh to be spawned */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The mesh to be spawned" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "MeshEntry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This is the material that surrounds the mesh block, when it is at null it is equivalent to air */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the material that surrounds the mesh block, when it is at null it is equivalent to air" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[] = {
		{ "Category", "MeshEntry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This is the material that surrounds the mesh block, when it is at null it is equivalent to air */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the material that surrounds the mesh block, when it is at null it is equivalent to air" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[] = {
		{ "Category", "MeshManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The InstancedMeshType you want to use */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The InstancedMeshType you want to use" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "MeshTransform (Needs Full Version)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The offset of the mesh, the position is to be regarded as an offset in order to align the mesh with the block */" },
#endif
		{ "EditCondition", "1 == 2" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The offset of the mesh, the position is to be regarded as an offset in order to align the mesh with the block" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateToPoint_MetaData[] = {
		{ "Category", "MeshDirection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Determines whether the mesh should look at a specific point in the coradiant system for example planets */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether the mesh should look at a specific point in the coradiant system for example planets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[] = {
		{ "Category", "MeshDirection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The point to which the mesh should be aligned */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The point to which the mesh should be aligned" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MeshType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static void NewProp_RotateToPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RotateToPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeshEntry_Statics::NewProp_MeshId = { "MeshId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshEntry, MeshId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshId_MetaData), NewProp_MeshId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshEntry_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshEntry, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshEntry_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshEntry, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshEntry_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshEntry, MaterialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialIndex_MetaData), NewProp_MaterialIndex_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMeshEntry_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshEntry, MeshType), Z_Construct_UClass_UClass, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshType_MetaData), NewProp_MeshType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshEntry_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshEntry, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
void Z_Construct_UScriptStruct_FMeshEntry_Statics::NewProp_RotateToPoint_SetBit(void* Obj)
{
	((FMeshEntry*)Obj)->RotateToPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshEntry_Statics::NewProp_RotateToPoint = { "RotateToPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMeshEntry), &Z_Construct_UScriptStruct_FMeshEntry_Statics::NewProp_RotateToPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateToPoint_MetaData), NewProp_RotateToPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshEntry_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshEntry, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point_MetaData), NewProp_Point_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshEntry_Statics::NewProp_MeshId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshEntry_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshEntry_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshEntry_Statics::NewProp_MaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshEntry_Statics::NewProp_MeshType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshEntry_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshEntry_Statics::NewProp_RotateToPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshEntry_Statics::NewProp_Point,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PorismDIMsWorldGenerator,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"MeshEntry",
	Z_Construct_UScriptStruct_FMeshEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshEntry_Statics::PropPointers),
	sizeof(FMeshEntry),
	alignof(FMeshEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeshEntry()
{
	if (!Z_Registration_Info_UScriptStruct_MeshEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshEntry.InnerSingleton, Z_Construct_UScriptStruct_FMeshEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeshEntry.InnerSingleton;
}
// End ScriptStruct FMeshEntry

// Begin ScriptStruct FBiomeMaterialStep
static_assert(std::is_polymorphic<FBiomeMaterialStep>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBiomeMaterialStep cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BiomeMaterialStep;
class UScriptStruct* FBiomeMaterialStep::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BiomeMaterialStep.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BiomeMaterialStep.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBiomeMaterialStep, (UObject*)Z_Construct_UPackage__Script_PorismDIMsWorldGenerator(), TEXT("BiomeMaterialStep"));
	}
	return Z_Registration_Info_UScriptStruct_BiomeMaterialStep.OuterSingleton;
}
template<> PORISMDIMSWORLDGENERATOR_API UScriptStruct* StaticStruct<FBiomeMaterialStep>()
{
	return FBiomeMaterialStep::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "BiomeMaterialStep" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This is the target material for this step */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the target material for this step" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshId_MetaData[] = {
		{ "Category", "BiomeMaterialStep" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** As an alternative to a material, a mesh could also be placed in this step. To do this, simply leave the material at zero and enter one of the IDs defined in \"WorldGenDef\" here. */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "As an alternative to a material, a mesh could also be placed in this step. To do this, simply leave the material at zero and enter one of the IDs defined in \"WorldGenDef\" here." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[] = {
		{ "Category", "BiomeMaterialStep" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** In case you dont want to use different materials for the world generator, you can set this directly */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In case you dont want to use different materials for the world generator, you can set this directly" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenType_MetaData[] = {
		{ "Category", "BiomeMaterialStep" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This allows you to decide what task this step has to fulfill */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This allows you to decide what task this step has to fulfill" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "BiomeMaterialStep" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This is usually a depth indication. The larger the number the more far-reaching the result, if the test was correct */" },
#endif
		{ "EditCondition", "GenType == SurfaceGenType::TopLayer || GenType == SurfaceGenType::TopLayerAround" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is usually a depth indication. The larger the number the more far-reaching the result, if the test was correct" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestRange_MetaData[] = {
		{ "Category", "BiomeMaterialStep" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** In each mode, the tested distance relative to the block pos. Usually the larger the number the more performance the test requires */" },
#endif
		{ "EditCondition", "GenType == SurfaceGenType::TopLayer || GenType == SurfaceGenType::TopLayerAround" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In each mode, the tested distance relative to the block pos. Usually the larger the number the more performance the test requires" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "BiomeMaterialStep" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When in use, the Level can control how strict the check works */" },
#endif
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When in use, the Level can control how strict the check works" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[] = {
		{ "Category", "BiomeMaterialStep" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When in use, this variable usually defines a point in the coordinate system of the generator or a direction */" },
#endif
		{ "EditCondition", "GenType == SurfaceGenType::TopLayerAround || GenType == SurfaceGenType::OnTopOfAround" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When in use, this variable usually defines a point in the coordinate system of the generator or a direction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchMaterial_MetaData[] = {
		{ "Category", "BiomeMaterialStep" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When in use, this variable is the expectet air like material to check null means real air */" },
#endif
		{ "EditCondition", "GenType != SurfaceGenType::Normal" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When in use, this variable is the expectet air like material to check null means real air" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchMeshId_MetaData[] = {
		{ "Category", "BiomeMaterialStep" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When in use, this variable is the expectet air like material to check null means real air */" },
#endif
		{ "EditCondition", "GenType != SurfaceGenType::Normal" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When in use, this variable is the expectet air like material to check null means real air" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchMaterialIndex_MetaData[] = {
		{ "Category", "BiomeMaterialStep" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When in use, this variable is the expectet air like material to check null means real air */" },
#endif
		{ "EditCondition", "GenType != SurfaceGenType::Normal" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When in use, this variable is the expectet air like material to check null means real air" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BubbleGen_MetaData[] = {
		{ "Category", "BiomeMaterialStep" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If not empty, you can use this to specify that the material is only used within the \"bubbles\" zone */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If not empty, you can use this to specify that the material is only used within the \"bubbles\" zone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BubbleGenBP_MetaData[] = {
		{ "Category", "BiomeMaterialStep" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If not empty, you can use this to specify that the material is only used within the \"bubbles\" zone */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If not empty, you can use this to specify that the material is only used within the \"bubbles\" zone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BubbleGenRun_MetaData[] = {
		{ "Category", "BiomeMaterialStep" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If not empty, you can use this to specify that the material is only used within the \"bubbles\" zone */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If not empty, you can use this to specify that the material is only used within the \"bubbles\" zone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnlyOnThis_MetaData[] = {
		{ "Category", "BiomeMaterialStep" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If you fill the array, this step will only overwrite the selected materials (Or the opposite if FlipOnThisArr is active) */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If you fill the array, this step will only overwrite the selected materials (Or the opposite if FlipOnThisArr is active)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnlyOnThisIndex_MetaData[] = {
		{ "Category", "BiomeMaterialStep" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Like materialIndex, in case you only want to work with a index */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Like materialIndex, in case you only want to work with a index" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipOnThisArr_MetaData[] = {
		{ "Category", "BiomeMaterialStep" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If active the array meaning will be fliped to \"never overwrite when\" */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If active the array meaning will be fliped to \"never overwrite when\"" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GenType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GenType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TestRange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SearchMaterial;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SearchMeshId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SearchMaterialIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BubbleGen;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BubbleGenBP;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BubbleGenRun;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnlyOnThis_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OnlyOnThis;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OnlyOnThisIndex_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OnlyOnThisIndex;
	static void NewProp_FlipOnThisArr_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FlipOnThisArr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBiomeMaterialStep>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeMaterialStep, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_MeshId = { "MeshId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeMaterialStep, MeshId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshId_MetaData), NewProp_MeshId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeMaterialStep, MaterialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialIndex_MetaData), NewProp_MaterialIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_GenType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_GenType = { "GenType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeMaterialStep, GenType), Z_Construct_UEnum_PorismDIMsWorldGenerator_SurfaceGenType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenType_MetaData), NewProp_GenType_MetaData) }; // 2021392313
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeMaterialStep, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_TestRange = { "TestRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeMaterialStep, TestRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestRange_MetaData), NewProp_TestRange_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeMaterialStep, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeMaterialStep, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point_MetaData), NewProp_Point_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_SearchMaterial = { "SearchMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeMaterialStep, SearchMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchMaterial_MetaData), NewProp_SearchMaterial_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_SearchMeshId = { "SearchMeshId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeMaterialStep, SearchMeshId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchMeshId_MetaData), NewProp_SearchMeshId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_SearchMaterialIndex = { "SearchMaterialIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeMaterialStep, SearchMaterialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchMaterialIndex_MetaData), NewProp_SearchMaterialIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_BubbleGen = { "BubbleGen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeMaterialStep, BubbleGen), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BubbleGen_MetaData), NewProp_BubbleGen_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_BubbleGenBP = { "BubbleGenBP", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeMaterialStep, BubbleGenBP), Z_Construct_UClass_UClass, Z_Construct_UClass_UFastNoiseEditor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BubbleGenBP_MetaData), NewProp_BubbleGenBP_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_BubbleGenRun = { "BubbleGenRun", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeMaterialStep, BubbleGenRun), Z_Construct_UClass_UFastNoiseEditor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BubbleGenRun_MetaData), NewProp_BubbleGenRun_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_OnlyOnThis_Inner = { "OnlyOnThis", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_OnlyOnThis = { "OnlyOnThis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeMaterialStep, OnlyOnThis), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnlyOnThis_MetaData), NewProp_OnlyOnThis_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_OnlyOnThisIndex_Inner = { "OnlyOnThisIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_OnlyOnThisIndex = { "OnlyOnThisIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeMaterialStep, OnlyOnThisIndex), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnlyOnThisIndex_MetaData), NewProp_OnlyOnThisIndex_MetaData) };
void Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_FlipOnThisArr_SetBit(void* Obj)
{
	((FBiomeMaterialStep*)Obj)->FlipOnThisArr = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_FlipOnThisArr = { "FlipOnThisArr", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBiomeMaterialStep), &Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_FlipOnThisArr_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipOnThisArr_MetaData), NewProp_FlipOnThisArr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_MeshId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_MaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_GenType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_GenType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_TestRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_Point,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_SearchMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_SearchMeshId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_SearchMaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_BubbleGen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_BubbleGenBP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_BubbleGenRun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_OnlyOnThis_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_OnlyOnThis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_OnlyOnThisIndex_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_OnlyOnThisIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewProp_FlipOnThisArr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PorismDIMsWorldGenerator,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"BiomeMaterialStep",
	Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::PropPointers),
	sizeof(FBiomeMaterialStep),
	alignof(FBiomeMaterialStep),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBiomeMaterialStep()
{
	if (!Z_Registration_Info_UScriptStruct_BiomeMaterialStep.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BiomeMaterialStep.InnerSingleton, Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BiomeMaterialStep.InnerSingleton;
}
// End ScriptStruct FBiomeMaterialStep

// Begin ScriptStruct FBiomeDualData
static_assert(std::is_polymorphic<FBiomeDualData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBiomeDualData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BiomeDualData;
class UScriptStruct* FBiomeDualData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BiomeDualData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BiomeDualData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBiomeDualData, (UObject*)Z_Construct_UPackage__Script_PorismDIMsWorldGenerator(), TEXT("BiomeDualData"));
	}
	return Z_Registration_Info_UScriptStruct_BiomeDualData.OuterSingleton;
}
template<> PORISMDIMSWORLDGENERATOR_API UScriptStruct* StaticStruct<FBiomeDualData>()
{
	return FBiomeDualData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBiomeDualData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BiomeHidden_MetaData[] = {
		{ "Category", "Biome Checks (Needs Full Version)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should this biome hidden when generating? Useful for hiding something for testing */" },
#endif
		{ "EditCondition", "1 == 2" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should this biome hidden when generating? Useful for hiding something for testing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Domain_MetaData[] = {
		{ "Category", "Biome Checks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The area in the map in which the generator may be dominant.\n\x09IMPORTANT! This area must be larger than the largest possible Chunk,\n\x09in order to be able to obtain a meaningful result */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The area in the map in which the generator may be dominant.\n      IMPORTANT! This area must be larger than the largest possible Chunk,\n      in order to be able to obtain a meaningful result" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DomainBP_MetaData[] = {
		{ "Category", "Biome Checks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The area in the map in which the generator may be dominant.\n\x09IMPORTANT! This area must be larger than the largest possible Chunk,\n\x09in order to be able to obtain a meaningful result */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The area in the map in which the generator may be dominant.\n      IMPORTANT! This area must be larger than the largest possible Chunk,\n      in order to be able to obtain a meaningful result" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DomainRun_MetaData[] = {
		{ "Category", "Biome Checks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The area in the map in which the generator may be dominant.\n\x09IMPORTANT! This area must be larger than the largest possible Chunk,\n\x09in order to be able to obtain a meaningful result */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The area in the map in which the generator may be dominant.\n      IMPORTANT! This area must be larger than the largest possible Chunk,\n      in order to be able to obtain a meaningful result" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DomainOver_MetaData[] = {
		{ "Category", "Biome Checks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This number defines to which extent this biome overlaps with its neighbors tolerance. 0 would create sharp edges */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This number defines to which extent this biome overlaps with its neighbors tolerance. 0 would create sharp edges" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DualSwitch_MetaData[] = {
		{ "Category", "Shapeing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This generator determines the distribution between GenA and GenB (GenA is positive) */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This generator determines the distribution between GenA and GenB (GenA is positive)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DualSwitchBP_MetaData[] = {
		{ "Category", "Shapeing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This generator determines the distribution between GenA and GenB (GenA is positive) */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This generator determines the distribution between GenA and GenB (GenA is positive)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DualSwitchRun_MetaData[] = {
		{ "Category", "Shapeing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This generator determines the distribution between GenA and GenB (GenA is positive) */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This generator determines the distribution between GenA and GenB (GenA is positive)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenA_MetaData[] = {
		{ "Category", "Shapeing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The first generator */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The first generator" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenABP_MetaData[] = {
		{ "Category", "Shapeing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The first generator */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The first generator" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenARun_MetaData[] = {
		{ "Category", "Shapeing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The first generator */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The first generator" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenB_MetaData[] = {
		{ "Category", "Shapeing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The second generator */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The second generator" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenBBP_MetaData[] = {
		{ "Category", "Shapeing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The second generator */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The second generator" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenBRun_MetaData[] = {
		{ "Category", "Shapeing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The second generator */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The second generator" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwriteWorldOcean_MetaData[] = {
		{ "Category", "Shapepainting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Overwrites the default Ocean setting */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overwrites the default Ocean setting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateOceanFlat_MetaData[] = {
		{ "Category", "Shapepainting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If active, the generator will try to fill everything with \"water\" from a height Z, taking into account certain rules*/" },
#endif
		{ "EditCondition", "OverwriteWorldOcean && !GenerateOceanAroundCenter" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If active, the generator will try to fill everything with \"water\" from a height Z, taking into account certain rules" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateOceanAroundCenter_MetaData[] = {
		{ "Category", "Shapepainting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If active, the generator will try to fill everything with \"water\" from a radius around zero, taking into account certain rules*/" },
#endif
		{ "EditCondition", "OverwriteWorldOcean && !GenerateOceanFlat" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If active, the generator will try to fill everything with \"water\" from a radius around zero, taking into account certain rules" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingOceanHeight_MetaData[] = {
		{ "Category", "Shapepainting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The altitude from which the ocean starts, is normally the Z axis, but can also be viewed from the perspective of a planet*/" },
#endif
		{ "EditCondition", "OverwriteWorldOcean && ( GenerateOceanFlat || GenerateOceanAroundCenter )" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The altitude from which the ocean starts, is normally the Z axis, but can also be viewed from the perspective of a planet" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespectAirBubblesOcean_MetaData[] = {
		{ "Category", "PLANNED Shapepainting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If active, the generator will try to detect cavities and not fill them if they are cut off from the surface and the ocean,\n\x09taking into account the direction of flow, with a significant additional effort*/" },
#endif
		{ "EditCondition", "OverwriteWorldOcean && ( GenerateOceanFlat || GenerateOceanAroundCenter )" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If active, the generator will try to detect cavities and not fill them if they are cut off from the surface and the ocean,\n      taking into account the direction of flow, with a significant additional effort" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumOceanCavityExpansion_MetaData[] = {
		{ "Category", "Shapepainting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is used to determine a cavity, areas that are not in contact with the surface and do not exceed the specified block distance are interpreted as a cavity\n\x09without liquid everything that is larger is filled despite a suitable structure.\n\x09""Attention this entry has an enormous effect on the performance when generating*/" },
#endif
		{ "EditCondition", "OverwriteWorldOcean && RespectAirBubblesOcean && ( GenerateOceanFlat || GenerateOceanAroundCenter )" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is used to determine a cavity, areas that are not in contact with the surface and do not exceed the specified block distance are interpreted as a cavity\n      without liquid everything that is larger is filled despite a suitable structure.\n      Attention this entry has an enormous effect on the performance when generating" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanMaterial_MetaData[] = {
		{ "Category", "Shapepainting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This material is used by the generator to fill an ocean area*/" },
#endif
		{ "EditCondition", "OverwriteWorldOcean && ( GenerateOceanFlat || GenerateOceanAroundCenter )" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This material is used by the generator to fill an ocean area" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanMaterialIndex_MetaData[] = {
		{ "Category", "Shapepainting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This material is used by the generator to fill an ocean area*/" },
#endif
		{ "EditCondition", "OverwriteWorldOcean && ( GenerateOceanFlat || GenerateOceanAroundCenter )" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This material is used by the generator to fill an ocean area" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanCenter_MetaData[] = {
		{ "Category", "Shapepainting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This material is used by the generator to fill an ocean area*/" },
#endif
		{ "EditCondition", "OverwriteWorldOcean && ( GenerateOceanAroundCenter )" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This material is used by the generator to fill an ocean area" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Overlap_MetaData[] = {
		{ "Category", "Shapeing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This number determines by how much DualSwitch comes over its edges in both directions, e.g.\nA = 0.05, B = -0.05 -> A = 0.15, B = 0.05\nMeans that both are above 0 and are generated, whereby A is more dominant than B */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This number determines by how much DualSwitch comes over its edges in both directions, e.g.\nA = 0.05, B = -0.05 -> A = 0.15, B = 0.05\nMeans that both are above 0 and are generated, whereby A is more dominant than B" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenUMaterials_MetaData[] = {
		{ "Category", "Painting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Universal generator materials */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Universal generator materials" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenAMaterials_MetaData[] = {
		{ "Category", "Painting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The first generator materials */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The first generator materials" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenBMaterials_MetaData[] = {
		{ "Category", "Painting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The second generator materials */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The second generator materials" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_BiomeHidden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BiomeHidden;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Domain;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DomainBP;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DomainRun;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DomainOver;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DualSwitch;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DualSwitchBP;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DualSwitchRun;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GenA;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GenABP;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GenARun;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GenB;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GenBBP;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GenBRun;
	static void NewProp_OverwriteWorldOcean_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OverwriteWorldOcean;
	static void NewProp_GenerateOceanFlat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GenerateOceanFlat;
	static void NewProp_GenerateOceanAroundCenter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GenerateOceanAroundCenter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartingOceanHeight;
	static void NewProp_RespectAirBubblesOcean_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RespectAirBubblesOcean;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaximumOceanCavityExpansion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OceanMaterial;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OceanMaterialIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OceanCenter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Overlap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GenUMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GenUMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GenAMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GenAMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GenBMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GenBMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBiomeDualData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_BiomeHidden_SetBit(void* Obj)
{
	((FBiomeDualData*)Obj)->BiomeHidden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_BiomeHidden = { "BiomeHidden", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBiomeDualData), &Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_BiomeHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BiomeHidden_MetaData), NewProp_BiomeHidden_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_Domain = { "Domain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeDualData, Domain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Domain_MetaData), NewProp_Domain_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_DomainBP = { "DomainBP", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeDualData, DomainBP), Z_Construct_UClass_UClass, Z_Construct_UClass_UFastNoiseEditor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DomainBP_MetaData), NewProp_DomainBP_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_DomainRun = { "DomainRun", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeDualData, DomainRun), Z_Construct_UClass_UFastNoiseEditor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DomainRun_MetaData), NewProp_DomainRun_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_DomainOver = { "DomainOver", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeDualData, DomainOver), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DomainOver_MetaData), NewProp_DomainOver_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_DualSwitch = { "DualSwitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeDualData, DualSwitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DualSwitch_MetaData), NewProp_DualSwitch_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_DualSwitchBP = { "DualSwitchBP", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeDualData, DualSwitchBP), Z_Construct_UClass_UClass, Z_Construct_UClass_UFastNoiseEditor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DualSwitchBP_MetaData), NewProp_DualSwitchBP_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_DualSwitchRun = { "DualSwitchRun", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeDualData, DualSwitchRun), Z_Construct_UClass_UFastNoiseEditor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DualSwitchRun_MetaData), NewProp_DualSwitchRun_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenA = { "GenA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeDualData, GenA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenA_MetaData), NewProp_GenA_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenABP = { "GenABP", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeDualData, GenABP), Z_Construct_UClass_UClass, Z_Construct_UClass_UFastNoiseEditor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenABP_MetaData), NewProp_GenABP_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenARun = { "GenARun", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeDualData, GenARun), Z_Construct_UClass_UFastNoiseEditor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenARun_MetaData), NewProp_GenARun_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenB = { "GenB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeDualData, GenB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenB_MetaData), NewProp_GenB_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenBBP = { "GenBBP", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeDualData, GenBBP), Z_Construct_UClass_UClass, Z_Construct_UClass_UFastNoiseEditor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenBBP_MetaData), NewProp_GenBBP_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenBRun = { "GenBRun", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeDualData, GenBRun), Z_Construct_UClass_UFastNoiseEditor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenBRun_MetaData), NewProp_GenBRun_MetaData) };
void Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_OverwriteWorldOcean_SetBit(void* Obj)
{
	((FBiomeDualData*)Obj)->OverwriteWorldOcean = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_OverwriteWorldOcean = { "OverwriteWorldOcean", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBiomeDualData), &Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_OverwriteWorldOcean_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwriteWorldOcean_MetaData), NewProp_OverwriteWorldOcean_MetaData) };
void Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenerateOceanFlat_SetBit(void* Obj)
{
	((FBiomeDualData*)Obj)->GenerateOceanFlat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenerateOceanFlat = { "GenerateOceanFlat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBiomeDualData), &Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenerateOceanFlat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateOceanFlat_MetaData), NewProp_GenerateOceanFlat_MetaData) };
void Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenerateOceanAroundCenter_SetBit(void* Obj)
{
	((FBiomeDualData*)Obj)->GenerateOceanAroundCenter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenerateOceanAroundCenter = { "GenerateOceanAroundCenter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBiomeDualData), &Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenerateOceanAroundCenter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateOceanAroundCenter_MetaData), NewProp_GenerateOceanAroundCenter_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_StartingOceanHeight = { "StartingOceanHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeDualData, StartingOceanHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingOceanHeight_MetaData), NewProp_StartingOceanHeight_MetaData) };
void Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_RespectAirBubblesOcean_SetBit(void* Obj)
{
	((FBiomeDualData*)Obj)->RespectAirBubblesOcean = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_RespectAirBubblesOcean = { "RespectAirBubblesOcean", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBiomeDualData), &Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_RespectAirBubblesOcean_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespectAirBubblesOcean_MetaData), NewProp_RespectAirBubblesOcean_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_MaximumOceanCavityExpansion = { "MaximumOceanCavityExpansion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeDualData, MaximumOceanCavityExpansion), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumOceanCavityExpansion_MetaData), NewProp_MaximumOceanCavityExpansion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_OceanMaterial = { "OceanMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeDualData, OceanMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanMaterial_MetaData), NewProp_OceanMaterial_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_OceanMaterialIndex = { "OceanMaterialIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeDualData, OceanMaterialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanMaterialIndex_MetaData), NewProp_OceanMaterialIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_OceanCenter = { "OceanCenter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeDualData, OceanCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanCenter_MetaData), NewProp_OceanCenter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_Overlap = { "Overlap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeDualData, Overlap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Overlap_MetaData), NewProp_Overlap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenUMaterials_Inner = { "GenUMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBiomeMaterialStep, METADATA_PARAMS(0, nullptr) }; // 1119448884
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenUMaterials = { "GenUMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeDualData, GenUMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenUMaterials_MetaData), NewProp_GenUMaterials_MetaData) }; // 1119448884
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenAMaterials_Inner = { "GenAMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBiomeMaterialStep, METADATA_PARAMS(0, nullptr) }; // 1119448884
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenAMaterials = { "GenAMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeDualData, GenAMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenAMaterials_MetaData), NewProp_GenAMaterials_MetaData) }; // 1119448884
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenBMaterials_Inner = { "GenBMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBiomeMaterialStep, METADATA_PARAMS(0, nullptr) }; // 1119448884
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenBMaterials = { "GenBMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeDualData, GenBMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenBMaterials_MetaData), NewProp_GenBMaterials_MetaData) }; // 1119448884
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBiomeDualData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_BiomeHidden,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_Domain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_DomainBP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_DomainRun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_DomainOver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_DualSwitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_DualSwitchBP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_DualSwitchRun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenABP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenARun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenBBP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenBRun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_OverwriteWorldOcean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenerateOceanFlat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenerateOceanAroundCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_StartingOceanHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_RespectAirBubblesOcean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_MaximumOceanCavityExpansion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_OceanMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_OceanMaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_OceanCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_Overlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenUMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenUMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenAMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenAMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenBMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewProp_GenBMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBiomeDualData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBiomeDualData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PorismDIMsWorldGenerator,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"BiomeDualData",
	Z_Construct_UScriptStruct_FBiomeDualData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBiomeDualData_Statics::PropPointers),
	sizeof(FBiomeDualData),
	alignof(FBiomeDualData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBiomeDualData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBiomeDualData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBiomeDualData()
{
	if (!Z_Registration_Info_UScriptStruct_BiomeDualData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BiomeDualData.InnerSingleton, Z_Construct_UScriptStruct_FBiomeDualData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BiomeDualData.InnerSingleton;
}
// End ScriptStruct FBiomeDualData

// Begin Enum AxisBehavior
static FEnumRegistrationInfo Z_Registration_Info_UEnum_AxisBehavior;
static UEnum* AxisBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_AxisBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_AxisBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PorismDIMsWorldGenerator_AxisBehavior, (UObject*)Z_Construct_UPackage__Script_PorismDIMsWorldGenerator(), TEXT("AxisBehavior"));
	}
	return Z_Registration_Info_UEnum_AxisBehavior.OuterSingleton;
}
template<> PORISMDIMSWORLDGENERATOR_API UEnum* StaticEnum<AxisBehavior>()
{
	return AxisBehavior_StaticEnum();
}
struct Z_Construct_UEnum_PorismDIMsWorldGenerator_AxisBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Infinity.DisplayName", "Infinity" },
		{ "Infinity.Name", "AxisBehavior::Infinity" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
		{ "SingleChunk.DisplayName", "SingleChunk" },
		{ "SingleChunk.Name", "AxisBehavior::SingleChunk" },
		{ "ZeroOrientation.DisplayName", "ZeroOrientation" },
		{ "ZeroOrientation.Name", "AxisBehavior::ZeroOrientation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AxisBehavior::Infinity", (int64)AxisBehavior::Infinity },
		{ "AxisBehavior::ZeroOrientation", (int64)AxisBehavior::ZeroOrientation },
		{ "AxisBehavior::SingleChunk", (int64)AxisBehavior::SingleChunk },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PorismDIMsWorldGenerator_AxisBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PorismDIMsWorldGenerator,
	nullptr,
	"AxisBehavior",
	"AxisBehavior",
	Z_Construct_UEnum_PorismDIMsWorldGenerator_AxisBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PorismDIMsWorldGenerator_AxisBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PorismDIMsWorldGenerator_AxisBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PorismDIMsWorldGenerator_AxisBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PorismDIMsWorldGenerator_AxisBehavior()
{
	if (!Z_Registration_Info_UEnum_AxisBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AxisBehavior.InnerSingleton, Z_Construct_UEnum_PorismDIMsWorldGenerator_AxisBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_AxisBehavior.InnerSingleton;
}
// End Enum AxisBehavior

// Begin ScriptStruct FMaterialDef
static_assert(std::is_polymorphic<FMaterialDef>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMaterialDef cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialDef;
class UScriptStruct* FMaterialDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialDef, (UObject*)Z_Construct_UPackage__Script_PorismDIMsWorldGenerator(), TEXT("MaterialDef"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialDef.OuterSingleton;
}
template<> PORISMDIMSWORLDGENERATOR_API UScriptStruct* StaticStruct<FMaterialDef>()
{
	return FMaterialDef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialDef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "MaterialDef" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The to be configurated material */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The to be configurated material" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[] = {
		{ "Category", "MaterialDef" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The to be configurated material index */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The to be configurated material index" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportTransparency_MetaData[] = {
		{ "Category", "MaterialDef" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Will enable the generator to generate extra poylgons required for transparency */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will enable the generator to generate extra poylgons required for transparency" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileName_MetaData[] = {
		{ "Category", "MaterialDef" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collision profile to use */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision profile to use" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionEnabled_MetaData[] = {
		{ "Category", "MaterialDef" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collision type */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision type" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
	static void NewProp_SupportTransparency_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SupportTransparency;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CollisionProfileName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialDef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialDef_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialDef, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialDef_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialDef, MaterialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialIndex_MetaData), NewProp_MaterialIndex_MetaData) };
void Z_Construct_UScriptStruct_FMaterialDef_Statics::NewProp_SupportTransparency_SetBit(void* Obj)
{
	((FMaterialDef*)Obj)->SupportTransparency = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialDef_Statics::NewProp_SupportTransparency = { "SupportTransparency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMaterialDef), &Z_Construct_UScriptStruct_FMaterialDef_Statics::NewProp_SupportTransparency_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportTransparency_MetaData), NewProp_SupportTransparency_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMaterialDef_Statics::NewProp_CollisionProfileName = { "CollisionProfileName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialDef, CollisionProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionProfileName_MetaData), NewProp_CollisionProfileName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaterialDef_Statics::NewProp_CollisionEnabled = { "CollisionEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialDef, CollisionEnabled), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionEnabled_MetaData), NewProp_CollisionEnabled_MetaData) }; // 2362857466
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialDef_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialDef_Statics::NewProp_MaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialDef_Statics::NewProp_SupportTransparency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialDef_Statics::NewProp_CollisionProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialDef_Statics::NewProp_CollisionEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialDef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialDef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PorismDIMsWorldGenerator,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"MaterialDef",
	Z_Construct_UScriptStruct_FMaterialDef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialDef_Statics::PropPointers),
	sizeof(FMaterialDef),
	alignof(FMaterialDef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialDef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialDef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialDef()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialDef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialDef.InnerSingleton, Z_Construct_UScriptStruct_FMaterialDef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialDef.InnerSingleton;
}
// End ScriptStruct FMaterialDef

// Begin Class UWorldGenDef
void UWorldGenDef::StaticRegisterNativesUWorldGenDef()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldGenDef);
UClass* Z_Construct_UClass_UWorldGenDef_NoRegister()
{
	return UWorldGenDef::StaticClass();
}
struct Z_Construct_UClass_UWorldGenDef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The configuration of the generator is inserted here. Please do not change or edit it while the generator is running. Almost all changes to the generator will\ndamage the save and cache data, regardless of the generator state and should therefore not be edited in the game release version.\nA converter will be implemented for updating the saveFile in order to be able to implement various extensions and format changes*/" },
#endif
		{ "IncludePath", "ChunkWorldStructs.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The configuration of the generator is inserted here. Please do not change or edit it while the generator is running. Almost all changes to the generator will\ndamage the save and cache data, regardless of the generator state and should therefore not be edited in the game release version.\nA converter will be implemented for updating the saveFile in order to be able to implement various extensions and format changes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldBiomesDT_MetaData[] = {
		{ "Category", "Biome Checks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please bind here your DataTable for the generator instructions (FBiomeDualData) */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please bind here your DataTable for the generator instructions (FBiomeDualData)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldBiomes_MetaData[] = {
		{ "Category", "Biome Checks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add here your Biomes for the generator instructions (FBiomeDualData) */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add here your Biomes for the generator instructions (FBiomeDualData)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldBiomeOffsetX_MetaData[] = {
		{ "Category", "Biome Checks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A generator to define a global biome offset on the X axis. It changes the X input when determining the biome.\n\x09It is best to leave the field empty if you have no biomes or the biome X is infinite */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A generator to define a global biome offset on the X axis. It changes the X input when determining the biome.\n      It is best to leave the field empty if you have no biomes or the biome X is infinite" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldBiomeOffsetXBP_MetaData[] = {
		{ "Category", "Biome Checks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A generator to define a global biome offset on the X axis. It changes the X input when determining the biome.\n\x09It is best to leave the field empty if you have no biomes or the biome X is infinite*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A generator to define a global biome offset on the X axis. It changes the X input when determining the biome.\n      It is best to leave the field empty if you have no biomes or the biome X is infinite" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldBiomeOffsetXRun_MetaData[] = {
		{ "Category", "Biome Checks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A generator to define a global biome offset on the X axis. It changes the X input when determining the biome.\n\x09It is best to leave the field empty if you have no biomes or the biome X is infinite*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A generator to define a global biome offset on the X axis. It changes the X input when determining the biome.\n      It is best to leave the field empty if you have no biomes or the biome X is infinite" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldBiomeOffsetY_MetaData[] = {
		{ "Category", "Biome Checks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A generator to define a global biome offset on the Y axis. It changes the Y input when determining the biome.\n\x09It is best to leave the field empty if you have no biomes or the biome Y is infinite */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A generator to define a global biome offset on the Y axis. It changes the Y input when determining the biome.\n      It is best to leave the field empty if you have no biomes or the biome Y is infinite" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldBiomeOffsetYBP_MetaData[] = {
		{ "Category", "Biome Checks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A generator to define a global biome offset on the Y axis. It changes the Y input when determining the biome.\n\x09It is best to leave the field empty if you have no biomes or the biome Y is infinite*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A generator to define a global biome offset on the Y axis. It changes the Y input when determining the biome.\n      It is best to leave the field empty if you have no biomes or the biome Y is infinite" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldBiomeOffsetYRun_MetaData[] = {
		{ "Category", "Biome Checks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A generator to define a global biome offset on the Y axis. It changes the Y input when determining the biome.\n\x09It is best to leave the field empty if you have no biomes or the biome Y is infinite*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A generator to define a global biome offset on the Y axis. It changes the Y input when determining the biome.\n      It is best to leave the field empty if you have no biomes or the biome Y is infinite" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldBiomeOffsetZ_MetaData[] = {
		{ "Category", "Biome Checks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A generator to define a global biome offset on the Z axis. It changes the Z input when determining the biome.\n\x09It is best to leave the field empty if you have no biomes or the biome Z is infinite */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A generator to define a global biome offset on the Z axis. It changes the Z input when determining the biome.\n      It is best to leave the field empty if you have no biomes or the biome Z is infinite" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldBiomeOffsetZBP_MetaData[] = {
		{ "Category", "Biome Checks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A generator to define a global biome offset on the Z axis. It changes the Z input when determining the biome.\n\x09It is best to leave the field empty if you have no biomes or the biome Z is infinite*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A generator to define a global biome offset on the Z axis. It changes the Z input when determining the biome.\n      It is best to leave the field empty if you have no biomes or the biome Z is infinite" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldBiomeOffsetZRun_MetaData[] = {
		{ "Category", "Biome Checks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A generator to define a global biome offset on the Z axis. It changes the Z input when determining the biome.\n\x09It is best to leave the field empty if you have no biomes or the biome Z is infinite*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A generator to define a global biome offset on the Z axis. It changes the Z input when determining the biome.\n      It is best to leave the field empty if you have no biomes or the biome Z is infinite" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldChunksDT_MetaData[] = {
		{ "Category", "Chunk Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please bind here your DataTable for the Chunk instructions (FChunkDataParams) */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please bind here your DataTable for the Chunk instructions (FChunkDataParams)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkBlockSize_MetaData[] = {
		{ "Category", "Chunk Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blocks per Chunk */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blocks per Chunk" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseBlockSize_MetaData[] = {
		{ "Category", "Chunk Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Visual block size */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visual block size" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisBehaviorX_MetaData[] = {
		{ "Category", "Chunk Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This allows you to decide how the generator should create the Chunks on this axis. Infinity will generate chunks for each registered actor. ZeroOrientation generates the set distance only\n\x09""at the zero point. SingleChunk only generates a single Chunk for this axis at the zero point. */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This allows you to decide how the generator should create the Chunks on this axis. Infinity will generate chunks for each registered actor. ZeroOrientation generates the set distance only\n      at the zero point. SingleChunk only generates a single Chunk for this axis at the zero point." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisBehaviorY_MetaData[] = {
		{ "Category", "Chunk Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This allows you to decide how the generator should create the chunks on this axis. Infinity will generate chunks for each registered actor. ZeroOrientation generates the set distance only\n\x09""at the zero point. SingleChunk only generates a single chunk for this axis at the zero point. */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This allows you to decide how the generator should create the chunks on this axis. Infinity will generate chunks for each registered actor. ZeroOrientation generates the set distance only\n      at the zero point. SingleChunk only generates a single chunk for this axis at the zero point." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisBehaviorZ_MetaData[] = {
		{ "Category", "Chunk Behavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This allows you to decide how the generator should create the chunks on this axis. Infinity will generate chunks for each registered actor. ZeroOrientation generates the set distance only\n\x09""at the zero point. SingleChunk only generates a single chunk for this axis at the zero point. */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This allows you to decide how the generator should create the chunks on this axis. Infinity will generate chunks for each registered actor. ZeroOrientation generates the set distance only\n      at the zero point. SingleChunk only generates a single chunk for this axis at the zero point." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenOnlyTest_MetaData[] = {
		{ "Category", "Shapeing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A quick way to simulate a single noise. If this value is filled, all other settings are ignored in order to test the entered noise. */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A quick way to simulate a single noise. If this value is filled, all other settings are ignored in order to test the entered noise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenOnlyTestBP_MetaData[] = {
		{ "Category", "Shapeing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A quick way to simulate a single noise. If this value is filled, all other settings are ignored in order to test the entered noise. */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A quick way to simulate a single noise. If this value is filled, all other settings are ignored in order to test the entered noise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenOnlyTestRun_MetaData[] = {
		{ "Category", "Shapeing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A quick way to simulate a single noise. If this value is filled, all other settings are ignored in order to test the entered noise. */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A quick way to simulate a single noise. If this value is filled, all other settings are ignored in order to test the entered noise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldGen_MetaData[] = {
		{ "Category", "Shapeing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The primary generator, with which height displacements can be defined, regarding the entire map\n\x09""Best left empty if you want to control everything via the biomes. As an example of use, think of deep seas, huge cave systems, asteroids, mountains or floating islands*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The primary generator, with which height displacements can be defined, regarding the entire map\n      Best left empty if you want to control everything via the biomes. As an example of use, think of deep seas, huge cave systems, asteroids, mountains or floating islands" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldGenBP_MetaData[] = {
		{ "Category", "Shapeing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The primary generator, with which height displacements can be defined, regarding the entire map\n\x09""Best left empty if you want to control everything via the biomes. As an example of use, think of deep seas, huge cave systems, asteroids, mountains or floating islands*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The primary generator, with which height displacements can be defined, regarding the entire map\n      Best left empty if you want to control everything via the biomes. As an example of use, think of deep seas, huge cave systems, asteroids, mountains or floating islands" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldGenRun_MetaData[] = {
		{ "Category", "Shapeing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The primary generator, with which height displacements can be defined, regarding the entire map\n\x09""Best left empty if you want to control everything via the biomes. As an example of use, think of deep seas, huge cave systems, asteroids, mountains or floating islands*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The primary generator, with which height displacements can be defined, regarding the entire map\n      Best left empty if you want to control everything via the biomes. As an example of use, think of deep seas, huge cave systems, asteroids, mountains or floating islands" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseScale_MetaData[] = {
		{ "Category", "Shapeing (Needs Full Version)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gives the possibility to edit the input coordinates to the noise generator, in combination with the actor scale you can then edit the block density on an axis \n\x09without having to change the noise command */" },
#endif
		{ "EditCondition", "1 == 2" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gives the possibility to edit the input coordinates to the noise generator, in combination with the actor scale you can then edit the block density on an axis\n      without having to change the noise command" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateOceanFlat_MetaData[] = {
		{ "Category", "Shapepainting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If active, the generator will try to fill everything with \"water\" from a height Z, taking into account certain rules*/" },
#endif
		{ "EditCondition", "!GenerateOceanAroundCenter" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If active, the generator will try to fill everything with \"water\" from a height Z, taking into account certain rules" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateOceanAroundCenter_MetaData[] = {
		{ "Category", "Shapepainting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If active, the generator will try to fill everything with \"water\" from a radius around zero, taking into account certain rules*/" },
#endif
		{ "EditCondition", "!GenerateOceanFlat" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If active, the generator will try to fill everything with \"water\" from a radius around zero, taking into account certain rules" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingOceanHeight_MetaData[] = {
		{ "Category", "Shapepainting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The altitude from which the ocean starts, is normally the Z axis, but can also be viewed from the perspective of a planet*/" },
#endif
		{ "EditCondition", "GenerateOceanFlat || GenerateOceanAroundCenter" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The altitude from which the ocean starts, is normally the Z axis, but can also be viewed from the perspective of a planet" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespectAirBubblesOcean_MetaData[] = {
		{ "Category", "PLANNED Shapepainting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If active, the generator will try to detect cavities and not fill them if they are cut off from the surface and the ocean, \n\x09taking into account the direction of flow, with a significant additional effort*/" },
#endif
		{ "EditCondition", "GenerateOceanFlat || GenerateOceanAroundCenter" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If active, the generator will try to detect cavities and not fill them if they are cut off from the surface and the ocean,\n      taking into account the direction of flow, with a significant additional effort" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumOceanCavityExpansion_MetaData[] = {
		{ "Category", "Shapepainting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is used to determine a cavity, areas that are not in contact with the surface and do not exceed the specified block distance are interpreted as a cavity \n\x09without liquid everything that is larger is filled despite a suitable structure.\n\x09""Attention this entry has an enormous effect on the performance when generating*/" },
#endif
		{ "EditCondition", "RespectAirBubblesOcean && ( GenerateOceanFlat || GenerateOceanAroundCenter )" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is used to determine a cavity, areas that are not in contact with the surface and do not exceed the specified block distance are interpreted as a cavity\n      without liquid everything that is larger is filled despite a suitable structure.\n      Attention this entry has an enormous effect on the performance when generating" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanDefaultMaterial_MetaData[] = {
		{ "Category", "Shapepainting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This material is normally used by the generator to fill an ocean area, but it can also be overwritten by a biome*/" },
#endif
		{ "EditCondition", "GenerateOceanFlat || GenerateOceanAroundCenter" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This material is normally used by the generator to fill an ocean area, but it can also be overwritten by a biome" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanDefaultMaterialIndex_MetaData[] = {
		{ "Category", "Shapepainting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This material is normally used by the generator to fill an ocean area, but it can also be overwritten by a biome*/" },
#endif
		{ "EditCondition", "GenerateOceanFlat || GenerateOceanAroundCenter" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This material is normally used by the generator to fill an ocean area, but it can also be overwritten by a biome" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldMaterials_MetaData[] = {
		{ "Category", "DEPRECATED" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** You can use this to set the materials you want to use in the generator. Please remember that the order is important for your save data. Please call it before the generator starts!\n\x09If not called, the generator will improvise with the materials it finds in the instruction set, but this is not a good solution for terraforming, modding or early access.\n\x09Please also note that you will need to add all materials that are used in the generator to this list, otherwise the generator will crash!\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "You can use this to set the materials you want to use in the generator. Please remember that the order is important for your save data. Please call it before the generator starts!\n      If not called, the generator will improvise with the materials it finds in the instruction set, but this is not a good solution for terraforming, modding or early access.\n      Please also note that you will need to add all materials that are used in the generator to this list, otherwise the generator will crash!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnlyTransparentUsage_MetaData[] = {
		{ "Category", "Painting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Will set WorldMaterialDefs to only transparent materials. Recommended if a list is not preferred, but needed for transperrancy.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will set WorldMaterialDefs to only transparent materials. Recommended if a list is not preferred, but needed for transperrancy." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldMaterialDefs_MetaData[] = {
		{ "Category", "Painting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** You can use this to set the materials you want to use in the generator. Please remember that the order is important for your save data. Please call it before the generator starts!\n\x09If not called, the generator will improvise with the materials it finds in the instruction set, but this is not a good solution for terraforming, modding or early access.\n\x09Please also note that if OnlyTransparentUsage is enabled, you will only need to add the transperant materials to this list, otherwise you will need to add all or no materials.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "You can use this to set the materials you want to use in the generator. Please remember that the order is important for your save data. Please call it before the generator starts!\n      If not called, the generator will improvise with the materials it finds in the instruction set, but this is not a good solution for terraforming, modding or early access.\n      Please also note that if OnlyTransparentUsage is enabled, you will only need to add the transperant materials to this list, otherwise you will need to add all or no materials." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldMeshes_MetaData[] = {
		{ "Category", "Painting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** In this list you can configure meshes that should be used by the generator later, please note that the order is important, changes to this could lead to problems with the save data\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In this list you can configure meshes that should be used by the generator later, please note that the order is important, changes to this could lead to problems with the save data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransparentMaterials_MetaData[] = {
		{ "Category", "DEPRECATED" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If you are working with several materials, here is the place where you have to insert everything that is transparent */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If you are working with several materials, here is the place where you have to insert everything that is transparent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransparentMaterialIndexs_MetaData[] = {
		{ "Category", "DEPRECATED" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If you are only working with one multi material, you can store all transparent indexes here. Attention! TransparentMaterials should be empty, otherwise it will overwrite this list */" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If you are only working with one multi material, you can store all transparent indexes here. Attention! TransparentMaterials should be empty, otherwise it will overwrite this list" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldBiomesDT;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldBiomes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldBiomes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WorldBiomeOffsetX;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WorldBiomeOffsetXBP;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldBiomeOffsetXRun;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WorldBiomeOffsetY;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WorldBiomeOffsetYBP;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldBiomeOffsetYRun;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WorldBiomeOffsetZ;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WorldBiomeOffsetZBP;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldBiomeOffsetZRun;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldChunksDT;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkBlockSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BaseBlockSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AxisBehaviorX_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AxisBehaviorX;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AxisBehaviorY_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AxisBehaviorY;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AxisBehaviorZ_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AxisBehaviorZ;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GenOnlyTest;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GenOnlyTestBP;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GenOnlyTestRun;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WorldGen;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WorldGenBP;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldGenRun;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseScale;
	static void NewProp_GenerateOceanFlat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GenerateOceanFlat;
	static void NewProp_GenerateOceanAroundCenter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GenerateOceanAroundCenter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartingOceanHeight;
	static void NewProp_RespectAirBubblesOcean_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RespectAirBubblesOcean;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaximumOceanCavityExpansion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OceanDefaultMaterial;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OceanDefaultMaterialIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldMaterials;
	static void NewProp_OnlyTransparentUsage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyTransparentUsage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldMaterialDefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldMaterialDefs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldMeshes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransparentMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TransparentMaterials;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TransparentMaterialIndexs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TransparentMaterialIndexs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldGenDef>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldBiomesDT = { "WorldBiomesDT", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, WorldBiomesDT), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldBiomesDT_MetaData), NewProp_WorldBiomesDT_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldBiomes_Inner = { "WorldBiomes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBiomeDualData, METADATA_PARAMS(0, nullptr) }; // 149369653
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldBiomes = { "WorldBiomes", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, WorldBiomes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldBiomes_MetaData), NewProp_WorldBiomes_MetaData) }; // 149369653
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldBiomeOffsetX = { "WorldBiomeOffsetX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, WorldBiomeOffsetX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldBiomeOffsetX_MetaData), NewProp_WorldBiomeOffsetX_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldBiomeOffsetXBP = { "WorldBiomeOffsetXBP", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, WorldBiomeOffsetXBP), Z_Construct_UClass_UClass, Z_Construct_UClass_UFastNoiseEditor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldBiomeOffsetXBP_MetaData), NewProp_WorldBiomeOffsetXBP_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldBiomeOffsetXRun = { "WorldBiomeOffsetXRun", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, WorldBiomeOffsetXRun), Z_Construct_UClass_UFastNoiseEditor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldBiomeOffsetXRun_MetaData), NewProp_WorldBiomeOffsetXRun_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldBiomeOffsetY = { "WorldBiomeOffsetY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, WorldBiomeOffsetY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldBiomeOffsetY_MetaData), NewProp_WorldBiomeOffsetY_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldBiomeOffsetYBP = { "WorldBiomeOffsetYBP", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, WorldBiomeOffsetYBP), Z_Construct_UClass_UClass, Z_Construct_UClass_UFastNoiseEditor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldBiomeOffsetYBP_MetaData), NewProp_WorldBiomeOffsetYBP_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldBiomeOffsetYRun = { "WorldBiomeOffsetYRun", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, WorldBiomeOffsetYRun), Z_Construct_UClass_UFastNoiseEditor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldBiomeOffsetYRun_MetaData), NewProp_WorldBiomeOffsetYRun_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldBiomeOffsetZ = { "WorldBiomeOffsetZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, WorldBiomeOffsetZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldBiomeOffsetZ_MetaData), NewProp_WorldBiomeOffsetZ_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldBiomeOffsetZBP = { "WorldBiomeOffsetZBP", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, WorldBiomeOffsetZBP), Z_Construct_UClass_UClass, Z_Construct_UClass_UFastNoiseEditor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldBiomeOffsetZBP_MetaData), NewProp_WorldBiomeOffsetZBP_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldBiomeOffsetZRun = { "WorldBiomeOffsetZRun", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, WorldBiomeOffsetZRun), Z_Construct_UClass_UFastNoiseEditor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldBiomeOffsetZRun_MetaData), NewProp_WorldBiomeOffsetZRun_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldChunksDT = { "WorldChunksDT", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, WorldChunksDT), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldChunksDT_MetaData), NewProp_WorldChunksDT_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_ChunkBlockSize = { "ChunkBlockSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, ChunkBlockSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkBlockSize_MetaData), NewProp_ChunkBlockSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_BaseBlockSize = { "BaseBlockSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, BaseBlockSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseBlockSize_MetaData), NewProp_BaseBlockSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_AxisBehaviorX_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_AxisBehaviorX = { "AxisBehaviorX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, AxisBehaviorX), Z_Construct_UEnum_PorismDIMsWorldGenerator_AxisBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisBehaviorX_MetaData), NewProp_AxisBehaviorX_MetaData) }; // 2267587413
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_AxisBehaviorY_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_AxisBehaviorY = { "AxisBehaviorY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, AxisBehaviorY), Z_Construct_UEnum_PorismDIMsWorldGenerator_AxisBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisBehaviorY_MetaData), NewProp_AxisBehaviorY_MetaData) }; // 2267587413
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_AxisBehaviorZ_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_AxisBehaviorZ = { "AxisBehaviorZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, AxisBehaviorZ), Z_Construct_UEnum_PorismDIMsWorldGenerator_AxisBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisBehaviorZ_MetaData), NewProp_AxisBehaviorZ_MetaData) }; // 2267587413
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_GenOnlyTest = { "GenOnlyTest", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, GenOnlyTest), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenOnlyTest_MetaData), NewProp_GenOnlyTest_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_GenOnlyTestBP = { "GenOnlyTestBP", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, GenOnlyTestBP), Z_Construct_UClass_UClass, Z_Construct_UClass_UFastNoiseEditor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenOnlyTestBP_MetaData), NewProp_GenOnlyTestBP_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_GenOnlyTestRun = { "GenOnlyTestRun", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, GenOnlyTestRun), Z_Construct_UClass_UFastNoiseEditor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenOnlyTestRun_MetaData), NewProp_GenOnlyTestRun_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldGen = { "WorldGen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, WorldGen), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldGen_MetaData), NewProp_WorldGen_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldGenBP = { "WorldGenBP", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, WorldGenBP), Z_Construct_UClass_UClass, Z_Construct_UClass_UFastNoiseEditor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldGenBP_MetaData), NewProp_WorldGenBP_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldGenRun = { "WorldGenRun", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, WorldGenRun), Z_Construct_UClass_UFastNoiseEditor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldGenRun_MetaData), NewProp_WorldGenRun_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, NoiseScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseScale_MetaData), NewProp_NoiseScale_MetaData) };
void Z_Construct_UClass_UWorldGenDef_Statics::NewProp_GenerateOceanFlat_SetBit(void* Obj)
{
	((UWorldGenDef*)Obj)->GenerateOceanFlat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_GenerateOceanFlat = { "GenerateOceanFlat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWorldGenDef), &Z_Construct_UClass_UWorldGenDef_Statics::NewProp_GenerateOceanFlat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateOceanFlat_MetaData), NewProp_GenerateOceanFlat_MetaData) };
void Z_Construct_UClass_UWorldGenDef_Statics::NewProp_GenerateOceanAroundCenter_SetBit(void* Obj)
{
	((UWorldGenDef*)Obj)->GenerateOceanAroundCenter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_GenerateOceanAroundCenter = { "GenerateOceanAroundCenter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWorldGenDef), &Z_Construct_UClass_UWorldGenDef_Statics::NewProp_GenerateOceanAroundCenter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateOceanAroundCenter_MetaData), NewProp_GenerateOceanAroundCenter_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_StartingOceanHeight = { "StartingOceanHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, StartingOceanHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingOceanHeight_MetaData), NewProp_StartingOceanHeight_MetaData) };
void Z_Construct_UClass_UWorldGenDef_Statics::NewProp_RespectAirBubblesOcean_SetBit(void* Obj)
{
	((UWorldGenDef*)Obj)->RespectAirBubblesOcean = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_RespectAirBubblesOcean = { "RespectAirBubblesOcean", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWorldGenDef), &Z_Construct_UClass_UWorldGenDef_Statics::NewProp_RespectAirBubblesOcean_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespectAirBubblesOcean_MetaData), NewProp_RespectAirBubblesOcean_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_MaximumOceanCavityExpansion = { "MaximumOceanCavityExpansion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, MaximumOceanCavityExpansion), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumOceanCavityExpansion_MetaData), NewProp_MaximumOceanCavityExpansion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_OceanDefaultMaterial = { "OceanDefaultMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, OceanDefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanDefaultMaterial_MetaData), NewProp_OceanDefaultMaterial_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_OceanDefaultMaterialIndex = { "OceanDefaultMaterialIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, OceanDefaultMaterialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanDefaultMaterialIndex_MetaData), NewProp_OceanDefaultMaterialIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldMaterials_Inner = { "WorldMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldMaterials = { "WorldMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, WorldMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldMaterials_MetaData), NewProp_WorldMaterials_MetaData) };
void Z_Construct_UClass_UWorldGenDef_Statics::NewProp_OnlyTransparentUsage_SetBit(void* Obj)
{
	((UWorldGenDef*)Obj)->OnlyTransparentUsage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_OnlyTransparentUsage = { "OnlyTransparentUsage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWorldGenDef), &Z_Construct_UClass_UWorldGenDef_Statics::NewProp_OnlyTransparentUsage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnlyTransparentUsage_MetaData), NewProp_OnlyTransparentUsage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldMaterialDefs_Inner = { "WorldMaterialDefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialDef, METADATA_PARAMS(0, nullptr) }; // 3031419142
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldMaterialDefs = { "WorldMaterialDefs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, WorldMaterialDefs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldMaterialDefs_MetaData), NewProp_WorldMaterialDefs_MetaData) }; // 3031419142
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldMeshes_Inner = { "WorldMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMeshEntry, METADATA_PARAMS(0, nullptr) }; // 581477571
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldMeshes = { "WorldMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, WorldMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldMeshes_MetaData), NewProp_WorldMeshes_MetaData) }; // 581477571
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_TransparentMaterials_Inner = { "TransparentMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_TransparentMaterials = { "TransparentMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, TransparentMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransparentMaterials_MetaData), NewProp_TransparentMaterials_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_TransparentMaterialIndexs_Inner = { "TransparentMaterialIndexs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldGenDef_Statics::NewProp_TransparentMaterialIndexs = { "TransparentMaterialIndexs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldGenDef, TransparentMaterialIndexs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransparentMaterialIndexs_MetaData), NewProp_TransparentMaterialIndexs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldGenDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldBiomesDT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldBiomes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldBiomes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldBiomeOffsetX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldBiomeOffsetXBP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldBiomeOffsetXRun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldBiomeOffsetY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldBiomeOffsetYBP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldBiomeOffsetYRun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldBiomeOffsetZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldBiomeOffsetZBP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldBiomeOffsetZRun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldChunksDT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_ChunkBlockSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_BaseBlockSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_AxisBehaviorX_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_AxisBehaviorX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_AxisBehaviorY_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_AxisBehaviorY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_AxisBehaviorZ_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_AxisBehaviorZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_GenOnlyTest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_GenOnlyTestBP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_GenOnlyTestRun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldGen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldGenBP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldGenRun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_NoiseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_GenerateOceanFlat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_GenerateOceanAroundCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_StartingOceanHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_RespectAirBubblesOcean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_MaximumOceanCavityExpansion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_OceanDefaultMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_OceanDefaultMaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_OnlyTransparentUsage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldMaterialDefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldMaterialDefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_WorldMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_TransparentMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_TransparentMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_TransparentMaterialIndexs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldGenDef_Statics::NewProp_TransparentMaterialIndexs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldGenDef_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWorldGenDef_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PorismDIMsWorldGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldGenDef_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldGenDef_Statics::ClassParams = {
	&UWorldGenDef::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWorldGenDef_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWorldGenDef_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldGenDef_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldGenDef_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldGenDef()
{
	if (!Z_Registration_Info_UClass_UWorldGenDef.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldGenDef.OuterSingleton, Z_Construct_UClass_UWorldGenDef_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldGenDef.OuterSingleton;
}
template<> PORISMDIMSWORLDGENERATOR_API UClass* StaticClass<UWorldGenDef>()
{
	return UWorldGenDef::StaticClass();
}
UWorldGenDef::UWorldGenDef(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldGenDef);
UWorldGenDef::~UWorldGenDef() {}
// End Class UWorldGenDef

// Begin ScriptStruct FBlockChangeCall
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlockChangeCall;
class UScriptStruct* FBlockChangeCall::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlockChangeCall.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlockChangeCall.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlockChangeCall, (UObject*)Z_Construct_UPackage__Script_PorismDIMsWorldGenerator(), TEXT("BlockChangeCall"));
	}
	return Z_Registration_Info_UScriptStruct_BlockChangeCall.OuterSingleton;
}
template<> PORISMDIMSWORLDGENERATOR_API UScriptStruct* StaticStruct<FBlockChangeCall>()
{
	return FBlockChangeCall::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlockChangeCall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_chunkPose_MetaData[] = {
		{ "Category", "ChangeCall" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_blockChunkIndex_MetaData[] = {
		{ "Category", "ChangeCall" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_chunkDataIndex_MetaData[] = {
		{ "Category", "ChangeCall" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_materialIndex_MetaData[] = {
		{ "Category", "ChangeCall" },
		{ "ModuleRelativePath", "Public/ChunkWorldStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_chunkPose;
	static const UECodeGen_Private::FIntPropertyParams NewProp_blockChunkIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_chunkDataIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_materialIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlockChangeCall>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlockChangeCall_Statics::NewProp_chunkPose = { "chunkPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlockChangeCall, chunkPose), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_chunkPose_MetaData), NewProp_chunkPose_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBlockChangeCall_Statics::NewProp_blockChunkIndex = { "blockChunkIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlockChangeCall, blockChunkIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_blockChunkIndex_MetaData), NewProp_blockChunkIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBlockChangeCall_Statics::NewProp_chunkDataIndex = { "chunkDataIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlockChangeCall, chunkDataIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_chunkDataIndex_MetaData), NewProp_chunkDataIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBlockChangeCall_Statics::NewProp_materialIndex = { "materialIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBlockChangeCall, materialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_materialIndex_MetaData), NewProp_materialIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlockChangeCall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockChangeCall_Statics::NewProp_chunkPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockChangeCall_Statics::NewProp_blockChunkIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockChangeCall_Statics::NewProp_chunkDataIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockChangeCall_Statics::NewProp_materialIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockChangeCall_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlockChangeCall_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PorismDIMsWorldGenerator,
	nullptr,
	&NewStructOps,
	"BlockChangeCall",
	Z_Construct_UScriptStruct_FBlockChangeCall_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockChangeCall_Statics::PropPointers),
	sizeof(FBlockChangeCall),
	alignof(FBlockChangeCall),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockChangeCall_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlockChangeCall_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlockChangeCall()
{
	if (!Z_Registration_Info_UScriptStruct_BlockChangeCall.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlockChangeCall.InnerSingleton, Z_Construct_UScriptStruct_FBlockChangeCall_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlockChangeCall.InnerSingleton;
}
// End ScriptStruct FBlockChangeCall

// Begin Registration
struct Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldStructs_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ChunkTypes_StaticEnum, TEXT("ChunkTypes"), &Z_Registration_Info_UEnum_ChunkTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2655872078U) },
		{ SurfaceGenType_StaticEnum, TEXT("SurfaceGenType"), &Z_Registration_Info_UEnum_SurfaceGenType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2021392313U) },
		{ AxisBehavior_StaticEnum, TEXT("AxisBehavior"), &Z_Registration_Info_UEnum_AxisBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2267587413U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChunkRef::StaticStruct, Z_Construct_UScriptStruct_FChunkRef_Statics::NewStructOps, TEXT("ChunkRef"), &Z_Registration_Info_UScriptStruct_ChunkRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChunkRef), 2638181845U) },
		{ FChunkWorldHit::StaticStruct, Z_Construct_UScriptStruct_FChunkWorldHit_Statics::NewStructOps, TEXT("ChunkWorldHit"), &Z_Registration_Info_UScriptStruct_ChunkWorldHit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChunkWorldHit), 3836483830U) },
		{ FChunkDataParams::StaticStruct, Z_Construct_UScriptStruct_FChunkDataParams_Statics::NewStructOps, TEXT("ChunkDataParams"), &Z_Registration_Info_UScriptStruct_ChunkDataParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChunkDataParams), 898858411U) },
		{ FMeshEntry::StaticStruct, Z_Construct_UScriptStruct_FMeshEntry_Statics::NewStructOps, TEXT("MeshEntry"), &Z_Registration_Info_UScriptStruct_MeshEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshEntry), 581477571U) },
		{ FBiomeMaterialStep::StaticStruct, Z_Construct_UScriptStruct_FBiomeMaterialStep_Statics::NewStructOps, TEXT("BiomeMaterialStep"), &Z_Registration_Info_UScriptStruct_BiomeMaterialStep, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBiomeMaterialStep), 1119448884U) },
		{ FBiomeDualData::StaticStruct, Z_Construct_UScriptStruct_FBiomeDualData_Statics::NewStructOps, TEXT("BiomeDualData"), &Z_Registration_Info_UScriptStruct_BiomeDualData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBiomeDualData), 149369653U) },
		{ FMaterialDef::StaticStruct, Z_Construct_UScriptStruct_FMaterialDef_Statics::NewStructOps, TEXT("MaterialDef"), &Z_Registration_Info_UScriptStruct_MaterialDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialDef), 3031419142U) },
		{ FBlockChangeCall::StaticStruct, Z_Construct_UScriptStruct_FBlockChangeCall_Statics::NewStructOps, TEXT("BlockChangeCall"), &Z_Registration_Info_UScriptStruct_BlockChangeCall, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlockChangeCall), 3797612744U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChunkBlock, UChunkBlock::StaticClass, TEXT("UChunkBlock"), &Z_Registration_Info_UClass_UChunkBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChunkBlock), 2720431715U) },
		{ Z_Construct_UClass_UWorldGenDef, UWorldGenDef::StaticClass, TEXT("UWorldGenDef"), &Z_Registration_Info_UClass_UWorldGenDef, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldGenDef), 2066755374U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldStructs_h_4175515294(TEXT("/Script/PorismDIMsWorldGenerator"),
	Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldStructs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldStructs_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldStructs_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldStructs_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldStructs_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
