#pragma once
#include "CoreMinimal.h"
#include "ERestPointEventPriority.generated.h"

UENUM(BlueprintType)
enum class ERestPointEventPriority : uint8 {
    Default,
    High,
};

