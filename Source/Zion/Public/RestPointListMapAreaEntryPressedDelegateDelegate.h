#pragma once
#include "CoreMinimal.h"
#include "MapRestPointData.h"
#include "RestPointListMapAreaEntryPressedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRestPointListMapAreaEntryPressedDelegate, FMapRestPointData, RestPointData);

