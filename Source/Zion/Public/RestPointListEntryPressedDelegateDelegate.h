#pragma once
#include "CoreMinimal.h"
#include "MapRestPointData.h"
#include "RestPointListEntryPressedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRestPointListEntryPressedDelegate, FMapRestPointData, RestPointData);

