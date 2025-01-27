#pragma once
#include "CoreMinimal.h"
#include "InventoryItemData.h"
#include "InventoryItemTipData.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItemTipData : public FInventoryItemData {
    GENERATED_BODY()
public:
    ZION_API FInventoryItemTipData();
};

