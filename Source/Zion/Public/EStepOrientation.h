#pragma once
#include "CoreMinimal.h"
#include "EStepOrientation.generated.h"

UENUM(BlueprintType)
enum class EStepOrientation : uint8 {
    Default,
    Wall,
    Ceiling,
};

