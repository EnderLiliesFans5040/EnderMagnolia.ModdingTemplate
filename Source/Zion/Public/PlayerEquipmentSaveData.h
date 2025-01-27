#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlot.h"
#include "PlayerEquipmentSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerEquipmentSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEquipmentSlot, FName> EquippedItems;
    
    ZION_API FPlayerEquipmentSaveData();
};

