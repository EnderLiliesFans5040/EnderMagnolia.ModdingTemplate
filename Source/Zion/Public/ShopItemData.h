#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ShopItemData.generated.h"

USTRUCT(BlueprintType)
struct FShopItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StockCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNew;
    
    ZION_API FShopItemData();
};

