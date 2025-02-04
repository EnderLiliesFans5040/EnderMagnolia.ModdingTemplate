#pragma once
#include "CoreMinimal.h"
#include "ItemConditionData.h"
#include "InventoryItemTutorialVideoOverrideData.generated.h"

class UPlatformMediaSource;

USTRUCT(BlueprintType)
struct FInventoryItemTutorialVideoOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemConditionData Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlatformMediaSource* VideoOverride;
    
    ZION_API FInventoryItemTutorialVideoOverrideData();
};

