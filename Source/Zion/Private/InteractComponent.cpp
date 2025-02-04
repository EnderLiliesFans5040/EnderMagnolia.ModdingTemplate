#include "InteractComponent.h"

UInteractComponent::UInteractComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractMappingContext = NULL;
    this->InteractInputAction = NULL;
    this->NoDisplayStates.AddDefaulted(2);
    this->AllowedMovementModes.AddDefaulted(3);
    this->IgnoredTags.AddDefaulted(1);
    this->PawnOwner = NULL;
    this->InputComponent = NULL;
    this->MovementComponent = NULL;
    this->StateComponent = NULL;
    this->CommandComponent = NULL;
}

void UInteractComponent::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UInteractComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


