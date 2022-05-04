// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class KineDriverEd : ModuleRules {
    public KineDriverEd(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
			"AnimGraphRuntime",
            "AnimationCore",
            "Core",
            "CoreUObject",
            "Engine",
			"KineDriverRt",
			"Slate",
			"SlateCore",
			"InputCore",
			"UnrealEd",
			"LevelEditor",
        });
    }
}