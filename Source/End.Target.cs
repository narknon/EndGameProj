using UnrealBuildTool;

public class EndTarget : TargetRules {
	public EndTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		ExtraModuleNames.AddRange(new string[] {
			"BonamikRt",
			"EndGame",
			"KBDRt",
			"KineDriverRt",
		});
	}
}
