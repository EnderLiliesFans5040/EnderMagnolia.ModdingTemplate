#pragma once
#include "CoreMinimal.h"
#include "ECommandModuleActiveType.generated.h"

UENUM(BlueprintType)
enum class ECommandModuleActiveType : uint8 {
    Always,
    UntilCommandEnd,
    UntilEndTime,
};

