// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Prueba2 : ModuleRules
{
	public Prueba2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
