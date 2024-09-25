// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PorismDIMsWorldGenerator/Public/ChunkWorldWalker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunkWorldWalker() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PORISMDIMSWORLDGENERATOR_API UClass* Z_Construct_UClass_UChunkWorldWalker();
PORISMDIMSWORLDGENERATOR_API UClass* Z_Construct_UClass_UChunkWorldWalker_NoRegister();
UPackage* Z_Construct_UPackage__Script_PorismDIMsWorldGenerator();
// End Cross Module References

// Begin Interface UChunkWorldWalker Function GetTracingLocation
struct ChunkWorldWalker_eventGetTracingLocation_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	ChunkWorldWalker_eventGetTracingLocation_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
FVector IChunkWorldWalker::GetTracingLocation() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTracingLocation instead.");
	ChunkWorldWalker_eventGetTracingLocation_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UChunkWorldWalker_GetTracingLocation = FName(TEXT("GetTracingLocation"));
FVector IChunkWorldWalker::Execute_GetTracingLocation(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UChunkWorldWalker::StaticClass()));
	ChunkWorldWalker_eventGetTracingLocation_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UChunkWorldWalker_GetTracingLocation);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IChunkWorldWalker*)(O->GetNativeInterfaceAddress(UChunkWorldWalker::StaticClass())))
	{
		Parms.ReturnValue = I->GetTracingLocation_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UChunkWorldWalker_GetTracingLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldWalker" },
		{ "ModuleRelativePath", "Public/ChunkWorldWalker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChunkWorldWalker_GetTracingLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorldWalker_eventGetTracingLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChunkWorldWalker_GetTracingLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChunkWorldWalker_GetTracingLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChunkWorldWalker_GetTracingLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChunkWorldWalker_GetTracingLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChunkWorldWalker, nullptr, "GetTracingLocation", nullptr, nullptr, Z_Construct_UFunction_UChunkWorldWalker_GetTracingLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChunkWorldWalker_GetTracingLocation_Statics::PropPointers), sizeof(ChunkWorldWalker_eventGetTracingLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChunkWorldWalker_GetTracingLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChunkWorldWalker_GetTracingLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(ChunkWorldWalker_eventGetTracingLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChunkWorldWalker_GetTracingLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChunkWorldWalker_GetTracingLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IChunkWorldWalker::execGetTracingLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetTracingLocation_Implementation();
	P_NATIVE_END;
}
// End Interface UChunkWorldWalker Function GetTracingLocation

// Begin Interface UChunkWorldWalker Function GetTracingVector
struct ChunkWorldWalker_eventGetTracingVector_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	ChunkWorldWalker_eventGetTracingVector_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
FVector IChunkWorldWalker::GetTracingVector() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTracingVector instead.");
	ChunkWorldWalker_eventGetTracingVector_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UChunkWorldWalker_GetTracingVector = FName(TEXT("GetTracingVector"));
FVector IChunkWorldWalker::Execute_GetTracingVector(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UChunkWorldWalker::StaticClass()));
	ChunkWorldWalker_eventGetTracingVector_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UChunkWorldWalker_GetTracingVector);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IChunkWorldWalker*)(O->GetNativeInterfaceAddress(UChunkWorldWalker::StaticClass())))
	{
		Parms.ReturnValue = I->GetTracingVector_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UChunkWorldWalker_GetTracingVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldWalker" },
		{ "ModuleRelativePath", "Public/ChunkWorldWalker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChunkWorldWalker_GetTracingVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorldWalker_eventGetTracingVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChunkWorldWalker_GetTracingVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChunkWorldWalker_GetTracingVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChunkWorldWalker_GetTracingVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChunkWorldWalker_GetTracingVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChunkWorldWalker, nullptr, "GetTracingVector", nullptr, nullptr, Z_Construct_UFunction_UChunkWorldWalker_GetTracingVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChunkWorldWalker_GetTracingVector_Statics::PropPointers), sizeof(ChunkWorldWalker_eventGetTracingVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChunkWorldWalker_GetTracingVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChunkWorldWalker_GetTracingVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(ChunkWorldWalker_eventGetTracingVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChunkWorldWalker_GetTracingVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChunkWorldWalker_GetTracingVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IChunkWorldWalker::execGetTracingVector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetTracingVector_Implementation();
	P_NATIVE_END;
}
// End Interface UChunkWorldWalker Function GetTracingVector

// Begin Interface UChunkWorldWalker Function GetViewDistanceMultiplier
struct ChunkWorldWalker_eventGetViewDistanceMultiplier_Parms
{
	TArray<double> ReturnValue;
};
TArray<double> IChunkWorldWalker::GetViewDistanceMultiplier() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetViewDistanceMultiplier instead.");
	ChunkWorldWalker_eventGetViewDistanceMultiplier_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UChunkWorldWalker_GetViewDistanceMultiplier = FName(TEXT("GetViewDistanceMultiplier"));
TArray<double> IChunkWorldWalker::Execute_GetViewDistanceMultiplier(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UChunkWorldWalker::StaticClass()));
	ChunkWorldWalker_eventGetViewDistanceMultiplier_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UChunkWorldWalker_GetViewDistanceMultiplier);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IChunkWorldWalker*)(O->GetNativeInterfaceAddress(UChunkWorldWalker::StaticClass())))
	{
		Parms.ReturnValue = I->GetViewDistanceMultiplier_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UChunkWorldWalker_GetViewDistanceMultiplier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ChunkWorldWalker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A multiplier to adjust the loading distance **/" },
#endif
		{ "ModuleRelativePath", "Public/ChunkWorldWalker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A multiplier to adjust the loading distance *" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UChunkWorldWalker_GetViewDistanceMultiplier_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UChunkWorldWalker_GetViewDistanceMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChunkWorldWalker_eventGetViewDistanceMultiplier_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChunkWorldWalker_GetViewDistanceMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChunkWorldWalker_GetViewDistanceMultiplier_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChunkWorldWalker_GetViewDistanceMultiplier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChunkWorldWalker_GetViewDistanceMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChunkWorldWalker_GetViewDistanceMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChunkWorldWalker, nullptr, "GetViewDistanceMultiplier", nullptr, nullptr, Z_Construct_UFunction_UChunkWorldWalker_GetViewDistanceMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChunkWorldWalker_GetViewDistanceMultiplier_Statics::PropPointers), sizeof(ChunkWorldWalker_eventGetViewDistanceMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChunkWorldWalker_GetViewDistanceMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChunkWorldWalker_GetViewDistanceMultiplier_Statics::Function_MetaDataParams) };
