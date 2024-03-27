#pragma once
#include "CoreMinimal.h"
#include "EAbilityOffsetMode.generated.h"

UENUM(BlueprintType)
enum class EAbilityOffsetMode : uint8 {
    None,
    InputDirection,
    InputDirectionAbsoluteX,
};

