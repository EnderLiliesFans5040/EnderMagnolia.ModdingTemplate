#pragma once
#include "CoreMinimal.h"
#include "EGameEndingType.generated.h"

UENUM(BlueprintType)
enum class EGameEndingType : uint8 {
    None,
    EndingA,
    EndingB,
};

