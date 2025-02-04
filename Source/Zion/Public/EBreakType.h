#pragma once
#include "CoreMinimal.h"
#include "EBreakType.generated.h"

UENUM(BlueprintType)
enum class EBreakType : uint8 {
    None,
    PileAttack,
    Dash,
    DiveDash,
    WallDash,
    HighJump,
    SPAttack,
    Fall,
    SwimDeath,
};

