#pragma once
#include "CoreMinimal.h"
#include "PhaseLevelChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPhaseLevelChangeDelegate, int32, PhaseLevel);

