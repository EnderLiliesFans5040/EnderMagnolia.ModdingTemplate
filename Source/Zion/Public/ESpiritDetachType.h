#pragma once
#include "CoreMinimal.h"
#include "ESpiritDetachType.generated.h"

UENUM(BlueprintType)
enum class ESpiritDetachType : uint8 {
    OnDeactivate,
    OnDismiss,
};

