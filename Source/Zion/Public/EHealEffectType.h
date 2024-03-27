#pragma once
#include "CoreMinimal.h"
#include "EHealEffectType.generated.h"

UENUM()
enum class EHealEffectType : int32 {
    Absolute,
    TargetPercentage,
};

