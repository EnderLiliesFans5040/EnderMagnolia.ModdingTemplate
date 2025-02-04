#pragma once
#include "CoreMinimal.h"
#include "InventoryItemBaseEquipmentData.h"
#include "InventoryItemEquipmentData.generated.h"

class UCommandSet;
class UInputAction;

USTRUCT(BlueprintType)
struct FInventoryItemEquipmentData : public FInventoryItemBaseEquipmentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCommandSet> CommandSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction;
    
    ZION_API FInventoryItemEquipmentData();
};

