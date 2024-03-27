#include "EventAction_PlayBGM.h"

UEventAction_PlayBGM::UEventAction_PlayBGM() {
    const FProperty* p_bPostSkipAction = GetClass()->FindPropertyByName("bPostSkipAction");
    (*p_bPostSkipAction->ContainerPtrToValuePtr<bool>(this)) = true;
    this->BGM = NULL;
}


