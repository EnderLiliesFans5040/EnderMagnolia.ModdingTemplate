#include "SpineColorComponent.h"

USpineColorComponent::USpineColorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkinMaterial = NULL;
}

void USpineColorComponent::SetColor(FLinearColor Color, float Alpha, float LerpDuration) {
}

void USpineColorComponent::OnGotAbilityApplied(AAbility* Ability, AActor* Source, const FHitData& HitData) {
}

void USpineColorComponent::FlashColor(FLinearColor Color, float Alpha, float FlashDuration) {
}

void USpineColorComponent::ClearColor(float LerpDuration) {
}


