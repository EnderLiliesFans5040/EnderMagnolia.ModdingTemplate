#include "CommandModule_EnableCustomHurtbox.h"

UCommandModule_EnableCustomHurtbox::UCommandModule_EnableCustomHurtbox() {
    this->bWaitForModuleToComplete = false;
    this->ActiveType = EEnableCustomHurtboxActiveType::UntilCommandEnd;
    this->StartTime = 0.00f;
    this->EndTime = 0.00f;
}


