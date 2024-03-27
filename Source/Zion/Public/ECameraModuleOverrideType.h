#pragma once
#include "CoreMinimal.h"
#include "ECameraModuleOverrideType.generated.h"

UENUM(BlueprintType)
enum class ECameraModuleOverrideType : uint8 {
    AbsoluteValue,
    Factor,
};

