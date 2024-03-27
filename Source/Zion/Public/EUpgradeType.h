#pragma once
#include "CoreMinimal.h"
#include "EUpgradeType.generated.h"

UENUM(BlueprintType)
enum class EUpgradeType : uint8 {
    None,
    AttackUp,
    SpeedUp,
    ComboCountUp,
};

