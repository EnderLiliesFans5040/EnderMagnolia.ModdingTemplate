#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RecollectionItemConditionData.generated.h"

class UEventAsset;

USTRUCT(BlueprintType)
struct FRecollectionItemConditionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UEventAsset>> ClearedEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> OwnedItems;
    
    ZION_API FRecollectionItemConditionData();
};

