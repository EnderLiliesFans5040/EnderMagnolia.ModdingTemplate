using UnrealBuildTool;

public class Zion : ModuleRules {
    public Zion(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AdvancedWidgets",
            "CableComponent",
            "Core",
            "CoreUObject",
            "Engine",
            "EnhancedInput",
            "GameplayCameras",
            "GameplayTags",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MovieScene",
            "Paper2D",
            "PhysicsCore",
            "Slate",
            "SlateCore",
        });
    }
}
