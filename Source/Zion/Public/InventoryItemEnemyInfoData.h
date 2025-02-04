#pragma once
#include "CoreMinimal.h"
#include "InventoryItemGenericInfoData.h"
#include "InventoryItemEnemyInfoData.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItemEnemyInfoData : public FInventoryItemGenericInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAvailableOnNewGame;
    
    ZION_API FInventoryItemEnemyInfoData();
};

