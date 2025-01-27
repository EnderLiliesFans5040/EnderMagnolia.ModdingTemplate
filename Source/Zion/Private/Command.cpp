#include "Command.h"
#include "Templates/SubclassOf.h"

UCommand::UCommand() {
}






bool UCommand::OnCanBeStarted_Implementation() {
    return false;
}

bool UCommand::IsInvokedInputPressed() const {
    return false;
}

UCommandSet* UCommand::GetSourceCommandSet() const {
    return NULL;
}

APawn* UCommand::GetPawn() const {
    return NULL;
}

UMovementComponent* UCommand::GetMovementComponent() const {
    return NULL;
}

UCommandModule* UCommand::GetModule(TSubclassOf<UCommandModule> CommandModuleClass, bool bEnsureIfMissing) const {
    return NULL;
}

UInputAction* UCommand::GetInvokedInputAction() const {
    return NULL;
}

FInputSnapshot UCommand::GetInputSnapshot() const {
    return FInputSnapshot{};
}

float UCommand::GetExecutionTime() const {
    return 0.0f;
}

ECommandLayerType UCommand::GetCommandLayer() const {
    return ECommandLayerType::Default;
}

ECommandCategory UCommand::GetCommandCategory() const {
    return ECommandCategory::Default;
}

ACharacter* UCommand::GetCharacter() const {
    return NULL;
}


