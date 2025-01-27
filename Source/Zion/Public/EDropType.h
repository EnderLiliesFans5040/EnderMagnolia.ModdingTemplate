#pragma once
#include "CoreMinimal.h"
#include "EDropType.generated.h"

UENUM(BlueprintType)
enum class EDropType : uint8 {
    None,
    Currency,
    Item,
    CollectableGameplayEffect,
};

