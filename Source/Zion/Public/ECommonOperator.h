#pragma once
#include "CoreMinimal.h"
#include "ECommonOperator.generated.h"

UENUM(BlueprintType)
enum class ECommonOperator : uint8 {
    None,
    Superior,
    SuperiorOrEqual,
    Inferior,
    InferiorOrEqual,
    Equal,
    NotEqual,
};

