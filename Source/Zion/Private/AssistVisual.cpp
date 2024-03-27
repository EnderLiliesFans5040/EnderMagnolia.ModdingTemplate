#include "AssistVisual.h"
#include "Components/SceneComponent.h"
#include "SpineSkeletonAnimationExComponent.h"
#include "SpineSkeletonRendererComponent.h"
#include "FollowTargetComponent.h"

AAssistVisual::AAssistVisual(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->SpineRendererComponent = CreateDefaultSubobject<USpineSkeletonRendererComponent>(TEXT("SpineRenderer"));
    this->SpineAnimationComponent = CreateDefaultSubobject<USpineSkeletonAnimationExComponent>(TEXT("SpineAnimation"));
    this->FollowTarget = CreateDefaultSubobject<UFollowTargetComponent>(TEXT("FollowTarget"));
    this->SpineRendererComponent->SetupAttachment(RootComponent);
}


