#pragma once
#include "CoreMinimal.h"
#include "ElevatorMovementEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FElevatorMovementEvent, bool, bInstant, bool, bWasMoving);

