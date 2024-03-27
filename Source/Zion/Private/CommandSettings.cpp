#include "CommandSettings.h"

FCommandSettings::FCommandSettings() {
    this->Category = ECommandCategory::Default;
    this->Priority = (ECommandPriorityType)0;
    this->CommandLayer = ECommandLayerType::Default;
    this->InputAction = NULL;
    this->bRemoveOnStartFailure = false;
    this->InputActionTriggerMode = EInputActionTriggerMode::None;
    this->BufferTTL = 0.00f;
    this->CommandClass = NULL;
}

