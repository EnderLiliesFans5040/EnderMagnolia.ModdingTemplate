#pragma once
#include "CoreMinimal.h"
#include "EDirectionSource.generated.h"

UENUM(BlueprintType)
enum class EDirectionSource : uint8 {
    SourceActorLocation,
    AbilityLocation,
};

