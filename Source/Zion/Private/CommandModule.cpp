#include "CommandModule.h"

UCommandModule::UCommandModule() {
    this->bEnabled = true;
    this->bWaitForModuleToComplete = true;
}

void UCommandModule::OnStart_Implementation() {
}

void UCommandModule::OnReset_Implementation() {
}

void UCommandModule::OnInitialize_Implementation() {
}

void UCommandModule::OnFinish_Implementation() {
}

float UCommandModule::GetExecutionTime() const {
    return 0.0f;
}

UCommand* UCommandModule::GetCommand() const {
    return NULL;
}

ACharacter* UCommandModule::GetCharacter() const {
    return NULL;
}


