#include "EventAction_RestorePlayer.h"

UEventAction_RestorePlayer::UEventAction_RestorePlayer() {
    const FProperty* p_bPostSkipAction = GetClass()->FindPropertyByName("bPostSkipAction");
    (*p_bPostSkipAction->ContainerPtrToValuePtr<bool>(this)) = true;
}


