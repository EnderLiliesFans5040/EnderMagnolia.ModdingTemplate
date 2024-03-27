#pragma once
#include "CoreMinimal.h"
#include "ECameraClampLocation.generated.h"

UENUM(BlueprintType)
enum class ECameraClampLocation : uint8 {
    None,
    Up,
    Down,
    Left,
    Right,
};

