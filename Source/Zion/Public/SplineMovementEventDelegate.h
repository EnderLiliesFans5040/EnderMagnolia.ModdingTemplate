#pragma once
#include "CoreMinimal.h"
#include "SplineMovementEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSplineMovementEvent, bool, bWasMoving);

