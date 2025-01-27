#pragma once
#include "CoreMinimal.h"
#include "InventoryItemData.h"
#include "InventoryItemMaterialData.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItemMaterialData : public FInventoryItemData {
    GENERATED_BODY()
public:
    ZION_API FInventoryItemMaterialData();
};

