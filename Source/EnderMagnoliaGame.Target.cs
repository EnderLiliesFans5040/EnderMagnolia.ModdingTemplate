using UnrealBuildTool;

public class EnderMagnoliaGameTarget : TargetRules {
	public EnderMagnoliaGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		ExtraModuleNames.AddRange(new string[] {
			"OnlineSubsystemSteam",
			"Zion",
		});
	}
}
