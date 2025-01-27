#pragma once
#include "CoreMinimal.h"
#include "EValueType.generated.h"

UENUM(BlueprintType)
enum class EValueType : uint8 {
    Fixed,
    Curve,
    Random,
    RandomCurve,
};

