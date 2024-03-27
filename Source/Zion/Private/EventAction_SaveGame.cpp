#include "EventAction_SaveGame.h"

UEventAction_SaveGame::UEventAction_SaveGame() {
    this->bUseAsyncSave = false;
    this->SaveWidgetClass = NULL;
}

void UEventAction_SaveGame::OnSaveFinished(bool bResult) {
}


