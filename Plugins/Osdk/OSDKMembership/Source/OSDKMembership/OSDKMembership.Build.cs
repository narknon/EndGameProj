using UnrealBuildTool;

public class OSDKMembership : ModuleRules {
    public OSDKMembership(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "OSDKCore",
        });
    }
}
