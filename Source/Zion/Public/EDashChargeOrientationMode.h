#pragma once
#include "CoreMinimal.h"
#include "EDashChargeOrientationMode.generated.h"

UENUM()
enum class EDashChargeOrientationMode : int32 {
    None,
    GroundNormal,
    Velocity,
    Input,
};

