#pragma once
#include "CoreMinimal.h"
#include "InventoryItemData.h"
#include "InventoryItemQuestData.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItemQuestData : public FInventoryItemData {
    GENERATED_BODY()
public:
    ZION_API FInventoryItemQuestData();
};

