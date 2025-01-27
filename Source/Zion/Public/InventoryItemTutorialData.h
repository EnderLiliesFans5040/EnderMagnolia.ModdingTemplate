#pragma once
#include "CoreMinimal.h"
#include "ETutorialHook.h"
#include "InventoryItemData.h"
#include "InventoryItemTutorialVideoOverrideData.h"
#include "Templates/SubclassOf.h"
#include "InventoryItemTutorialData.generated.h"

class UGameplayCondition;
class UPlatformMediaSource;

USTRUCT(BlueprintType)
struct FInventoryItemTutorialData : public FInventoryItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETutorialHook Hook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayCondition> Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlatformMediaSource* Video;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInventoryItemTutorialVideoOverrideData> VideoOverrides;
    
    ZION_API FInventoryItemTutorialData();
};

