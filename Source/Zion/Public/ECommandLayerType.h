#pragma once
#include "CoreMinimal.h"
#include "ECommandLayerType.generated.h"

UENUM(BlueprintType)
enum class ECommandLayerType : uint8 {
    Default,
    Alternative,
    RepeatA,
    RepeatB,
    Free,
};

