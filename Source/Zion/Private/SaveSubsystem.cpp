#include "SaveSubsystem.h"
#include "Templates/SubclassOf.h"

USaveSubsystem::USaveSubsystem() {
    this->CurrentSettings = NULL;
    this->SavingGameData = NULL;
}

void USaveSubsystem::SetCurrentSlotIndex(int32 NewSlotIndex) {
}

bool USaveSubsystem::SaveSettings() {
    return false;
}

void USaveSubsystem::SaveGameInCurrentSlotAsync(TSubclassOf<UUserWidgetZionShowHide> SaveWidgetClass, FSaveGameResult OnSaveFinished) {
}

bool USaveSubsystem::SaveGameInCurrentSlot() {
    return false;
}

void USaveSubsystem::ResetTimeSinceLastGameSave() {
}

ESaveExistsType USaveSubsystem::LoadSettings(bool bForceReload) {
    return ESaveExistsType::OK;
}

void USaveSubsystem::LoadGameFromSlotAsync(int32 SlotIndex, FLoadGameResult OnLoadFinished) {
}

void USaveSubsystem::LoadGameFromCurrentSlotAsync(FLoadGameResult OnLoadFinished) {
}

ESaveExistsType USaveSubsystem::LoadGameFromCurrentSlot(USaveGameZion*& out_GameData) {
    return ESaveExistsType::OK;
}

float USaveSubsystem::GetTimeSinceLastGameSave() const {
    return 0.0f;
}

void USaveSubsystem::DeleteSettings() {
}

void USaveSubsystem::DeleteSaveDataAtSlotIndex(int32 SlotIndex) {
}

ESaveCopyResult USaveSubsystem::CopyGameDataToEmptySlot(int32 SlotToCopy, int32& out_TargetSlot) {
    return ESaveCopyResult::Undefined;
}

ESaveExistsType USaveSubsystem::CheckCurrentSlotExistence() {
    return ESaveExistsType::OK;
}


