// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PorismDIMsWorldGenerator/Public/ChunkHexagonal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunkHexagonal() {}

// Begin Cross Module References
PORISMDIMSWORLDGENERATOR_API UClass* Z_Construct_UClass_UChunkBlock();
PORISMDIMSWORLDGENERATOR_API UClass* Z_Construct_UClass_UHexagonalBlock();
PORISMDIMSWORLDGENERATOR_API UClass* Z_Construct_UClass_UHexagonalBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_PorismDIMsWorldGenerator();
// End Cross Module References

// Begin Class UHexagonalBlock
void UHexagonalBlock::StaticRegisterNativesUHexagonalBlock()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHexagonalBlock);
UClass* Z_Construct_UClass_UHexagonalBlock_NoRegister()
{
	return UHexagonalBlock::StaticClass();
}
struct Z_Construct_UClass_UHexagonalBlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A render-specific class for settings. Extra functions can be activated via this to change the design a little. Attention! This class only works for its partner **/" },
#endif
		{ "IncludePath", "ChunkHexagonal.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ChunkHexagonal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A render-specific class for settings. Extra functions can be activated via this to change the design a little. Attention! This class only works for its partner *" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHexagonalBlock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHexagonalBlock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChunkBlock,
	(UObject* (*)())Z_Construct_UPackage__Script_PorismDIMsWorldGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHexagonalBlock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHexagonalBlock_Statics::ClassParams = {
	&UHexagonalBlock::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHexagonalBlock_Statics::Class_MetaDataParams), Z_Construct_UClass_UHexagonalBlock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHexagonalBlock()
{
	if (!Z_Registration_Info_UClass_UHexagonalBlock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHexagonalBlock.OuterSingleton, Z_Construct_UClass_UHexagonalBlock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHexagonalBlock.OuterSingleton;
}
template<> PORISMDIMSWORLDGENERATOR_API UClass* StaticClass<UHexagonalBlock>()
{
	return UHexagonalBlock::StaticClass();
}
UHexagonalBlock::UHexagonalBlock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHexagonalBlock);
UHexagonalBlock::~UHexagonalBlock() {}
// End Class UHexagonalBlock

// Begin Registration
struct Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkHexagonal_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHexagonalBlock, UHexagonalBlock::StaticClass, TEXT("UHexagonalBlock"), &Z_Registration_Info_UClass_UHexagonalBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHexagonalBlock), 3537078114U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkHexagonal_h_1246628524(TEXT("/Script/PorismDIMsWorldGenerator"),
	Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkHexagonal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkHexagonal_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
