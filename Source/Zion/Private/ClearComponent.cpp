#include "ClearComponent.h"

UClearComponent::UClearComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = true;
    this->bSaveClearStatus = false;
    this->bCheckPreviousRuns = false;
    this->bCountForZoneCompletion = false;
    this->bCountForZoneReveal = false;
    this->bDestroyActorOnClear = false;
    this->bOverrideClearWorld = false;
}

void UClearComponent::MarkAsCleared() {
}

bool UClearComponent::IsCleared() const {
    return false;
}

EClearStatus UClearComponent::GetClearStatus() const {
    return EClearStatus::Undefined;
}


