#include "MovingPlatform_Elevator.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "ElevatorDestinationComponent.h"
#include "ElevatorMovementComponent.h"

AMovingPlatform_Elevator::AMovingPlatform_Elevator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerDetector = CreateDefaultSubobject<USphereComponent>(TEXT("PlayerDetector"));
    this->ElevatorDestination = CreateDefaultSubobject<UElevatorDestinationComponent>(TEXT("Destination"));
    this->RopeAttachPoint = CreateDefaultSubobject<USceneComponent>(TEXT("RopeAttachPoint"));
    this->RopeDestinationPoint = CreateDefaultSubobject<UElevatorDestinationComponent>(TEXT("RopeDestinationPoint"));
    this->ElevatorMovementComponent = CreateDefaultSubobject<UElevatorMovementComponent>(TEXT("ElevatorMovement"));
    this->bCacheElevatorState = true;
    this->PlayerDetectionRange = 1000.00f;
    this->bUseRope = false;
    this->RopeWidthScale = 0.10f;
    this->RopeMinLength = 0.00f;
    this->CameraShake = NULL;
    this->InnerRadius = 0.00f;
    this->OuterRadius = 100000.00f;
    this->Falloff = 0.00f;
    this->bOrientShakeTowardsEpicenter = false;
    this->ForceFeedbackEffect = NULL;
    this->PlayerDetector->SetupAttachment(PlatformComponent);
    this->ElevatorDestination->SetupAttachment(RootComponent);
    this->RopeAttachPoint->SetupAttachment(PlatformComponent);
    this->RopeDestinationPoint->SetupAttachment(RootComponent);
}

void AMovingPlatform_Elevator::TriggerElevator() {
}

void AMovingPlatform_Elevator::OnStartMovement(bool bInstant, bool bWasMoving) {
}

void AMovingPlatform_Elevator::OnPlayerDetectorOverlapEnd(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AMovingPlatform_Elevator::OnPlayerDetectorOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AMovingPlatform_Elevator::OnFinishMovement(bool bInstant, bool bWasMoving) {
}

bool AMovingPlatform_Elevator::IsMoving() const {
    return false;
}

float AMovingPlatform_Elevator::GetPlayerDetectionRange() const {
    return 0.0f;
}

void AMovingPlatform_Elevator::CallToOrigin() {
}

void AMovingPlatform_Elevator::CallToDestination() {
}


