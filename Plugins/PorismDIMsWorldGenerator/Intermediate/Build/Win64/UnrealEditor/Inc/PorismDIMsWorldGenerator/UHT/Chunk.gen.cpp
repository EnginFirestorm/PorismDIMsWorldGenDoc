// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PorismDIMsWorldGenerator/Public/Chunk.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunk() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
PORISMDIMSWORLDGENERATOR_API UClass* Z_Construct_UClass_UChunkBody();
PORISMDIMSWORLDGENERATOR_API UClass* Z_Construct_UClass_UChunkBody_NoRegister();
UPackage* Z_Construct_UPackage__Script_PorismDIMsWorldGenerator();
// End Cross Module References

// Begin Class UChunkBody
void UChunkBody::StaticRegisterNativesUChunkBody()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChunkBody);
UClass* Z_Construct_UClass_UChunkBody_NoRegister()
{
	return UChunkBody::StaticClass();
}
struct Z_Construct_UClass_UChunkBody_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Chunk.h" },
		{ "ModuleRelativePath", "Public/Chunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkBodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chunk.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChunkBodySetup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChunkBody>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChunkBody_Statics::NewProp_ChunkBodySetup = { "ChunkBodySetup", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChunkBody, ChunkBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkBodySetup_MetaData), NewProp_ChunkBodySetup_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChunkBody_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChunkBody_Statics::NewProp_ChunkBodySetup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChunkBody_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UChunkBody_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PorismDIMsWorldGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChunkBody_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UChunkBody_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(UChunkBody, IInterface_CollisionDataProvider), false },  // 4090871341
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChunkBody_Statics::ClassParams = {
	&UChunkBody::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UChunkBody_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UChunkBody_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChunkBody_Statics::Class_MetaDataParams), Z_Construct_UClass_UChunkBody_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChunkBody()
{
	if (!Z_Registration_Info_UClass_UChunkBody.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChunkBody.OuterSingleton, Z_Construct_UClass_UChunkBody_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChunkBody.OuterSingleton;
}
template<> PORISMDIMSWORLDGENERATOR_API UClass* StaticClass<UChunkBody>()
{
	return UChunkBody::StaticClass();
}
UChunkBody::UChunkBody(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChunkBody);
UChunkBody::~UChunkBody() {}
// End Class UChunkBody

// Begin Registration
struct Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_Chunk_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChunkBody, UChunkBody::StaticClass, TEXT("UChunkBody"), &Z_Registration_Info_UClass_UChunkBody, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChunkBody), 2173353559U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_Chunk_h_1351252853(TEXT("/Script/PorismDIMsWorldGenerator"),
	Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_Chunk_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_Chunk_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
