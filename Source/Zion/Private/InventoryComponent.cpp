#include "InventoryComponent.h"

UInventoryComponent::UInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemCurrencyInventory = NULL;
    this->ItemAptitudeInventory = NULL;
    this->ItemSpiritInventory = NULL;
    this->ItemSkillInventory = NULL;
    this->ItemEquipmentInventory = NULL;
    this->ItemAssistInventory = NULL;
    this->ItemStatsInventory = NULL;
    this->ItemPassiveInventory = NULL;
    this->ItemMaterialInventory = NULL;
    this->ItemTipInventory = NULL;
    this->ItemTutorialInventory = NULL;
    this->ItemKeyInventory = NULL;
    this->ItemCostumeInventory = NULL;
    this->ItemEnemyInfoInventory = NULL;
    this->ItemNPCInfoInventory = NULL;
}

int32 UInventoryComponent::SpendCurrency(const FCurrencyValue& CurrencyValue) {
    return 0;
}

bool UInventoryComponent::RemoveItem(const FDataTableRowHandle& ItemHandle, int32 Count) {
    return false;
}

void UInventoryComponent::MarkItemAsChecked(const FDataTableRowHandle& ItemHandle) {
}

bool UInventoryComponent::IsItemChecked(const FDataTableRowHandle& ItemHandle) const {
    return false;
}

bool UInventoryComponent::HasNonCheckedItem(EInventoryItemType ItemType) const {
    return false;
}

bool UInventoryComponent::HasItem(const FDataTableRowHandle& ItemHandle, int32 Count) {
    return false;
}

bool UInventoryComponent::HasAptitude(const EAptitudeType& AptitudeType) const {
    return false;
}

UInventory* UInventoryComponent::GetTutorialInventory() const {
    return NULL;
}

UInventory* UInventoryComponent::GetStatsInventory() const {
    return NULL;
}

UInventory* UInventoryComponent::GetSpiritInventory() const {
    return NULL;
}

UInventorySkill* UInventoryComponent::GetSkillInventory() const {
    return NULL;
}

UInventory* UInventoryComponent::GetPassiveInventory() const {
    return NULL;
}

UInventory* UInventoryComponent::GetNPCInfoInventory() const {
    return NULL;
}

UInventory* UInventoryComponent::GetInventoryFromItemType(EInventoryItemType ItemType) const {
    return NULL;
}

UInventory* UInventoryComponent::GetEquipmentInventory() const {
    return NULL;
}

UInventory* UInventoryComponent::GetEnemyInfoInventory() const {
    return NULL;
}

UInventory* UInventoryComponent::GetCurrencyInventory() const {
    return NULL;
}

int32 UInventoryComponent::GetCurrency(ECurrencyType CurrencyType) const {
    return 0;
}

int32 UInventoryComponent::GetCountOfItem(const FDataTableRowHandle& ItemHandle) const {
    return 0;
}

UInventory* UInventoryComponent::GetCostumeInventory() const {
    return NULL;
}

UInventory* UInventoryComponent::GetAssistInventory() const {
    return NULL;
}

UInventoryAptitude* UInventoryComponent::GetAptitudeInventory() const {
    return NULL;
}

bool UInventoryComponent::CanSpendCurrency(const FCurrencyValue& CurrencyValue) const {
    return false;
}

bool UInventoryComponent::AddItem(const FDataTableRowHandle& ItemHandle, int32 Count) {
    return false;
}

bool UInventoryComponent::AddDrop(const FDrop& Drop) {
    return false;
}

int32 UInventoryComponent::AddCurrency(ECurrencyType CurrencyType, int32 CurrencyToAdd) {
    return 0;
}


