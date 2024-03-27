#pragma once
#include "CoreMinimal.h"
#include "ESpineBoneRotationMode.generated.h"

UENUM(BlueprintType)
enum class ESpineBoneRotationMode : uint8 {
    Actor,
    Bone,
    Identity,
};

