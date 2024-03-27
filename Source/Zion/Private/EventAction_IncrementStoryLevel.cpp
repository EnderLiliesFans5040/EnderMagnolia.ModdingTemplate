#include "EventAction_IncrementStoryLevel.h"

UEventAction_IncrementStoryLevel::UEventAction_IncrementStoryLevel() {
    const FProperty* p_bPostSkipAction = GetClass()->FindPropertyByName("bPostSkipAction");
    (*p_bPostSkipAction->ContainerPtrToValuePtr<bool>(this)) = true;
}


