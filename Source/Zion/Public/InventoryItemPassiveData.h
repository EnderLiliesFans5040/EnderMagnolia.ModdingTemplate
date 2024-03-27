#pragma once
#include "CoreMinimal.h"
#include "InventoryItemGrantData.h"
#include "InventoryItemPassiveData.generated.h"

class UPassive;

USTRUCT(BlueprintType)
struct FInventoryItemPassiveData : public FInventoryItemGrantData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPassive> PassiveClass;
    
    ZION_API FInventoryItemPassiveData();
};

