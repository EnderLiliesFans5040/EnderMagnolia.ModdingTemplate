#pragma once
#include "CoreMinimal.h"
#include "ERandomRuntimeLinearBlendType.generated.h"

UENUM(BlueprintType)
enum class ERandomRuntimeLinearBlendType : uint8 {
    Linear,
    EaseIn,
    EaseOut,
    EaseInOut,
};

