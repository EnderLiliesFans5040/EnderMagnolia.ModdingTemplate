#pragma once
#include "CoreMinimal.h"
#include "InventoryItemData.h"
#include "InventoryItemGrantData.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItemGrantData : public FInventoryItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrantOnNewGame;
    
    ZION_API FInventoryItemGrantData();
};

