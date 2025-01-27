#include "InventoryItemData.h"

FInventoryItemData::FInventoryItemData() {
    this->ItemType = EInventoryItemType::None;
    this->EquipmentType = EEquipmentType::None;
    this->InventoryHideCondition = NULL;
}

