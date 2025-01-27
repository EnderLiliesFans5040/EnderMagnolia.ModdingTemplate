#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectType.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectType : uint8 {
    None,
    Burn,
    Freeze,
    Shock,
    AttackUpAssist,
    AttackUpSpirit,
    DamageCutAssist,
    DamageCutSpirit,
};

