// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PorismDIMsWorldGenerator/Public/FastNoiseObjects.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFastNoiseObjects() {}

// Begin Cross Module References
PORISMDIMSWORLDGENERATOR_API UEnum* Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDim();
PORISMDIMSWORLDGENERATOR_API UEnum* Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDistanceFunction();
PORISMDIMSWORLDGENERATOR_API UEnum* Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseReturnType();
UPackage* Z_Construct_UPackage__Script_PorismDIMsWorldGenerator();
// End Cross Module References

// Begin Enum FastNoiseDistanceFunction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_FastNoiseDistanceFunction;
static UEnum* FastNoiseDistanceFunction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_FastNoiseDistanceFunction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_FastNoiseDistanceFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDistanceFunction, (UObject*)Z_Construct_UPackage__Script_PorismDIMsWorldGenerator(), TEXT("FastNoiseDistanceFunction"));
	}
	return Z_Registration_Info_UEnum_FastNoiseDistanceFunction.OuterSingleton;
}
template<> PORISMDIMSWORLDGENERATOR_API UEnum* StaticEnum<FastNoiseDistanceFunction>()
{
	return FastNoiseDistanceFunction_StaticEnum();
}
struct Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDistanceFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Euclidean.DisplayName", "Euclidean" },
		{ "Euclidean.Name", "FastNoiseDistanceFunction::Euclidean" },
		{ "EuclideanSquared.DisplayName", "EuclideanSquared" },
		{ "EuclideanSquared.Name", "FastNoiseDistanceFunction::EuclideanSquared" },
		{ "Hybrid.DisplayName", "Hybrid" },
		{ "Hybrid.Name", "FastNoiseDistanceFunction::Hybrid" },
		{ "Manhattan.DisplayName", "Manhattan" },
		{ "Manhattan.Name", "FastNoiseDistanceFunction::Manhattan" },
		{ "MaxAxis.DisplayName", "MaxAxis" },
		{ "MaxAxis.Name", "FastNoiseDistanceFunction::MaxAxis" },
		{ "ModuleRelativePath", "Public/FastNoiseObjects.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "FastNoiseDistanceFunction::Euclidean", (int64)FastNoiseDistanceFunction::Euclidean },
		{ "FastNoiseDistanceFunction::EuclideanSquared", (int64)FastNoiseDistanceFunction::EuclideanSquared },
		{ "FastNoiseDistanceFunction::Manhattan", (int64)FastNoiseDistanceFunction::Manhattan },
		{ "FastNoiseDistanceFunction::Hybrid", (int64)FastNoiseDistanceFunction::Hybrid },
		{ "FastNoiseDistanceFunction::MaxAxis", (int64)FastNoiseDistanceFunction::MaxAxis },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDistanceFunction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PorismDIMsWorldGenerator,
	nullptr,
	"FastNoiseDistanceFunction",
	"FastNoiseDistanceFunction",
	Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDistanceFunction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDistanceFunction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDistanceFunction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDistanceFunction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDistanceFunction()
{
	if (!Z_Registration_Info_UEnum_FastNoiseDistanceFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FastNoiseDistanceFunction.InnerSingleton, Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDistanceFunction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_FastNoiseDistanceFunction.InnerSingleton;
}
// End Enum FastNoiseDistanceFunction

// Begin Enum FastNoiseReturnType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_FastNoiseReturnType;
static UEnum* FastNoiseReturnType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_FastNoiseReturnType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_FastNoiseReturnType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseReturnType, (UObject*)Z_Construct_UPackage__Script_PorismDIMsWorldGenerator(), TEXT("FastNoiseReturnType"));
	}
	return Z_Registration_Info_UEnum_FastNoiseReturnType.OuterSingleton;
}
template<> PORISMDIMSWORLDGENERATOR_API UEnum* StaticEnum<FastNoiseReturnType>()
{
	return FastNoiseReturnType_StaticEnum();
}
struct Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseReturnType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Index0.DisplayName", "Index0" },
		{ "Index0.Name", "FastNoiseReturnType::Index0" },
		{ "Index0Add1.DisplayName", "Index0Add1" },
		{ "Index0Add1.Name", "FastNoiseReturnType::Index0Add1" },
		{ "Index0Div1.DisplayName", "Index0Div1" },
		{ "Index0Div1.Name", "FastNoiseReturnType::Index0Div1" },
		{ "Index0Mul1.DisplayName", "Index0Mul1" },
		{ "Index0Mul1.Name", "FastNoiseReturnType::Index0Mul1" },
		{ "Index0Sub1.DisplayName", "Index0Sub1" },
		{ "Index0Sub1.Name", "FastNoiseReturnType::Index0Sub1" },
		{ "ModuleRelativePath", "Public/FastNoiseObjects.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "FastNoiseReturnType::Index0", (int64)FastNoiseReturnType::Index0 },
		{ "FastNoiseReturnType::Index0Add1", (int64)FastNoiseReturnType::Index0Add1 },
		{ "FastNoiseReturnType::Index0Sub1", (int64)FastNoiseReturnType::Index0Sub1 },
		{ "FastNoiseReturnType::Index0Mul1", (int64)FastNoiseReturnType::Index0Mul1 },
		{ "FastNoiseReturnType::Index0Div1", (int64)FastNoiseReturnType::Index0Div1 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseReturnType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PorismDIMsWorldGenerator,
	nullptr,
	"FastNoiseReturnType",
	"FastNoiseReturnType",
	Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseReturnType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseReturnType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseReturnType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseReturnType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseReturnType()
{
	if (!Z_Registration_Info_UEnum_FastNoiseReturnType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FastNoiseReturnType.InnerSingleton, Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseReturnType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_FastNoiseReturnType.InnerSingleton;
}
// End Enum FastNoiseReturnType

// Begin Enum FastNoiseDim
static FEnumRegistrationInfo Z_Registration_Info_UEnum_FastNoiseDim;
static UEnum* FastNoiseDim_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_FastNoiseDim.OuterSingleton)
	{
		Z_Registration_Info_UEnum_FastNoiseDim.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDim, (UObject*)Z_Construct_UPackage__Script_PorismDIMsWorldGenerator(), TEXT("FastNoiseDim"));
	}
	return Z_Registration_Info_UEnum_FastNoiseDim.OuterSingleton;
}
template<> PORISMDIMSWORLDGENERATOR_API UEnum* StaticEnum<FastNoiseDim>()
{
	return FastNoiseDim_StaticEnum();
}
struct Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.DisplayName", "Count" },
		{ "Count.Name", "FastNoiseDim::Count" },
		{ "ModuleRelativePath", "Public/FastNoiseObjects.h" },
		{ "W.DisplayName", "W" },
		{ "W.Name", "FastNoiseDim::W" },
		{ "X.DisplayName", "X" },
		{ "X.Name", "FastNoiseDim::X" },
		{ "Y.DisplayName", "Y" },
		{ "Y.Name", "FastNoiseDim::Y" },
		{ "Z.DisplayName", "Z" },
		{ "Z.Name", "FastNoiseDim::Z" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "FastNoiseDim::X", (int64)FastNoiseDim::X },
		{ "FastNoiseDim::Y", (int64)FastNoiseDim::Y },
		{ "FastNoiseDim::Z", (int64)FastNoiseDim::Z },
		{ "FastNoiseDim::W", (int64)FastNoiseDim::W },
		{ "FastNoiseDim::Count", (int64)FastNoiseDim::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDim_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PorismDIMsWorldGenerator,
	nullptr,
	"FastNoiseDim",
	"FastNoiseDim",
	Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDim_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDim_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDim_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDim_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDim()
{
	if (!Z_Registration_Info_UEnum_FastNoiseDim.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FastNoiseDim.InnerSingleton, Z_Construct_UEnum_PorismDIMsWorldGenerator_FastNoiseDim_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_FastNoiseDim.InnerSingleton;
}
// End Enum FastNoiseDim

// Begin Registration
struct Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_FastNoiseObjects_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ FastNoiseDistanceFunction_StaticEnum, TEXT("FastNoiseDistanceFunction"), &Z_Registration_Info_UEnum_FastNoiseDistanceFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 541042881U) },
		{ FastNoiseReturnType_StaticEnum, TEXT("FastNoiseReturnType"), &Z_Registration_Info_UEnum_FastNoiseReturnType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1111195746U) },
		{ FastNoiseDim_StaticEnum, TEXT("FastNoiseDim"), &Z_Registration_Info_UEnum_FastNoiseDim, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2453003853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_FastNoiseObjects_h_2977581125(TEXT("/Script/PorismDIMsWorldGenerator"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_FastNoiseObjects_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_FastNoiseObjects_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
