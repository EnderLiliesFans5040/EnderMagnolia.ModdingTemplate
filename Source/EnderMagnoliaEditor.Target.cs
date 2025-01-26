using UnrealBuildTool;

public class EnderMagnoliaEditorTarget : TargetRules {
	public EnderMagnoliaEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		ExtraModuleNames.AddRange(new string[] {
			"Zion",
		});
	}
}
