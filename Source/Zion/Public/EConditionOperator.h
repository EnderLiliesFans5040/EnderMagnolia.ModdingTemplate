#pragma once
#include "CoreMinimal.h"
#include "EConditionOperator.generated.h"

UENUM(BlueprintType)
enum class EConditionOperator : uint8 {
    And,
    Or,
};

