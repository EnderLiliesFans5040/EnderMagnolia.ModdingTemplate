#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RestPointEventData.generated.h"

class UEventAsset;
class UPaperSprite;

USTRUCT(BlueprintType)
struct FRestPointEventData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEventAsset> EventAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaperSprite> Icon;
    
    ZION_API FRestPointEventData();
};

