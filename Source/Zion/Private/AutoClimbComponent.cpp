#include "AutoClimbComponent.h"

UAutoClimbComponent::UAutoClimbComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AllowedMaxZVelocity = 0.00f;
    this->MaxAngleForClimb = 40.00f;
    this->ForwardOffset = 25.00f;
    this->MinHeightForAutoClimbHigh = 120.00f;
    this->MaxHeightForAutoClimbHigh = 200.00f;
    this->MinHeightForAutoClimbMiddle = 70.00f;
    this->MaxHeightForAutoClimbMiddle = 120.00f;
    this->MinHeightForAutoClimbLow = 0.00f;
    this->MaxHeightForAutoClimbLow = 70.00f;
    this->MinHeightForAutoClimbDashCharge = 0.00f;
    this->MaxHeightForAutoClimbDashCharge = 150.00f;
    this->DistanceAboveHeadToCheck = 80.00f;
    this->bCheckTargetLocation = false;
    this->AutoClimbHigh_CommandSettings = NULL;
    this->AutoClimbMiddle_CommandSettings = NULL;
    this->AutoClimbLow_CommandSettings = NULL;
    this->AutoClimbDash_CommandSettings = NULL;
    this->AutoClimbDashCharge_CommandSettings = NULL;
    this->AutoClimbFallthroughHigh_CommandSettings = NULL;
    this->AutoClimbFallthroughMiddle_CommandSettings = NULL;
    this->AutoClimbFallthroughLow_CommandSettings = NULL;
    this->AutoClimbFallthroughDash_CommandSettings = NULL;
    this->AutoClimbFallthroughDashCharge_CommandSettings = NULL;
    this->IgnoreAutoClimbStates.AddDefaulted(3);
    this->PreAutoClimbStates.AddDefaulted(3);
    this->BoxComponent = NULL;
}

void UAutoClimbComponent::UnmarkActorAsIgnored(AActor* Actor) {
}

void UAutoClimbComponent::OnMoveBlocked(const FHitResult& Impact) {
}

void UAutoClimbComponent::OnComponentOverlapEnd(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UAutoClimbComponent::OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UAutoClimbComponent::MarkActorAsIgnored(AActor* Actor) {
}

FVector UAutoClimbComponent::GetLastTargetLocation() const {
    return FVector{};
}


