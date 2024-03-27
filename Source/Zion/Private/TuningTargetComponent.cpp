#include "TuningTargetComponent.h"

UTuningTargetComponent::UTuningTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoEnable = false;
    this->ScreenBlendMaterial = NULL;
    this->TuningGaugeClass = NULL;
    this->GaugeWidgetHolder = NULL;
}

void UTuningTargetComponent::OnBreak() {
}

bool UTuningTargetComponent::IsEnabled() const {
    return false;
}

float UTuningTargetComponent::GetTuningRatio() const {
    return 0.0f;
}

UStatTuningComponent* UTuningTargetComponent::GetStatTuningComponent() const {
    return NULL;
}


