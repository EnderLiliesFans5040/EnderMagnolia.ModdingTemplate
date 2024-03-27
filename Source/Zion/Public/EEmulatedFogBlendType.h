#pragma once
#include "CoreMinimal.h"
#include "EEmulatedFogBlendType.generated.h"

UENUM()
enum class EEmulatedFogBlendType : int32 {
    TwoColors,
    Gradient,
};

