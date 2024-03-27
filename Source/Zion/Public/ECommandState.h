#pragma once
#include "CoreMinimal.h"
#include "ECommandState.generated.h"

UENUM(BlueprintType)
enum class ECommandState : uint8 {
    None,
    Running,
    Finished,
};

