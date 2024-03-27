#pragma once
#include "CoreMinimal.h"
#include "ECommandSetCategory.generated.h"

UENUM(BlueprintType)
enum class ECommandSetCategory : uint8 {
    None,
    Combo,
    Repeat,
    Recast,
    Auto,
    Defense,
    Special,
};

