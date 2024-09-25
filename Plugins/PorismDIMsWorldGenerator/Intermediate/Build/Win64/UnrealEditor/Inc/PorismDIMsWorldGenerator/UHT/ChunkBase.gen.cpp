// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PorismDIMsWorldGenerator/Public/ChunkBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunkBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
PORISMDIMSWORLDGENERATOR_API UClass* Z_Construct_UClass_UChunkBase();
PORISMDIMSWORLDGENERATOR_API UClass* Z_Construct_UClass_UChunkBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_PorismDIMsWorldGenerator();
// End Cross Module References

// Begin Class UChunkBase
void UChunkBase::StaticRegisterNativesUChunkBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChunkBase);
UClass* Z_Construct_UClass_UChunkBase_NoRegister()
{
	return UChunkBase::StaticClass();
}
struct Z_Construct_UClass_UChunkBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "ChunkBase.h" },
		{ "ModuleRelativePath", "Public/ChunkBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChunkBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UChunkBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_PorismDIMsWorldGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChunkBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChunkBase_Statics::ClassParams = {
	&UChunkBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChunkBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UChunkBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChunkBase()
{
	if (!Z_Registration_Info_UClass_UChunkBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChunkBase.OuterSingleton, Z_Construct_UClass_UChunkBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChunkBase.OuterSingleton;
}
template<> PORISMDIMSWORLDGENERATOR_API UClass* StaticClass<UChunkBase>()
{
	return UChunkBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChunkBase);
// End Class UChunkBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChunkBase, UChunkBase::StaticClass, TEXT("UChunkBase"), &Z_Registration_Info_UClass_UChunkBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChunkBase), 3671063638U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkBase_h_3697512051(TEXT("/Script/PorismDIMsWorldGenerator"),
	Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