static_assert(sizeof(ChunkWorldWalker_eventGetViewDistanceMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChunkWorldWalker_GetViewDistanceMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChunkWorldWalker_GetViewDistanceMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IChunkWorldWalker::execGetViewDistanceMultiplier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<double>*)Z_Param__Result=P_THIS->GetViewDistanceMultiplier_Implementation();
	P_NATIVE_END;
}
// End Interface UChunkWorldWalker Function GetViewDistanceMultiplier

// Begin Interface UChunkWorldWalker
void UChunkWorldWalker::StaticRegisterNativesUChunkWorldWalker()
{
	UClass* Class = UChunkWorldWalker::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTracingLocation", &IChunkWorldWalker::execGetTracingLocation },
		{ "GetTracingVector", &IChunkWorldWalker::execGetTracingVector },
		{ "GetViewDistanceMultiplier", &IChunkWorldWalker::execGetViewDistanceMultiplier },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChunkWorldWalker);
UClass* Z_Construct_UClass_UChunkWorldWalker_NoRegister()
{
	return UChunkWorldWalker::StaticClass();
}
struct Z_Construct_UClass_UChunkWorldWalker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ChunkWorldWalker.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UChunkWorldWalker_GetTracingLocation, "GetTracingLocation" }, // 3504547003
		{ &Z_Construct_UFunction_UChunkWorldWalker_GetTracingVector, "GetTracingVector" }, // 4230965927
		{ &Z_Construct_UFunction_UChunkWorldWalker_GetViewDistanceMultiplier, "GetViewDistanceMultiplier" }, // 3717370648
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IChunkWorldWalker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UChunkWorldWalker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_PorismDIMsWorldGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChunkWorldWalker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChunkWorldWalker_Statics::ClassParams = {
	&UChunkWorldWalker::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChunkWorldWalker_Statics::Class_MetaDataParams), Z_Construct_UClass_UChunkWorldWalker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChunkWorldWalker()
{
	if (!Z_Registration_Info_UClass_UChunkWorldWalker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChunkWorldWalker.OuterSingleton, Z_Construct_UClass_UChunkWorldWalker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChunkWorldWalker.OuterSingleton;
}
template<> PORISMDIMSWORLDGENERATOR_API UClass* StaticClass<UChunkWorldWalker>()
{
	return UChunkWorldWalker::StaticClass();
}
UChunkWorldWalker::UChunkWorldWalker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChunkWorldWalker);
UChunkWorldWalker::~UChunkWorldWalker() {}
// End Interface UChunkWorldWalker

// Begin Registration
struct Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldWalker_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChunkWorldWalker, UChunkWorldWalker::StaticClass, TEXT("UChunkWorldWalker"), &Z_Registration_Info_UClass_UChunkWorldWalker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChunkWorldWalker), 919068434U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldWalker_h_47859722(TEXT("/Script/PorismDIMsWorldGenerator"),
	Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldWalker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GIT_PorismDIMsWorldGenDoc_Plugins_PorismDIMsWorldGenerator_Source_PorismDIMsWorldGenerator_Public_ChunkWorldWalker_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
