#pragma once
#include "CoreMinimal.h"
#include "ESpiritSummonType.generated.h"

UENUM(BlueprintType)
enum class ESpiritSummonType : uint8 {
    AlwaysSummon,
    Toggle,
};

