#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "CurrencyValue.h"
#include "EShopType.h"
#include "ShopItemData.h"
#include "ShopInfoComponent.generated.h"

class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UShopInfoComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UDataTable>> DatatableDisplayOrder;
    
public:
    UShopInfoComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    int32 SetLevel(int32 NewLevel);
    
    UFUNCTION(BlueprintCallable)
    void MarkSeen(EShopType ShopType, UPARAM(Ref) FShopItemData& ShopItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevel() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FShopItemData> GetItemsForShop(EShopType ShopType, const UDataTable* ShopDataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCurrencyValue GetItemCost(EShopType ShopType, const FDataTableRowHandle& Item) const;
    
    UFUNCTION(BlueprintCallable)
    void AddShopHistory(EShopType ShopType, const FDataTableRowHandle& BoughtItem);
    
};

