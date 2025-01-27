#pragma once
#include "CoreMinimal.h"
#include "EBorderType.generated.h"

UENUM(BlueprintType)
enum class EBorderType : uint8 {
    None,
    Left,
    Right,
    LeftOrRight,
    Top,
    Bottom,
    TopOrBottom,
    Any,
    TargetForward,
    TargetBackward,
};

