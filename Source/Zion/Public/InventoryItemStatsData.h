#pragma once
#include "CoreMinimal.h"
#include "ExtendedStatsData.h"
#include "InventoryItemGrantData.h"
#include "InventoryItemStatsData.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItemStatsData : public FInventoryItemGrantData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExtendedStatsData BonusStats;
    
    ZION_API FInventoryItemStatsData();
};

