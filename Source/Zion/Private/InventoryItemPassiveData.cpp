#include "InventoryItemPassiveData.h"

FInventoryItemPassiveData::FInventoryItemPassiveData() {
    this->SlotCost = 0;
    this->bCanBeUpgraded = false;
    this->bNewGamePlusOnly = false;
    this->CountType = EPassiveCountType::None;
}

