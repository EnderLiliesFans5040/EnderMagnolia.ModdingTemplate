#include "HookPoint.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"

AHookPoint::AHookPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->HookType = EHookType::None;
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->AvailableFXSystem = NULL;
    this->FXInstance = NULL;
    this->SphereComponent->SetupAttachment(RootComponent);
}

EHookType AHookPoint::GetHookType() const {
    return EHookType::None;
}

FTransform AHookPoint::GetHookTransform() const {
    return FTransform{};
}

FVector AHookPoint::GetHookLocation() const {
    return FVector{};
}

USceneComponent* AHookPoint::GetHookAttachComponent() const {
    return NULL;
}


