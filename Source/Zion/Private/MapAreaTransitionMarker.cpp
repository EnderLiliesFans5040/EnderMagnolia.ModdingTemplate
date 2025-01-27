#include "MapAreaTransitionMarker.h"
#include "Components/SceneComponent.h"
#include "ElevatorDestinationComponent.h"

AMapAreaTransitionMarker::AMapAreaTransitionMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->SceneRootComponent = (USceneComponent*)RootComponent;
    this->StartPosition = CreateDefaultSubobject<UElevatorDestinationComponent>(TEXT("StartPosition"));
    this->EndPosition = CreateDefaultSubobject<UElevatorDestinationComponent>(TEXT("EndPosition"));
    this->VisualLinkParent = CreateDefaultSubobject<USceneComponent>(TEXT("VisualLinkParent"));
    this->LinkDepthScale = 0.01f;
    this->LinkWidthScale = 0.10f;
    this->LinkMinLength = 0.00f;
    this->EndPosition->SetupAttachment(RootComponent);
    this->StartPosition->SetupAttachment(RootComponent);
    this->VisualLinkParent->SetupAttachment(RootComponent);
}


