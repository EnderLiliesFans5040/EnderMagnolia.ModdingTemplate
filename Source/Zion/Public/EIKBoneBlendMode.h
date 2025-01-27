#pragma once
#include "CoreMinimal.h"
#include "EIKBoneBlendMode.generated.h"

UENUM(BlueprintType)
enum class EIKBoneBlendMode : uint8 {
    None,
    InjectionByDT,
    ConstantRotation,
};

