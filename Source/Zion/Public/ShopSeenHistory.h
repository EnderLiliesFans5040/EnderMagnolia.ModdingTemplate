#pragma once
#include "CoreMinimal.h"
#include "DataTableRowHandleKey.h"
#include "ShopSeenHistory.generated.h"

USTRUCT(BlueprintType)
struct FShopSeenHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FDataTableRowHandleKey, int32> Items;
    
    ZION_API FShopSeenHistory();
};

