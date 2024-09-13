// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EpochsOfAscension : ModuleRules
{
	public EpochsOfAscension(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
