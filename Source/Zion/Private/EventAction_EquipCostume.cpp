#include "EventAction_EquipCostume.h"

UEventAction_EquipCostume::UEventAction_EquipCostume() {
    const FProperty* p_bPostSkipAction = GetClass()->FindPropertyByName("bPostSkipAction");
    (*p_bPostSkipAction->ContainerPtrToValuePtr<bool>(this)) = true;
    this->bAutoGrantCostume = true;
}


