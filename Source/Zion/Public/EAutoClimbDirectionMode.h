#pragma once
#include "CoreMinimal.h"
#include "EAutoClimbDirectionMode.generated.h"

UENUM(BlueprintType)
enum class EAutoClimbDirectionMode : uint8 {
    None,
    Upward,
    UpwardNeutral,
    UpwardNeutralDownward,
};

