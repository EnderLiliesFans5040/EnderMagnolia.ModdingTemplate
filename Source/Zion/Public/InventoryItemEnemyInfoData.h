#pragma once
#include "CoreMinimal.h"
#include "InventoryItemGenericInfoData.h"
#include "InventoryItemEnemyInfoData.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItemEnemyInfoData : public FInventoryItemGenericInfoData {
    GENERATED_BODY()
public:
    ZION_API FInventoryItemEnemyInfoData();
};

