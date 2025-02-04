#include "EventAction_RemoveItems.h"

UEventAction_RemoveItems::UEventAction_RemoveItems() {
    const FProperty* p_bPostSkipAction = GetClass()->FindPropertyByName("bPostSkipAction");
    (*p_bPostSkipAction->ContainerPtrToValuePtr<bool>(this)) = true;
}


