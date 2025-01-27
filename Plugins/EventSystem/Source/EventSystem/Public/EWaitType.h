#pragma once
#include "CoreMinimal.h"
#include "EWaitType.generated.h"

UENUM()
enum class EWaitType : int32 {
    Time,
    Frame,
};

