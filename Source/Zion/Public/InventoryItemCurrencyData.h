#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "InventoryItemData.h"
#include "InventoryItemCurrencyData.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItemCurrencyData : public FInventoryItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECurrencyType Currency;
    
    ZION_API FInventoryItemCurrencyData();
};

