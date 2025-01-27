#include "HitStopComponent.h"

UHitStopComponent::UHitStopComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitStopFactor = 1.00f;
    this->AdditionalHitStopStates.AddDefaulted(3);
}

void UHitStopComponent::LaunchHitStop(float HitStopDuration) {
}

bool UHitStopComponent::IsInHitStop() const {
    return false;
}


