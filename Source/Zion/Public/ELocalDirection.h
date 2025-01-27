#pragma once
#include "CoreMinimal.h"
#include "ELocalDirection.generated.h"

UENUM(BlueprintType)
enum class ELocalDirection : uint8 {
    None,
    Up,
    Down,
    Forward,
    ForwardUp,
    ForwardDown,
    Backward,
    BackwardUp,
    BackwardDown,
};

