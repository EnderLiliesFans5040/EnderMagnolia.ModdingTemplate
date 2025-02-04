#pragma once
#include "CoreMinimal.h"
#include "EHomingPropertyType.generated.h"

UENUM(BlueprintType)
enum class EHomingPropertyType : uint8 {
    Direct,
    Random,
};

