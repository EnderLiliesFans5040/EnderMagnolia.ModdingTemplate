#pragma once
#include "CoreMinimal.h"
#include "ECommandMinimumChargeType.generated.h"

UENUM(BlueprintType)
enum class ECommandMinimumChargeType : uint8 {
    None,
    FirstChargeLevel,
    Custom,
};

