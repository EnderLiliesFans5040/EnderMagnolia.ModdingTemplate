#pragma once
#include "CoreMinimal.h"
#include "InventoryItemData.h"
#include "InventoryItemKeyData.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItemKeyData : public FInventoryItemData {
    GENERATED_BODY()
public:
    ZION_API FInventoryItemKeyData();
};

