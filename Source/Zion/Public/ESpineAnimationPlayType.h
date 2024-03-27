#pragma once
#include "CoreMinimal.h"
#include "ESpineAnimationPlayType.generated.h"

UENUM(BlueprintType)
enum class ESpineAnimationPlayType : uint8 {
    Once,
    Loop,
    Hold,
};

