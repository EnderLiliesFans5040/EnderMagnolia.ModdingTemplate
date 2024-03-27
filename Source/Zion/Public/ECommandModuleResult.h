#pragma once
#include "CoreMinimal.h"
#include "ECommandModuleResult.generated.h"

UENUM(BlueprintType)
enum class ECommandModuleResult : uint8 {
    None,
    InProgress,
    Finished,
};

