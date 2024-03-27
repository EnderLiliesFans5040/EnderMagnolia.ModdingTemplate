#include "InteractComponent.h"

UInteractComponent::UInteractComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractMappingContext = NULL;
    this->InteractInputAction = NULL;
    this->NoDisplayStates.AddDefaulted(2);
    this->AllowedMovementModes.AddDefaulted(3);
}

void UInteractComponent::OnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void UInteractComponent::OnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}


