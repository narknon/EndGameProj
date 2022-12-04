using UnrealBuildTool;

public class EndGame : ModuleRules {
    public EndGame(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
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
            "LevelSequence",
            "MovieScene",
            "MovieSceneTracks",
            "Paper2D",
            "RenderCore",
            "SQEXSEAD",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
