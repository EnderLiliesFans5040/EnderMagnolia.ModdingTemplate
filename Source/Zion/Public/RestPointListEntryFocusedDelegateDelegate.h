#pragma once
#include "CoreMinimal.h"
#include "RestPointListEntryFocusedDelegateDelegate.generated.h"

class UUserWidgetMapIcon_RestPoint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRestPointListEntryFocusedDelegate, UUserWidgetMapIcon_RestPoint*, RestPointIcon);

