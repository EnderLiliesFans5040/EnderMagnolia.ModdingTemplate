#pragma once
#include "CoreMinimal.h"
#include "ERotationBlendMode.generated.h"

UENUM(BlueprintType)
enum class ERotationBlendMode : uint8 {
    None,
    InjectionByDT,
    ConstantRotation,
};

