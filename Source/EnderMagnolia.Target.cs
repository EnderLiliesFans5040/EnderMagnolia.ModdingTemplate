using UnrealBuildTool;

public class EnderMagnoliaTarget : TargetRules {
	public EnderMagnoliaTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		ExtraModuleNames.AddRange(new string[] {
			"OnlineSubsystemSteam",
			"Zion",
		});
	}
}
