#pragma once
#include "CoreMinimal.h"
#include "TargetChangeDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTargetChangeDelegate, const AActor*, NewTarget);

