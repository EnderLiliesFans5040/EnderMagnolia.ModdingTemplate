#pragma once
#include "CoreMinimal.h"
#include "ImageZionEventDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FImageZionEvent, TSoftObjectPtr<UObject>, SoftImageObject);

