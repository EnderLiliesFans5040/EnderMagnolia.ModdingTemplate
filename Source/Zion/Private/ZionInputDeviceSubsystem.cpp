#include "ZionInputDeviceSubsystem.h"

UZionInputDeviceSubsystem::UZionInputDeviceSubsystem() {
}

void UZionInputDeviceSubsystem::UnlockActiveController(bool bResetLockCount) {
}

void UZionInputDeviceSubsystem::SetInputStyleGamepadOverride(EInputStyle NewInputStyleGamepadOverride) {
}

void UZionInputDeviceSubsystem::LockActiveController() {
}

bool UZionInputDeviceSubsystem::IsUsingGamepad() const {
    return false;
}

bool UZionInputDeviceSubsystem::IsCursorVisible() const {
    return false;
}

bool UZionInputDeviceSubsystem::IsAnyGamepadConnected() const {
    return false;
}

bool UZionInputDeviceSubsystem::IsActiveControllerLocked() const {
    return false;
}

EInputStyle UZionInputDeviceSubsystem::GetInputStyleGamepadOverride() const {
    return EInputStyle::None;
}

EInputStyle UZionInputDeviceSubsystem::GetInputStyle() const {
    return EInputStyle::None;
}

int32 UZionInputDeviceSubsystem::GetActiveControllerID() {
    return 0;
}


