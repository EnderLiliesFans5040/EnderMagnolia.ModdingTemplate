#pragma once
#include "CoreMinimal.h"
#include "EStepHeavinessCategory.generated.h"

UENUM(BlueprintType)
enum class EStepHeavinessCategory : uint8 {
    None,
    Light,
    Medium,
    Heavy,
};

