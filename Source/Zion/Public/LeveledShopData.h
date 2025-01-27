#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ShopItemData.h"
#include "LeveledShopData.generated.h"

USTRUCT(BlueprintType)
struct FLeveledShopData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShopItemData> Items;
    
    ZION_API FLeveledShopData();
};

