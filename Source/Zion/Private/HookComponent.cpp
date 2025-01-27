#include "HookComponent.h"

UHookComponent::UHookComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SphereComponent = NULL;
    this->SphereRadius = 750.00f;
    this->MaxTimeSinceLastRender = 0.20f;
    this->MinHookDistance = 0.00f;
    this->MinAngle = -25.00f;
    this->MaxAngle = 115.00f;
    this->AttachPointZLocationOffset = 0.00f;
    this->HookPointBelowActorDistanceWeightMultiplier = 1.00f;
    this->InvalidStates.AddDefaulted(1);
    this->WorldSpaceHookTargetClass_Point = NULL;
}

void UHookComponent::UnlockHook() {
}

void UHookComponent::SetOverrideHookWorldLocation(const FVector& NewHookWorldLocation) {
}

void UHookComponent::SetOverrideHookPoint(AHookPoint* NewHookPoint) {
}

void UHookComponent::ResetOverrideHookWorldLocation() {
}

void UHookComponent::ResetOverrideHookPoint() {
}



void UHookComponent::OnComponentOverlapEnd(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UHookComponent::OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UHookComponent::OnAptitudesChanged() {
}

void UHookComponent::LockCurrentHook() {
}

FVector UHookComponent::GetHookWorldLocation() const {
    return FVector{};
}

bool UHookComponent::CanTargetHook(EHookType HookType) const {
    return false;
}


