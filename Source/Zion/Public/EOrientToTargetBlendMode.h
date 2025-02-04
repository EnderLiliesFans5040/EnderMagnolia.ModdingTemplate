#pragma once
#include "CoreMinimal.h"
#include "EOrientToTargetBlendMode.generated.h"

UENUM(BlueprintType)
enum class EOrientToTargetBlendMode : uint8 {
    None,
    InjectionByDT,
    ConstantRotation,
};

