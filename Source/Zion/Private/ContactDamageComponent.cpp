#include "ContactDamageComponent.h"

UContactDamageComponent::UContactDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DelayBeforeReEntry = 0.50f;
    this->bReTriggerAbility = false;
    this->AbilityTriggerDelay = 1.00f;
}

void UContactDamageComponent::OnHitboxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UContactDamageComponent::OnHitboxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


