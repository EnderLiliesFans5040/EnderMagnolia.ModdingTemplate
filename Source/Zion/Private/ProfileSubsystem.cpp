#include "ProfileSubsystem.h"

UProfileSubsystem::UProfileSubsystem() {
}

bool UProfileSubsystem::IsUsingProfileSystem() const {
    return false;
}

FString UProfileSubsystem::GetCurrentProfileName() const {
    return TEXT("");
}


