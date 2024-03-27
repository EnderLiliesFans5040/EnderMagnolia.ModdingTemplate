#pragma once
#include "CoreMinimal.h"
#include "EConditionDestroyMode.generated.h"

UENUM(BlueprintType)
enum class EConditionDestroyMode : uint8 {
    DestroyOnSuccess,
    DestroyOnFailure,
};

