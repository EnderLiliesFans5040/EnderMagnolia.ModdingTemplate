#pragma once
#include "CoreMinimal.h"
#include "RestPointListMapAreaEntryFocusedDelegateDelegate.generated.h"

class UUserWidgetMapIcon_RestPoint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRestPointListMapAreaEntryFocusedDelegate, int32, MapAreaIndex, UUserWidgetMapIcon_RestPoint*, RestPointIcon);

