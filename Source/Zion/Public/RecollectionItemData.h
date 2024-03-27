#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RecollectionItemConditionData.h"
#include "RecollectionItemData.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FRecollectionItemData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaperSprite> ThumbnailIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecollectionItemConditionData Conditions;
    
    ZION_API FRecollectionItemData();
};

