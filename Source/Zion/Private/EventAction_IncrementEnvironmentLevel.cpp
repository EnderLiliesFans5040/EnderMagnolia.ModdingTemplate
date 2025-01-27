#include "EventAction_IncrementEnvironmentLevel.h"

UEventAction_IncrementEnvironmentLevel::UEventAction_IncrementEnvironmentLevel() {
    const FProperty* p_bPostSkipAction = GetClass()->FindPropertyByName("bPostSkipAction");
    (*p_bPostSkipAction->ContainerPtrToValuePtr<bool>(this)) = true;
    this->bLockEnvironmentLevel = true;
}


