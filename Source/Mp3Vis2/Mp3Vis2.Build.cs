// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Mp3Vis2 : ModuleRules
{
	public Mp3Vis2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
