#pragma once
#include "CoreMinimal.h"
#include "EDashChargeAnimationMode.generated.h"

UENUM()
enum class EDashChargeAnimationMode : int32 {
    None,
    Mirror,
    Orientation,
};

