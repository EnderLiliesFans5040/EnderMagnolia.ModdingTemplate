#pragma once
#include "CoreMinimal.h"
#include "ESpiritAttachType.generated.h"

UENUM(BlueprintType)
enum class ESpiritAttachType : uint8 {
    None,
    ActorOrigin,
    VisualPivot,
};

