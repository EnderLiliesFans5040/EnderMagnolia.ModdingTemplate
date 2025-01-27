#pragma once
#include "CoreMinimal.h"
#include "EBreadcrumbType.generated.h"

UENUM(BlueprintType)
enum class EBreadcrumbType : uint8 {
    Default,
    World,
    Event,
    Zone,
    Save,
};

