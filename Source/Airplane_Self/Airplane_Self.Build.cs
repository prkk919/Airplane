// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Airplane_Self : ModuleRules
{
	public Airplane_Self(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
