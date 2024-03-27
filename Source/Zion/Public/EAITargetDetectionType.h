#pragma once
#include "CoreMinimal.h"
#include "EAITargetDetectionType.generated.h"

UENUM(BlueprintType)
enum class EAITargetDetectionType : uint8 {
    None,
    PlayerOnly,
    ClosestTarget,
};

