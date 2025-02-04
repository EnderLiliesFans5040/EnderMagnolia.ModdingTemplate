#include "EventAction_MarkGameEndingReached.h"

UEventAction_MarkGameEndingReached::UEventAction_MarkGameEndingReached() {
    const FProperty* p_bPostSkipAction = GetClass()->FindPropertyByName("bPostSkipAction");
    (*p_bPostSkipAction->ContainerPtrToValuePtr<bool>(this)) = true;
    this->ReachedEnding = EGameEndingType::None;
}


