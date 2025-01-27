#pragma once
#include "CoreMinimal.h"
#include "RestoreHealsEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRestoreHealsEvent, int32, RestoredHealCount);

