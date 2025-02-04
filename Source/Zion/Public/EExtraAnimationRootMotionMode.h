#pragma once
#include "CoreMinimal.h"
#include "EExtraAnimationRootMotionMode.generated.h"

UENUM(BlueprintType)
enum class EExtraAnimationRootMotionMode : uint8 {
    None,
    On,
    XAxis,
    YAxis,
};

