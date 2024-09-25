// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PorismDIMsWorldGenerator/Public/ChunkCubic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunkCubic() {}

// Begin Cross Module References
PORISMDIMSWORLDGENERATOR_API UClass* Z_Construct_UClass_UChunkBlock();
PORISMDIMSWORLDGENERATOR_API UClass* Z_Construct_UClass_UCubicBlock();
PORISMDIMSWORLDGENERATOR_API UClass* Z_Construct_UClass_UCubicBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_PorismDIMsWorldGenerator();
// End Cross Module References

// Begin Class UCubicBlock
void UCubicBlock::StaticRegisterNativesUCubicBlock()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCubicBlock);
UClass* Z_Construct_UClass_UCubicBlock_NoRegister()
{
	return UCubicBlock::StaticClass();
}
struct Z_Construct_UClass_UCubicBlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A render-specific class for settings. Extra functions can be activated via this to change the design a little. Attention! This class only works for its partner **/" },
#endif
		{ "IncludePath", "ChunkCubic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ChunkCubic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A render-specific class for settings. Extra functions can be activated via this to change the design a little. Attention! This class only works for its partner *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Crumple_MetaData[] = {
		{ "Category", "BlockDef" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If active, this function will apply a random position deviation to the polygons. This has no effect on the save and cache data, but affects appearance and collision **/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkCubic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If active, this function will apply a random position deviation to the polygons. This has no effect on the save and cache data, but affects appearance and collision *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrumpleLimit_MetaData[] = {
		{ "Category", "BlockDef (Needs Full Version)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Deviation in % **/" },
#endif
		{ "EditCondition", "1 == 2" },
		{ "ModuleRelativePath", "Public/ChunkCubic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deviation in % *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrumpleSeed_MetaData[] = {
		{ "Category", "BlockDef (Needs Full Version)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Deviation in UE units **/" },
#endif
		{ "EditCondition", "1 == 2" },
		{ "ModuleRelativePath", "Public/ChunkCubic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deviation in UE units *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bevels_MetaData[] = {
		{ "Category", "BlockDef" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Creates a physical polygon offset and makes blocks appear smaller under certain circumstances. Looks good, but makes the optimizer unusable **/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkCubic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a physical polygon offset and makes blocks appear smaller under certain circumstances. Looks good, but makes the optimizer unusable *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BevelsLimit_MetaData[] = {
		{ "Category", "BlockDef (Needs Full Version)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Deviation in % **/" },
#endif
		{ "EditCondition", "1 == 2" },
		{ "ModuleRelativePath", "Public/ChunkCubic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deviation in % *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReNormal_MetaData[] = {
		{ "Category", "BlockDef" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fix the Normals after effects. Attention! The optimizer changes the effect, maybe check if the optimizer is activated if you don't like the effect **/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkCubic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fix the Normals after effects. Attention! The optimizer changes the effect, maybe check if the optimizer is activated if you don't like the effect *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReNormalLimit_MetaData[] = {
		{ "Category", "BlockDef (Needs Full Version)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Normal Deviation in % **/" },
#endif
		{ "EditCondition", "1 == 2" },
		{ "ModuleRelativePath", "Public/ChunkCubic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normal Deviation in % *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseSoftNormals_MetaData[] = {
		{ "Category", "BlockDef" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Let it look a bit more round. Requires a little bit more performance to generate, but also less memory space **/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkCubic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Let it look a bit more round. Requires a little bit more performance to generate, but also less memory space *" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_Crumple_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Crumple;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrumpleLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrumpleSeed;
	static void NewProp_Bevels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Bevels;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BevelsLimit;
	static void NewProp_ReNormal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReNormal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReNormalLimit;
	static void NewProp_UseSoftNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseSoftNormals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCubicBlock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCubicBlock_Statics::NewProp_Crumple_SetBit(void* Obj)
{
	((UCubicBlock*)Obj)->Crumple = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCubicBlock_Statics::NewProp_Crumple = { "Crumple", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCubicBlock), &Z_Construct_UClass_UCubicBlock_Statics::NewProp_Crumple_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Crumple_MetaData), NewProp_Crumple_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCubicBlock_Statics::NewProp_CrumpleLimit = { "CrumpleLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCubicBlock, CrumpleLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrumpleLimit_MetaData), NewProp_CrumpleLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCubicBlock_Statics::NewProp_CrumpleSeed = { "CrumpleSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCubicBlock, CrumpleSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrumpleSeed_MetaData), NewProp_CrumpleSeed_MetaData) };
void Z_Construct_UClass_UCubicBlock_Statics::NewProp_Bevels_SetBit(void* Obj)
{
	((UCubicBlock*)Obj)->Bevels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCubicBlock_Statics::NewProp_Bevels = { "Bevels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCubicBlock), &Z_Construct_UClass_UCubicBlock_Statics::NewProp_Bevels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bevels_MetaData), NewProp_Bevels_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCubicBlock_Statics::NewProp_BevelsLimit = { "BevelsLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCubicBlock, BevelsLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BevelsLimit_MetaData), NewProp_BevelsLimit_MetaData) };
void Z_Construct_UClass_UCubicBlock_Statics::NewProp_ReNormal_SetBit(void* Obj)
{
	((UCubicBlock*)Obj)->ReNormal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCubicBlock_Statics::NewProp_ReNormal = { "ReNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCubicBlock), &Z_Construct_UClass_UCubicBlock_Statics::NewProp_ReNormal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReNormal_MetaData), NewProp_ReNormal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCubicBlock_Statics::NewProp_ReNormalLimit = { "ReNormalLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCubicBlock, ReNormalLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReNormalLimit_MetaData), NewProp_ReNormalLimit_MetaData) };
void Z_Construct_UClass_UCubicBlock_Statics::NewProp_UseSoftNormals_SetBit(void* Obj)
{
	((UCubicBlock*)Obj)->UseSoftNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCubicBlock_Statics::NewProp_UseSoftNormals = { "UseSoftNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCubicBlock), &Z_Construct_UClass_UCubicBlock_Statics::NewProp_UseSoftNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseSoftNormals_MetaData), NewProp_UseSoftNormals_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCubicBlock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubicBlock_Statics::NewProp_Crumple,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubicBlock_Statics::NewProp_CrumpleLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubicBlock_Statics::NewProp_CrumpleSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubicBlock_Statics::NewProp_Bevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubicBlock_Statics::NewProp_BevelsLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubicBlock_Statics::NewProp_ReNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubicBlock_Statics::NewProp_ReNormalLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubicBlock_Statics::NewProp_UseSoftNormals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCubicBlock_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCubicBlock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChunkBlock,
	(UObject* (*)())Z_Construct_UPackage__Script_PorismDIMsWorldGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCubicBlock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCubicBlock_Statics::ClassParams = {
	&UCubicBlock::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCubicBlock_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCubicBlock_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCubicBlock_Statics::Class_MetaDataParams), Z_Construct_UClass_UCubicBlock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCubicBlock()
{
	if (!Z_Registration_Info_UClass_UCubicBlock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCubicBlock.OuterSingleton, Z_Construct_UClass_UCubicBlock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCubicBlock.OuterSingleton;
}
template<> PORISMDIMSWORLDGENERATOR_API UClass* StaticClass<UCubicBlock>()
{
	return UCubicBlock::StaticClass();
}
UCubicBlock::UCubicBlock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCubicBlock);
UCubicBlock::~UCubicBlock() {}
// End Class UCubicBlock

// Begin Registration
struct Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkCubic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCubicBlock, UCubicBlock::StaticClass, TEXT("UCubicBlock"), &Z_Registration_Info_UClass_UCubicBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCubicBlock), 3037969576U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkCubic_h_3017070101(TEXT("/Script/PorismDIMsWorldGenerator"),
	Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkCubic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkCubic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
