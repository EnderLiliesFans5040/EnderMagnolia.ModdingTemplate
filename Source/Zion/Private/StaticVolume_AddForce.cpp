#include "StaticVolume_AddForce.h"

AStaticVolume_AddForce::AStaticVolume_AddForce(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MoveFactorCurve = NULL;
    this->AccumulateMode = ERootMotionAccumulateMode::Additive;
    this->bLocalSpace = false;
}

void AStaticVolume_AddForce::OnCharacterMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}


