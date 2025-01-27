#pragma once
#include "CoreMinimal.h"
#include "EPathFollowingMode.generated.h"

UENUM()
enum class EPathFollowingMode : int32 {
    Default,
    QuadraticBezier,
    Step,
};

