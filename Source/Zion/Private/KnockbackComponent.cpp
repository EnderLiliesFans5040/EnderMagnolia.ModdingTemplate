#include "KnockbackComponent.h"

UKnockbackComponent::UKnockbackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GlobalStates.AddDefaulted(2);
    this->StatePhase_Launch.AddDefaulted(1);
    this->PostKnockbackStatesDuration = 1.00f;
    this->bSetFacing = true;
    this->bIgnoreKnockbackDuringKnockback = false;
    this->ImpulseForceFactor = 1.00f;
    this->MinImpulseForLaunch = 0.00f;
    this->bRestoreDefaultMovementMode = false;
}

void UKnockbackComponent::StartKnockback(const FKnockbackData& KnockbackData, const FVector& KnockbackDirection) {
}

void UKnockbackComponent::OnRecoveryAnimationFinished() {
}

void UKnockbackComponent::OnPreStartCommand(const UCommand* Command) {
}

void UKnockbackComponent::OnLandingAnimationFinished() {
}

bool UKnockbackComponent::IsInKnockback() const {
    return false;
}


