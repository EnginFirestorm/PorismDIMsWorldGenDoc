// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdParty.h"
#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FThirdPartyModule"

void FThirdPartyModule::StartupModule()
{
	auto pugin = IPluginManager::Get().FindPlugin(TEXT("PorismDIMsWorldGenerator"))->GetBaseDir();
	auto d = pugin + FString("/Source/ThirdParty/FastNoise2/libs/Windows-x86-64/FastNoise.dll");
	auto t = pugin + FString("/Binaries/Win64/FastNoise.dll");
	const TCHAR* DllPath = *d;
	const TCHAR* Target = *t;

	if (!FPaths::FileExists(DllPath))
	{
		UE_LOG(LogTemp, Error, TEXT("FastNoise.dll not found"));
		return;
	}
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	PlatformFile.CopyFile(Target, DllPath);

}

void FThirdPartyModule::ShutdownModule()
{

}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FThirdPartyModule, ThirdParty)