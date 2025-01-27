#pragma once
#include "CoreMinimal.h"
#include "EPassiveOnAttackRestoreType.generated.h"

UENUM(BlueprintType)
enum class EPassiveOnAttackRestoreType : uint8 {
    None,
    FlatAmount,
    DamagePercentage,
    StatPercentage,
};

