#include "Interactable.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneComponent.h"
#include "Components/WidgetComponent.h"

AInteractable::AInteractable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->OnSuccessCommand = NULL;
    this->OnFailureCommand = NULL;
    this->OnSuccessFMODEvent = NULL;
    this->OnFailureFMODEvent = NULL;
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("EditorBillboard"));
    this->WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
    this->BillboardComponent->SetupAttachment(RootComponent);
    this->WidgetComponent->SetupAttachment(RootComponent);
}

void AInteractable::SetCanBeInteracted(bool bCanInteract) {
}

void AInteractable::PlaySoundEvent(UFMODEvent* SoundEffect) const {
}

void AInteractable::OnInteract_ConditionCheckFailed_Implementation(APlayerController* Controller) {
}

void AInteractable::OnInteract_Implementation(APlayerController* Controller) {
}



FText AInteractable::GetInteractionText_Implementation() const {
    return FText::GetEmpty();
}

APlayerController* AInteractable::GetInteractingController() const {
    return NULL;
}

bool AInteractable::ConditionsChecked() const {
    return false;
}

bool AInteractable::CanBeInteracted_Implementation() const {
    return false;
}


