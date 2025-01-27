#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.generated.h"

UENUM(BlueprintType)
enum class ECurrencyType : uint8 {
    Default,
    Rare = 5,
    GradePoints = 10,
};

