#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InventoryItemGrantData.h"
#include "InventoryItemSpiritData.generated.h"

class UPaperSprite;
class UTexture2D;

USTRUCT(BlueprintType)
struct FInventoryItemSpiritData : public FInventoryItemGrantData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> Skills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> AutoGrantSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> MenuBackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaperSprite> SpiritSkillIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaperSprite> SpiritEquippedSkillIcon;
    
    ZION_API FInventoryItemSpiritData();
};

