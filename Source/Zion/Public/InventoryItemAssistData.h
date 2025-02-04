#pragma once
#include "CoreMinimal.h"
#include "InventoryItemBaseEquipmentData.h"
#include "InventoryItemAssistData.generated.h"

class AAssistVisual;
class UAssist;

USTRUCT(BlueprintType)
struct FInventoryItemAssistData : public FInventoryItemBaseEquipmentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAssist> AssistClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AAssistVisual> AssistActorClass;
    
    ZION_API FInventoryItemAssistData();
};

