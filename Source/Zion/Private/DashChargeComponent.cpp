#include "DashChargeComponent.h"

UDashChargeComponent::UDashChargeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DashTimeForCharge = 1.00f;
    this->DashTimeForChargeShort = 1.00f;
    this->ChargeDashSpeedFactorToAdd = 0.00f;
    this->DefaultSpiritClass = NULL;
    this->SwimmingSpiritClass = NULL;
    this->AuraFX = NULL;
    this->Ability = NULL;
    this->Spirit = NULL;
}

void UDashChargeComponent::OnStartAnimation(UTrackEntry* TrackEntry) {
}

void UDashChargeComponent::OnGameMapChanged() {
}

bool UDashChargeComponent::IsDashCharged() const {
    return false;
}


