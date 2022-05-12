// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.IO;
using System;
using System.Runtime.InteropServices;
using System.Text;
using Tools.DotNETCommon;

public class AssetDumper : ModuleRules
{
    public AssetDumper(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new[] {
	        "Core", 
	        "CoreUObject",
	        "Engine",
	        "InputCore",
	        "AnimGraphRuntime",
	        "AssetRegistry",
	        "SlateCore", "Slate", "UMG",
	        "Landscape",
            "Json",
            "MovieScene",
            "Projects",
			"RenderCore",
			"MovieScene",
			"MovieSceneTracks"
        });

        PrivateDependencyModuleNames.AddRange(new[] {
	        "RHI", 
	        "MediaAssets"
        });
        
        if (Target.bBuildEditor) {
            PublicDependencyModuleNames.Add("UnrealEd");
            PrivateDependencyModuleNames.Add("MainFrame");
        }
        
        var thirdPartyFolder = Path.Combine(ModuleDirectory, "../../ThirdParty");
        PublicIncludePaths.Add(Path.Combine(thirdPartyFolder, "include"));
        
        var platformName = Target.Platform.ToString();
        var libraryFolder = Path.Combine(thirdPartyFolder, platformName);
        
        PublicAdditionalLibraries.Add(Path.Combine(libraryFolder, "libfbxsdk-md.lib"));
        PublicAdditionalLibraries.Add(Path.Combine(libraryFolder, "libxml2-md.lib"));
        PublicAdditionalLibraries.Add(Path.Combine(libraryFolder, "zlib-md.lib"));
        PublicAdditionalLibraries.Add(Path.Combine(libraryFolder, "detex.lib"));
        
        
    }
}
