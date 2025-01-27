#pragma once
#include "CoreMinimal.h"
#include "EAbilityDirectionMode.generated.h"

UENUM()
enum class EAbilityDirectionMode : int32 {
    SourceLocation,
    AbilityLocation,
    SourceForward,
    AbilityForward,
    AlwaysFrontal,
};

