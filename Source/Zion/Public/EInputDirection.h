#pragma once
#include "CoreMinimal.h"
#include "EInputDirection.generated.h"

UENUM(BlueprintType)
enum class EInputDirection : uint8 {
    None,
    Up,
    Down,
    Left,
    Right,
    UpLeft,
    UpRight,
    DownRight,
    DownLeft,
};

