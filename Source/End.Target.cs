// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class EndTarget : TargetRules
{
	public EndTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { 
			"AnimationBudgetAllocator",
			"BodyDriverPlugin",
			"BonamikRt",
			"ClothingSystemRuntime",
			"EndGame",
			"GeometryCache",
			"HSFLipSyncEditor",
			"HSFLipSyncRuntime",
			"KBDRt",
			"KineDriverEd",
			"KineDriverRt",
			"SQEXSEAD",
		});
	}
}
