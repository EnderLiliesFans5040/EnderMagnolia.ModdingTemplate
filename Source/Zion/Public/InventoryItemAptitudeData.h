#pragma once
#include "CoreMinimal.h"
#include "EAptitudeType.h"
#include "InventoryItemGrantData.h"
#include "InventoryItemAptitudeData.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItemAptitudeData : public FInventoryItemGrantData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAptitudeType AptitudeType;
    
    ZION_API FInventoryItemAptitudeData();
};

