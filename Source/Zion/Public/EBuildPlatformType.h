#pragma once
#include "CoreMinimal.h"
#include "EBuildPlatformType.generated.h"

UENUM(BlueprintType)
enum class EBuildPlatformType : uint8 {
    Default,
    Playstation,
    Switch,
    Xbox,
};

