#include "EventAction_StopBGM.h"

UEventAction_StopBGM::UEventAction_StopBGM() {
    const FProperty* p_bPostSkipAction = GetClass()->FindPropertyByName("bPostSkipAction");
    (*p_bPostSkipAction->ContainerPtrToValuePtr<bool>(this)) = true;
    this->FadeOutTime = 2.00f;
}


