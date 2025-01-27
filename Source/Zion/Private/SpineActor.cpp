#include "SpineActor.h"
#include "Components/SceneComponent.h"
#include "SpineSkeletonAnimationExComponent.h"
#include "SpineSkeletonRendererComponent.h"

ASpineActor::ASpineActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->SpineAnimationComponent = CreateDefaultSubobject<USpineSkeletonAnimationExComponent>(TEXT("SpineAnimation"));
    this->SpineRendererComponent = CreateDefaultSubobject<USpineSkeletonRendererComponent>(TEXT("SpineRenderer"));
    this->TrackIndex = 0;
    this->bFlushAnimationsOnActivate = false;
    this->bAutoDeactivate = false;
    this->SpineRendererComponent->SetupAttachment(RootComponent);
}

void ASpineActor::OnActivate_Implementation() {
}

void ASpineActor::Deactivate() {
}

void ASpineActor::Activate(const TArray<FSpineSimpleAnimationDefinition>& AnimationDefinitions) {
}


