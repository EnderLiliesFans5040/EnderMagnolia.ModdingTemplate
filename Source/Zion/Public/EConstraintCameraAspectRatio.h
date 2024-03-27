#pragma once
#include "CoreMinimal.h"
#include "EConstraintCameraAspectRatio.generated.h"

UENUM(BlueprintType)
enum class EConstraintCameraAspectRatio : uint8 {
    CameraAR_Off,
    CameraAR_16_9,
    CameraAR_21_9,
    CameraAR_32_9,
    CameraAR_4_3,
    CameraAR_16_10,
};

