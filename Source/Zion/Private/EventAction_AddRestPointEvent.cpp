#include "EventAction_AddRestPointEvent.h"

UEventAction_AddRestPointEvent::UEventAction_AddRestPointEvent() {
    const FProperty* p_bPostSkipAction = GetClass()->FindPropertyByName("bPostSkipAction");
    (*p_bPostSkipAction->ContainerPtrToValuePtr<bool>(this)) = true;
}


