#pragma once
#include "CoreMinimal.h"
#include "EClearStatus.h"
#include "ClearableDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClearableDelegate, EClearStatus, ClearStatus);

