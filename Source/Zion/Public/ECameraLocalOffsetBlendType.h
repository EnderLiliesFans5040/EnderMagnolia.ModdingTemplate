#pragma once
#include "CoreMinimal.h"
#include "ECameraLocalOffsetBlendType.generated.h"

UENUM(BlueprintType)
enum class ECameraLocalOffsetBlendType : uint8 {
    None,
    Lerp,
    EaseIn,
    EaseOut,
    EaseInOut,
};

