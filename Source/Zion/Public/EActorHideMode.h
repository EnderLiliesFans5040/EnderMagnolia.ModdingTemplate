#pragma once
#include "CoreMinimal.h"
#include "EActorHideMode.generated.h"

UENUM(BlueprintType)
enum class EActorHideMode : uint8 {
    None,
    SetHiddenInGame,
    Destroy,
    Animation,
};

