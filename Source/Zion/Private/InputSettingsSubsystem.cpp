#include "InputSettingsSubsystem.h"

UInputSettingsSubsystem::UInputSettingsSubsystem() {
}

void UInputSettingsSubsystem::ResetInputMappingContextToDefault(UInputMappingContext* InputMappingContext, bool bIsGamepad) {
}

void UInputSettingsSubsystem::ResetAllInputMappingContextsToDefault(bool bIsGamepad) {
}

bool UInputSettingsSubsystem::RemapKey(const EActionInputType& ActionInputType, const FKey& NewKey, const TSet<EActionInputType>& InvalidInputTypes, bool bIsGamepadKey) {
    return false;
}

FName UInputSettingsSubsystem::GetMappingNameFromInputAction(const UInputAction* InputAction, bool bIsGamepad) const {
    return NAME_None;
}

FKey UInputSettingsSubsystem::GetMappedKey(const FName& MappingName) const {
    return FKey{};
}


