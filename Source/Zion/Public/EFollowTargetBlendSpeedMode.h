#pragma once
#include "CoreMinimal.h"
#include "EFollowTargetBlendSpeedMode.generated.h"

UENUM(BlueprintType)
enum class EFollowTargetBlendSpeedMode : uint8 {
    None,
    Value,
    Curve,
};

