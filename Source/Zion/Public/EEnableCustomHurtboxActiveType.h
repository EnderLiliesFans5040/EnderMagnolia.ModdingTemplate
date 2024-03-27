#pragma once
#include "CoreMinimal.h"
#include "EEnableCustomHurtboxActiveType.generated.h"

UENUM(BlueprintType)
enum class EEnableCustomHurtboxActiveType : uint8 {
    UntilCommandEnd,
    UntilEndTime,
};

