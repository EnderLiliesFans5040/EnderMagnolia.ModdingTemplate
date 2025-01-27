#pragma once
#include "CoreMinimal.h"
#include "ECustomMoveToAcceptableRadiusType.generated.h"

UENUM(BlueprintType)
enum class ECustomMoveToAcceptableRadiusType : uint8 {
    None,
    Absolute,
    Random,
};

