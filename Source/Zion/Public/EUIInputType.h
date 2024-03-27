#pragma once
#include "CoreMinimal.h"
#include "EUIInputType.generated.h"

UENUM(BlueprintType)
enum class EUIInputType : uint8 {
    None,
    Confirm,
    Cancel,
    Context,
    ContextAlt,
    Next,
    Previous,
    NextAlt,
    PreviousAlt,
    Up,
    Down,
    Left,
    Right,
};

