#include "ShopInfoComponent.h"

UShopInfoComponent::UShopInfoComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

int32 UShopInfoComponent::SetLevel(int32 NewLevel) {
    return 0;
}

void UShopInfoComponent::MarkSeen(EShopType ShopType, FShopItemData& ShopItemData) {
}

int32 UShopInfoComponent::GetMinLevel() const {
    return 0;
}

int32 UShopInfoComponent::GetMaxLevel() const {
    return 0;
}

int32 UShopInfoComponent::GetLevel() const {
    return 0;
}

TArray<FShopItemData> UShopInfoComponent::GetItemsForShop(EShopType ShopType, const UDataTable* ShopDataTable) {
    return TArray<FShopItemData>();
}

FCurrencyValue UShopInfoComponent::GetItemCost(EShopType ShopType, const FDataTableRowHandle& Item) const {
    return FCurrencyValue{};
}

void UShopInfoComponent::AddShopHistory(EShopType ShopType, const FDataTableRowHandle& BoughtItem) {
}


