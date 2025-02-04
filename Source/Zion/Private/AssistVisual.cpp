#include "AssistVisual.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "FollowTargetComponent.h"

AAssistVisual::AAssistVisual(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->VisualComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Visual"));
    this->FollowTarget = CreateDefaultSubobject<UFollowTargetComponent>(TEXT("FollowTargetComp"));
    this->AttachBone = ESpineBone::Hip;
    this->LightAlphaParameterName = TEXT("LightAlpha");
    this->VisualComponent->SetupAttachment(RootComponent);
}

void AAssistVisual::OnGameMapChanged() {
}


