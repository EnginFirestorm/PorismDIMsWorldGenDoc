// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class PorismDIMsWorldGenerator : ModuleRules
{
	public PorismDIMsWorldGenerator(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.Add(PluginDirectory + "\\Source\\ThirdParty\\FastNoise2\\include");

        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            PublicAdditionalLibraries.Add(PluginDirectory + "\\Source\\ThirdParty\\FastNoise2\\libs\\Windows-x86-64\\FastNoise.lib");
            RuntimeDependencies.Add("$(BinaryOutputDir)\\FastNoise.dll", PluginDirectory + "\\Source\\ThirdParty\\FastNoise2\\libs\\Windows-x86-64\\FastNoise.dll");
            RuntimeDependencies.Add("$(TargetOutputDir)\\FastNoise.dll", PluginDirectory + "\\Source\\ThirdParty\\FastNoise2\\libs\\Windows-x86-64\\FastNoise.dll");
        }

        if (Target.Platform == UnrealTargetPlatform.Linux)
        {
            PublicAdditionalLibraries.Add(PluginDirectory + "\\Source\\ThirdParty\\FastNoise2\\libs\\Linux-x86-64\\libFastNoise.so");
            RuntimeDependencies.Add("$(BinaryOutputDir)\\FastNoise.so", PluginDirectory + "\\Source\\ThirdParty\\FastNoise2\\libs\\Linux-x86-64\\libFastNoise.so");
            RuntimeDependencies.Add("$(TargetOutputDir)\\FastNoise.so", PluginDirectory + "\\Source\\ThirdParty\\FastNoise2\\libs\\Linux-x86-64\\libFastNoise.so");
        }

        if (Target.Platform == UnrealTargetPlatform.LinuxArm64)
        {
            PublicAdditionalLibraries.Add(PluginDirectory + "\\Source\\ThirdParty\\FastNoise2\\libs\\Linux-arm64\\libFastNoise.so");
            RuntimeDependencies.Add("$(BinaryOutputDir)\\FastNoise.so", PluginDirectory + "\\Source\\ThirdParty\\FastNoise2\\libs\\Linux-arm64\\libFastNoise.so");
            RuntimeDependencies.Add("$(TargetOutputDir)\\FastNoise.so", PluginDirectory + "\\Source\\ThirdParty\\FastNoise2\\libs\\Linux-arm64\\libFastNoise.so");
        }

        if (Target.Platform == UnrealTargetPlatform.Android)
        {
            if(Target.Architectures.bIsMultiArch)
            {
                PublicAdditionalLibraries.Add(PluginDirectory + "\\Source\\ThirdParty\\FastNoise2\\libs\\Android-arm64-v8a\\libFastNoise.a");
                PublicAdditionalLibraries.Add(PluginDirectory + "\\Source\\ThirdParty\\FastNoise2\\libs\\Android-x86_64\\libFastNoise.a");
            }
            else if(Target.Architecture == UnrealArch.X64)
                PublicAdditionalLibraries.Add(PluginDirectory + "\\Source\\ThirdParty\\FastNoise2\\libs\\Android-x86_64\\libFastNoise.a");
            else
                PublicAdditionalLibraries.Add(PluginDirectory + "\\Source\\ThirdParty\\FastNoise2\\libs\\Android-arm64-v8a\\libFastNoise.a");

            AdditionalPropertiesForReceipt.Add("AndroidPlugin", PluginDirectory + "\\Source\\ThirdParty\\FastNoise2\\libs\\Android.xml");
        }

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core", "CoreUObject", "Engine", "InputCore", "HTTP", "UMG", "SlateCore",
            "RHI", "RenderCore", "PhysicsCore", "Renderer", "Foliage"
        });
        if (Target.bBuildEditor)
            PublicDependencyModuleNames.AddRange(new string[] { "UnrealEd" });

        PrivateDependencyModuleNames.AddRange(new string[] {
            "Core", "CoreUObject", "Engine", "InputCore", "HTTP", "UMG", "SlateCore",
            "RHI", "RenderCore", "PhysicsCore", "Renderer", "Foliage"
        });
        PrecompileForTargets = PrecompileTargetsType.Any;
    }
}
