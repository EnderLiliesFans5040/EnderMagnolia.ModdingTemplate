using UnrealBuildTool;

public class EnderMagnoliaTarget : TargetRules {
	public EnderMagnoliaTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		ExtraModuleNames.AddRange(new string[] {
			"OnlineSubsystemSteam",
			"Zion",
		});
	}
}
