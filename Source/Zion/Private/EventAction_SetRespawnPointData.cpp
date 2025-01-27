#include "EventAction_SetRespawnPointData.h"

UEventAction_SetRespawnPointData::UEventAction_SetRespawnPointData() {
    const FProperty* p_bPostSkipAction = GetClass()->FindPropertyByName("bPostSkipAction");
    (*p_bPostSkipAction->ContainerPtrToValuePtr<bool>(this)) = true;
}


