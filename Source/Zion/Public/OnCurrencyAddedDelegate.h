#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "OnCurrencyAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCurrencyAdded, const ECurrencyType&, CurrencyType, const int32, AddedCount, const int32, PreviousCount);

