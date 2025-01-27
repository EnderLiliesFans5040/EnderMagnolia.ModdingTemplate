#pragma once
#include "CoreMinimal.h"
#include "ESpiritRepeatAbilityUseType.generated.h"

UENUM(BlueprintType)
enum class ESpiritRepeatAbilityUseType : uint8 {
    Sequence,
    Random,
};

