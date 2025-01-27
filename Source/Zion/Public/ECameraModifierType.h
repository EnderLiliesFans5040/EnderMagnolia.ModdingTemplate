#pragma once
#include "CoreMinimal.h"
#include "ECameraModifierType.generated.h"

UENUM(BlueprintType)
enum class ECameraModifierType : uint8 {
    None,
    OverrideSettings,
    CameraClamp,
    FixedCamera,
    LimitControl,
};

