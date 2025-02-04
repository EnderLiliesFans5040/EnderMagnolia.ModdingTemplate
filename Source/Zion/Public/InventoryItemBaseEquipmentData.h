#pragma once
#include "CoreMinimal.h"
#include "ExtendedStatsData.h"
#include "InventoryItemData.h"
#include "InventoryItemBaseEquipmentData.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItemBaseEquipmentData : public FInventoryItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExtendedStatsData Stats;
    
    ZION_API FInventoryItemBaseEquipmentData();
};

