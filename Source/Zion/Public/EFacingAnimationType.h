#pragma once
#include "CoreMinimal.h"
#include "EFacingAnimationType.generated.h"

UENUM()
enum class EFacingAnimationType : int32 {
    Auto = 1,
    IdleTurn,
    EventIdleTurn,
    Custom,
};

