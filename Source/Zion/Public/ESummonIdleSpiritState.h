#pragma once
#include "CoreMinimal.h"
#include "ESummonIdleSpiritState.generated.h"

UENUM(BlueprintType)
enum class ESummonIdleSpiritState : uint8 {
    WaitForIdle,
    WaitForSummon,
    SummonCooldown,
};

