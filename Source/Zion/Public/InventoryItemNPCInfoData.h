#pragma once
#include "CoreMinimal.h"
#include "InventoryItemGenericInfoData.h"
#include "ItemConditionData.h"
#include "InventoryItemNPCInfoData.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItemNPCInfoData : public FInventoryItemGenericInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemConditionData Conditions;
    
    ZION_API FInventoryItemNPCInfoData();
};

