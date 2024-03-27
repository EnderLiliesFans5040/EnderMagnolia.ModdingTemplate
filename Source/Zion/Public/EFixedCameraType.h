#pragma once
#include "CoreMinimal.h"
#include "EFixedCameraType.generated.h"

UENUM(BlueprintType)
enum class EFixedCameraType : uint8 {
    FixedFOV,
    FixedZoomOffset,
};

