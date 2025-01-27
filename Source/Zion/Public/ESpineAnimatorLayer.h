#pragma once
#include "CoreMinimal.h"
#include "ESpineAnimatorLayer.generated.h"

UENUM(BlueprintType)
enum class ESpineAnimatorLayer : uint8 {
    None,
    Locomotion,
    Action,
    Death = 30,
};

