#pragma once
#include "CoreMinimal.h"
#include "ECommandFinishType.generated.h"

UENUM(BlueprintType)
enum class ECommandFinishType : uint8 {
    Normal,
    Override,
    Abort,
};

