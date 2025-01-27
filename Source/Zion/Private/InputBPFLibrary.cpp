#include "InputBPFLibrary.h"

UInputBPFLibrary::UInputBPFLibrary() {
}

bool UInputBPFLibrary::IsSameVerticalDirection(EInputDirection DirectionA, EInputDirection DirectionB, bool bConsiderNeutralAsSame) {
    return false;
}

bool UInputBPFLibrary::IsSameHorizontalDirection(EInputDirection DirectionA, EInputDirection DirectionB, bool bConsiderNeutralAsSame) {
    return false;
}

bool UInputBPFLibrary::IsInputActionTriggering(const FInputSnapshot& InputSnapshot, const UInputAction* InputAction) {
    return false;
}

bool UInputBPFLibrary::IsInputActionJustTriggered(const FInputSnapshot& InputSnapshot, const UInputAction* InputAction) {
    return false;
}

bool UInputBPFLibrary::IsEqual(const FInputSnapshot& A, const FInputSnapshot& B) {
    return false;
}


