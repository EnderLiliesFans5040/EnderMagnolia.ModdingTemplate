#pragma once
#include "CoreMinimal.h"
#include "EDebugDisplayFilter.generated.h"

UENUM(BlueprintType)
enum class EDebugDisplayFilter : uint8 {
    None,
    Player,
    Spirit,
    Enemy,
};

