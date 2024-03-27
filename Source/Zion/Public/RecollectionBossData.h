#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RecollectionItemData.h"
#include "RecollectionBossData.generated.h"

USTRUCT(BlueprintType)
struct FRecollectionBossData : public FRecollectionItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerStartTag;
    
    ZION_API FRecollectionBossData();
};

