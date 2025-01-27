#pragma once
#include "CoreMinimal.h"
#include "EAbilityInstantTriggerCondition.generated.h"

UENUM(BlueprintType)
enum class EAbilityInstantTriggerCondition : uint8 {
    None,
    ParriedActorFaction,
};

