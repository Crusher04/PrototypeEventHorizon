// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EventHorizon : ModuleRules
{
	public EventHorizon(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
