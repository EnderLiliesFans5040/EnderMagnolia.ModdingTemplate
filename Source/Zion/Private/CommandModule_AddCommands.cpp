#include "CommandModule_AddCommands.h"

UCommandModule_AddCommands::UCommandModule_AddCommands() {
    this->bWaitForModuleToComplete = false;
    this->bAbortOnSuccess = false;
    this->ActiveType = ECommandModuleActiveType::Always;
    this->StartTime = 0.00f;
    this->EndTime = 0.00f;
}


