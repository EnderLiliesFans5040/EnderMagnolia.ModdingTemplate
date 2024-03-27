#pragma once
#include "CoreMinimal.h"
#include "ExtendedStatsData.h"
#include "InventoryItemData.h"
#include "InventoryItemAssistData.generated.h"

class AAssistVisual;
class UAssist;

USTRUCT(BlueprintType)
struct FInventoryItemAssistData : public FInventoryItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExtendedStatsData Stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAssist> AssistClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AAssistVisual> AssistActorClass;
    
    ZION_API FInventoryItemAssistData();
};

