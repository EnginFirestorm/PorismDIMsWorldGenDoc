// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class ThirdParty : ModuleRules
{
	public ThirdParty(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {});
        if (Target.bBuildEditor)
            PublicDependencyModuleNames.AddRange(new string[] { "UnrealEd" });

        PrivateDependencyModuleNames.AddRange(new string[] {"Core", "Projects"});
        PrecompileForTargets = PrecompileTargetsType.Any;
    }
}
