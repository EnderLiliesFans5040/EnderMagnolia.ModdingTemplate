#pragma once
#include "CoreMinimal.h"
#include "EKnockbackTriggerCondition.generated.h"

UENUM()
enum class EKnockbackTriggerCondition : int32 {
    Always,
    StaminaBroken,
};

