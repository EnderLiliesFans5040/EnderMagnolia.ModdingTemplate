#include "MovingBlock_Elevator.h"
#include "Components/SceneComponent.h"
#include "ElevatorDestinationComponent.h"
#include "ElevatorMovementComponent.h"
#include "RopeComponent.h"

AMovingBlock_Elevator::AMovingBlock_Elevator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SceneRootComponent = (USceneComponent*)RootComponent;
    this->MovingComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Moving"));
    this->Destination = CreateDefaultSubobject<USceneComponent>(TEXT("Destination"));
    this->RopeAttachPoint = CreateDefaultSubobject<USceneComponent>(TEXT("RopeAttachPoint"));
    this->RopeDestinationPoint = CreateDefaultSubobject<UElevatorDestinationComponent>(TEXT("RopeDestinationPoint"));
    this->ElevatorMovementComponent = CreateDefaultSubobject<UElevatorMovementComponent>(TEXT("ElevatorMovement"));
    this->RopeComponent = CreateDefaultSubobject<URopeComponent>(TEXT("Rope"));
    this->Destination->SetupAttachment(RootComponent);
    this->MovingComponent->SetupAttachment(RootComponent);
    this->RopeAttachPoint->SetupAttachment(MovingComponent);
    this->RopeDestinationPoint->SetupAttachment(RootComponent);
}

void AMovingBlock_Elevator::OnStartMovement(bool bInstant, bool bWasMoving) {
}

void AMovingBlock_Elevator::OnFinishMovement(bool bInstant, bool bWasMoving) {
}

void AMovingBlock_Elevator::CallToOrigin(bool bInstant) {
}

void AMovingBlock_Elevator::CallToDestination(bool bInstant) {
}


