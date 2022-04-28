using UnrealBuildTool;

public class AnimationBudgetAllocator : ModuleRules {
    public AnimationBudgetAllocator(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
