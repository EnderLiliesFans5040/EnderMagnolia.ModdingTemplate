#include "Inventory.h"

UInventory::UInventory() {
    this->DataTable = NULL;
}

void UInventory::MarkItemAsChecked(const FName& ItemRowName) {
}

bool UInventory::IsItemChecked(const FName& ItemRowName) const {
    return false;
}

bool UInventory::HasNonCheckedItem() const {
    return false;
}

bool UInventory::HasItem(const FName& ItemRowName, int32 Count) const {
    return false;
}

int32 UInventory::GetItemCount() const {
    return 0;
}

UDataTable* UInventory::GetDataTable() const {
    return NULL;
}

int32 UInventory::GetCountOfItem(const FName& ItemId) const {
    return 0;
}

TMap<FName, int32> UInventory::GetAllItems() const {
    return TMap<FName, int32>();
}


