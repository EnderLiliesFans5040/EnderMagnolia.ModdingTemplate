#pragma once
#include "CoreMinimal.h"
#include "EShopType.h"
#include "ShopBuyHistory.h"
#include "ShopSeenHistory.h"
#include "ShopInfoSaveData.generated.h"

USTRUCT(BlueprintType)
struct FShopInfoSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EShopType, FShopBuyHistory> ShopHistories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EShopType, FShopSeenHistory> SeenHistories;
    
    ZION_API FShopInfoSaveData();
};

