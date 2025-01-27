#pragma once
#include "CoreMinimal.h"
#include "EEventPlayerResult.generated.h"

UENUM(BlueprintType)
enum class EEventPlayerResult : uint8 {
    None,
    Completed,
    Skipped,
    Aborted,
};

