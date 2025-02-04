#include "StatHPComponent.h"

UStatHPComponent::UStatHPComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInstantKilled = false;
}

AActor* UStatHPComponent::GetLastDamageSource() const {
    return NULL;
}

bool UStatHPComponent::DoHeal(AActor* Source, int32 Value) {
    return false;
}

bool UStatHPComponent::DoDamage(AActor* Source, const FDamageData& DamageData) {
    return false;
}


