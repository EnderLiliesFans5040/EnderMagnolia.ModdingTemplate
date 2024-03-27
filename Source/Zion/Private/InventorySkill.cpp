#include "InventorySkill.h"

UInventorySkill::UInventorySkill() {
}

int32 UInventorySkill::SetSkillLevel(const FName& SkillID, int32 NewLevel) {
    return 0;
}

bool UInventorySkill::IsMaxSkillLevel(const FName& SkillID) const {
    return false;
}

int32 UInventorySkill::GetSkillLevel(const FName& SkillID) const {
    return 0;
}

int32 UInventorySkill::GetMinSkillLevel() {
    return 0;
}

int32 UInventorySkill::GetMaxSkillLevel() {
    return 0;
}

int32 UInventorySkill::GetInitialSkillLevel(const FName& SkillID) const {
    return 0;
}


