#include "AbilityHitboxScaling.h"
#include "Components/SceneComponent.h"

AAbilityHitboxScaling::AAbilityHitboxScaling(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ScaleContainer = CreateDefaultSubobject<USceneComponent>(TEXT("ScaleContainer"));
    this->CollisionChannel = ECC_Visibility;
    this->BeamFX = NULL;
    this->BeamCollisionFX = NULL;
    this->MaxRange = 500.00f;
    this->ScaleContainer->SetupAttachment(RootComponent);
}


