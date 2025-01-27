#include "StatSPComponent.h"

UStatSPComponent::UStatSPComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    const FProperty* p_bFullyRestoreOnBeginPlay = GetClass()->FindPropertyByName("bFullyRestoreOnBeginPlay");
    (*p_bFullyRestoreOnBeginPlay->ContainerPtrToValuePtr<bool>(this)) = false;
    this->SPRegenPercentageBonus = 0;
}

int32 UStatSPComponent::SubSPRegenPercentageBonus(int32 SPRegenPercentBonusToSub) {
    return 0;
}

int32 UStatSPComponent::GetFilledGaugeCount() const {
    return 0;
}

int32 UStatSPComponent::AddSPRegenPercentageBonus(int32 SPRegenPercentBonusToAdd) {
    return 0;
}


