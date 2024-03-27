#include "FXComponent.h"

UFXComponent::UFXComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTriggerStepOnLanding = false;
    this->LandingStepHeaviness = EStepHeavinessCategory::Heavy;
}

void UFXComponent::OnLanded(const FHitResult& Hit) {
}

void UFXComponent::OnFinishCommand(const UCommand* Command, ECommandFinishType FinishType) {
}

void UFXComponent::OnDeathProcessStart() {
}


