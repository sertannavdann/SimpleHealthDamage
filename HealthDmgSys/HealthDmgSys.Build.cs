// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HealthDmgSys : ModuleRules
{
	public HealthDmgSys(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
