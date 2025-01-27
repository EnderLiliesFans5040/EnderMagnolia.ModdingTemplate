#pragma once
#include "CoreMinimal.h"
#include "EExtraInfoLocomotionMode.generated.h"

UENUM(BlueprintType)
enum class EExtraInfoLocomotionMode : uint8 {
    Grounded,
    Airborne,
    Underwater,
    UnderwaterGrounded,
};

