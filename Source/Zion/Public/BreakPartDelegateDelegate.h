#pragma once
#include "CoreMinimal.h"
#include "EBreakType.h"
#include "BreakPartDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBreakPartDelegate, const EBreakType&, BreakType);

