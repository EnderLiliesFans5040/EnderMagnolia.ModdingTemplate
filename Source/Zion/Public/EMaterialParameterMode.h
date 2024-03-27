#pragma once
#include "CoreMinimal.h"
#include "EMaterialParameterMode.generated.h"

UENUM(BlueprintType)
enum class EMaterialParameterMode : uint8 {
    Direct,
    Curve,
};

