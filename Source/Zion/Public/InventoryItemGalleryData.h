#pragma once
#include "CoreMinimal.h"
#include "ExtraItemZoomData.h"
#include "InventoryItemData.h"
#include "ItemConditionData.h"
#include "InventoryItemGalleryData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FInventoryItemGalleryData : public FInventoryItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> DisplayImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExtraItemZoomData ZoomData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemConditionData Conditions;
    
    ZION_API FInventoryItemGalleryData();
};

