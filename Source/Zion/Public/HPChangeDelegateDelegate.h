#pragma once
#include "CoreMinimal.h"
#include "HPChangeDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHPChangeDelegate, AActor*, Source, int32, Value);

