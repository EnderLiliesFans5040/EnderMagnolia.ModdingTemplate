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
            "EventSystem",
            "FMODStudio",
            "GameplayCameras",
            "GameplayTags",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MovieScene",
            "Niagara",
            "Paper2D",
            "PhysicsCore",
            "ProceduralMeshComponent",
            "RenderLayer",
            "Sentry",
            "Slate",
            "SlateCore",
            "SpineExtension",
            "SpineMeshPlugin",
            "SpinePlugin",
            "UMG",
        });
    }
}
