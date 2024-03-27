#pragma once
#include "CoreMinimal.h"
#include "EMovementModeCustom.generated.h"

UENUM(BlueprintType)
enum class EMovementModeCustom : uint8 {
    None,
    WallGrabbing,
    Sliding,
    HookAttach,
    WallScaling,
};

