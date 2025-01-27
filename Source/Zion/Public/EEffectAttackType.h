#pragma once
#include "CoreMinimal.h"
#include "EEffectAttackType.generated.h"

UENUM(BlueprintType)
enum class EEffectAttackType : uint8 {
    None,
    Light,
    Medium,
    Heavy,
};

