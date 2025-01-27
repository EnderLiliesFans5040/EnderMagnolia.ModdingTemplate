#pragma once
#include "CoreMinimal.h"
#include "EHasStateConditionType.generated.h"

UENUM()
enum class EHasStateConditionType : int32 {
    AllStates,
    AnyState,
};

