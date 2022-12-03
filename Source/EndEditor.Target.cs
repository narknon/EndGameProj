using UnrealBuildTool;

public class EndEditorTarget : TargetRules {
	public EndEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		ExtraModuleNames.AddRange(new string[] {
			"BonamikRt",
			"EndGame",
			"KBDRt",
			"KineDriverRt",
		});
	}
}
