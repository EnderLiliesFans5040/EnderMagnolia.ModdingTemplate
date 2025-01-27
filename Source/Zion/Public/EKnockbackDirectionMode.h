#pragma once
#include "CoreMinimal.h"
#include "EKnockbackDirectionMode.generated.h"

UENUM()
enum class EKnockbackDirectionMode : int32 {
    FrontalAbility,
    Location,
    OppositeTargetForward,
    Absolute,
};

