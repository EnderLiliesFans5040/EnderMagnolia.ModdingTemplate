#include "AssistTrigger.h"

UAssistTrigger::UAssistTrigger() {
    this->bUseTriggerLimitCount = false;
    this->TriggerLimitCount = 1;
    this->Cooldown = 0.00f;
    this->InvalidStates.AddDefaulted(2);
}


