#pragma once
#include "CoreMinimal.h"
#include "EAttackElement.generated.h"

UENUM(BlueprintType)
enum class EAttackElement : uint8 {
    None,
    Fire = 10,
    Ice = 15,
    Electric = 20,
    Dash = 50,
    HighJump = 55,
    WallDash = 60,
    PileAttackLv1 = 65,
    PileAttackLv2,
};

