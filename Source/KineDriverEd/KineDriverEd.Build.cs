// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class KineDriverEd : ModuleRules {
    public KineDriverEd(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
		PublicIncludePaths.AddRange(
            new string[]
            {
                "KineDriverEd/Public"
            });

        PrivateIncludePaths.AddRange(
            new string[] 
            {
				"KineDriverEd/Private"
			});
		
        PublicDependencyModuleNames.AddRange(new string[] {
			"AnimGraphRuntime",
            "AnimationCore",
            "Core",
            "CoreUObject",
            "Engine",
			"KineDriverRt",
			"Slate",
			"SlateCore",
			"UnrealEd",
        });
    }
}