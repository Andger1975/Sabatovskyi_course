// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Sabatovskyi_course : ModuleRules
{
	public Sabatovskyi_course(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
