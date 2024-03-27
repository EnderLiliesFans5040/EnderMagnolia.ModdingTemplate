#include "HealComponent.h"

UHealComponent::UHealComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BaseHealPower = 100;
    this->MaxBonusHealPower = 100;
    this->MaxBonusHealCount = 7;
    this->BaseHealCount = 3;
    this->BonusHealCount = 0;
    this->AdditiveBonusHealCount = 0;
    this->HealPowerPercentageBonus = 0;
    this->CurrHealCount = 0;
    this->BonusHealPower = 0;
}

void UHealComponent::UseHeal() {
}

int32 UHealComponent::SubHealPowerPercentageBonus(int32 HealPercentBonusToSub) {
    return 0;
}

int32 UHealComponent::SubHealCountBonus(int32 HealCountBonusToSub) {
    return 0;
}

int32 UHealComponent::RestoreHeals(const int32 RestoreCount) {
    return 0;
}

bool UHealComponent::IsHealCountMax() const {
    return false;
}

int32 UHealComponent::GetRemainingHealCount() const {
    return 0;
}

int32 UHealComponent::GetMaxHealCount() const {
    return 0;
}

int32 UHealComponent::GetHealValue() const {
    return 0;
}

bool UHealComponent::FullyRestoreHeals() {
    return false;
}

int32 UHealComponent::AddHealPowerPercentageBonus(int32 HealPercentBonusToAdd) {
    return 0;
}

int32 UHealComponent::AddHealCountBonus(int32 HealCountBonusToAdd) {
    return 0;
}


