// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EndGame : ModuleRules
{
	public EndGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				"EndGame/Public"
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				"EndGame/Private",
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
            "AIModule",
            "AnimGraphRuntime",
			"AnimationBudgetAllocator",
            "AnimationCore",
			"BodyDriverPlugin",
			"BonamikRt",
            "Core",
            "CoreUObject",
            "Engine",
			"GameplayTags",
            "GameplayTasks",
			"HSFLipSyncRuntime",
            "InputCore",
			"KBDRt",
			"KineDriverRt",
			"RenderCore",
            "LevelSequence",
			"MovieScene",
            "MovieSceneTracks",
            "Paper2D",
			"SQEXSEAD",
            "Slate",
            "SlateCore",
            "UMG",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
