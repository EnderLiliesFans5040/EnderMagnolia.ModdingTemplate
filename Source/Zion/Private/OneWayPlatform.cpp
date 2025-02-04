#include "OneWayPlatform.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AOneWayPlatform::AOneWayPlatform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->SceneRootComponent = (USceneComponent*)RootComponent;
    this->PlatformComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PlatformComponent"));
    this->BlockerComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockerComponent"));
    this->CollisionEnablerComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("UnderBoxComponent"));
    this->CollisionDisablerComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("UnderBoxDisablerComponent"));
    this->bIsFallThrough = false;
    this->bCheckCharacterBelowPlatform = false;
    this->BlockerComponent->SetupAttachment(PlatformComponent);
    this->CollisionDisablerComponent->SetupAttachment(PlatformComponent);
    this->CollisionEnablerComponent->SetupAttachment(PlatformComponent);
    this->PlatformComponent->SetupAttachment(RootComponent);
}

void AOneWayPlatform::OnComponentOverlapEnd(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AOneWayPlatform::OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool AOneWayPlatform::IsFallThrough() const {
    return false;
}


