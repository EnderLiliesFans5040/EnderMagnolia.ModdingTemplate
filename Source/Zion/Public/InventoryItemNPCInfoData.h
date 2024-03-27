#pragma once
#include "CoreMinimal.h"
#include "InventoryItemGenericInfoData.h"
#include "InventoryItemNPCInfoData.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItemNPCInfoData : public FInventoryItemGenericInfoData {
    GENERATED_BODY()
public:
    ZION_API FInventoryItemNPCInfoData();
};

