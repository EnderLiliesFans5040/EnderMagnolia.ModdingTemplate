#include "SoundComponent.h"

USoundComponent::USoundComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Material = EEffectMaterialType::None;
    this->GuardMaterial = EEffectGuardMaterialType::None;
    this->VoiceAudioComponent = NULL;
}

void USoundComponent::OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}


