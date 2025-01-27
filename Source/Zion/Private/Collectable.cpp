#include "Collectable.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "HomingComponent.h"

ACollectable::ACollectable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->FXSystem = NULL;
    this->bActivateOnBeginPlay = true;
    this->bEnableCollisionOnActivate = true;
    this->bDetectionMatchReachedRange = false;
    this->TargetDetectionRange = 500.00f;
    this->MinTimeBeforeTargetReachActivation = 0.25f;
    this->OnCollectFMODEvent = NULL;
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->TargetDetectionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("PlayerDetection"));
    this->TargetReachedComponent = CreateDefaultSubobject<USphereComponent>(TEXT("PlayerReached"));
    this->HomingComponent = CreateDefaultSubobject<UHomingComponent>(TEXT("Homing"));
    this->FXInstance = NULL;
    this->TargetDetectionComponent->SetupAttachment(RootComponent);
    this->TargetReachedComponent->SetupAttachment(RootComponent);
}

void ACollectable::SetActive(bool bSetActive) {
}

void ACollectable::OnTargetOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ACollectable::OnPostSwitchZone(const AStaticVolume_Zone* ActiveZone) {
}

bool ACollectable::IsActive() const {
    return false;
}

float ACollectable::GetTargetDetectionRange() const {
    return 0.0f;
}

AActor* ACollectable::GetCollectingActor() const {
    return NULL;
}

void ACollectable::Collect(AActor* CollectActor) {
}


