#pragma once
#include "CoreMinimal.h"
#include "ETalkAnimationType.generated.h"

UENUM(BlueprintType)
enum class ETalkAnimationType : uint8 {
    None,
    TalkA,
    TalkB,
    Custom,
};

