#pragma once
#include "CoreMinimal.h"
#include "ECommandCategory.generated.h"

UENUM(BlueprintType)
enum class ECommandCategory : uint8 {
    Default,
    Jump,
    Summon,
};

