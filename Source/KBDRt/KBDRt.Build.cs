using UnrealBuildTool;

public class KBDRt : ModuleRules {
    public KBDRt(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "BonamikRt",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
