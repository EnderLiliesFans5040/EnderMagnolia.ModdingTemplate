#include "EventAction_SaveGame.h"

UEventAction_SaveGame::UEventAction_SaveGame() {
    const FProperty* p_bPostSkipAction = GetClass()->FindPropertyByName("bPostSkipAction");
    (*p_bPostSkipAction->ContainerPtrToValuePtr<bool>(this)) = true;
    this->bUseAsyncSave = false;
}

void UEventAction_SaveGame::OnSaveFinished(bool bResult) {
}


