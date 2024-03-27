using UnrealBuildTool;

public class EnderMagnoliaEditorTarget : TargetRules {
	public EnderMagnoliaEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		ExtraModuleNames.AddRange(new string[] {
			"OnlineSubsystemSteam",
			"Zion",
		});
	}
}
