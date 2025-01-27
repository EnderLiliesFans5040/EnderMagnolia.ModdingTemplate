#pragma once
#include "CoreMinimal.h"
#include "EPlayerUIAnimation.generated.h"

UENUM(BlueprintType)
enum class EPlayerUIAnimation : uint8 {
    None,
    HealFailure_NoHeal,
    HealFailure_FullHP,
};

