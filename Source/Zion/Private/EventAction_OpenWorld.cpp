#include "EventAction_OpenWorld.h"

UEventAction_OpenWorld::UEventAction_OpenWorld() {
    const FProperty* p_bPostSkipAction = GetClass()->FindPropertyByName("bPostSkipAction");
    (*p_bPostSkipAction->ContainerPtrToValuePtr<bool>(this)) = true;
}


