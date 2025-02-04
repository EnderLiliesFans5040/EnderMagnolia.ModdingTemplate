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

bool UClearComponent::WasClearedOnPreviousRuns() const {
    return false;
}

void UClearComponent::MarkAsCleared() {
}

bool UClearComponent::IsCleared() const {
    return false;
}

EClearStatus UClearComponent::GetPreviousRunsClearStatus() const {
    return EClearStatus::Undefined;
}

EClearStatus UClearComponent::GetClearStatus() const {
    return EClearStatus::Undefined;
}


