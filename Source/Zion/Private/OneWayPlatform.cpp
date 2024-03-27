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
    this->PlatformComponent->SetupAttachment(RootComponent);
    this->BlockerComponent->SetupAttachment(PlatformComponent);
    this->CollisionEnablerComponent->SetupAttachment(PlatformComponent);
    this->CollisionDisablerComponent->SetupAttachment(PlatformComponent);
}

void AOneWayPlatform::UnmarkAsIgnoreForActor(AActor* Actor) {
}

void AOneWayPlatform::SetIsIgnoredForFallThrough(bool IsIgnoredForFallThrough) {
}

void AOneWayPlatform::OnComponentOverlapEnd(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AOneWayPlatform::OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AOneWayPlatform::MarkAsIgnoreForActor(AActor* Actor, bool IsIgnoredForFallThrough) {
}

bool AOneWayPlatform::IsFallThrough() const {
    return false;
}


