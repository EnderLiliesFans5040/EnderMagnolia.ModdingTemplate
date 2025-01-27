#pragma once
#include "CoreMinimal.h"
#include "DataTableRowHandleKey.h"
#include "ShopBuyHistory.generated.h"

USTRUCT(BlueprintType)
struct FShopBuyHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FDataTableRowHandleKey, int32> Items;
    
    ZION_API FShopBuyHistory();
};

