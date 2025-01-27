#include "Command_HoldGuard.h"

UCommand_HoldGuard::UCommand_HoldGuard() {
    this->MaxEnergy = 100.00f;
    this->EnergyCostPerSecond = 20.00f;
    this->EnergyRegenPerSecond = 10.00f;
    this->DamageCutPercentageBonus = 0.00f;
    this->bUseAbilityCooldown = false;
    this->AbilityCooldown = 0.20f;
    this->GaugeClass = NULL;
    this->GaugeWidgetHolder = NULL;
}


void UCommand_HoldGuard::OnReceivedDamage(AActor* Source, int32 Value) {
}

void UCommand_HoldGuard::OnGuarded(AAbility* Ability, AActor* Source) {
}

bool UCommand_HoldGuard::IsReleased() const {
    return false;
}


