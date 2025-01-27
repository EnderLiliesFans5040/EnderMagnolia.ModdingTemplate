#pragma once
#include "CoreMinimal.h"
#include "OnItemAddedDelegate.generated.h"

class UInventory;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnItemAdded, const UInventory*, Inventory, const FName&, ItemId, int32, AddedCount);

