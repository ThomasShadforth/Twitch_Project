// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TwitchPrototype : ModuleRules
{
	public TwitchPrototype(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "UMG", "PhysicsCore", "NavigationSystem", "AIModule", "GameplayAbilities" });
		
		PrivateDependencyModuleNames.AddRange(new []{"GameplayTags", "GameplayTasks"});
	}
}
