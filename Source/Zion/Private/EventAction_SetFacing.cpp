#include "EventAction_SetFacing.h"

UEventAction_SetFacing::UEventAction_SetFacing() {
    this->bPlayAnimation = true;
    this->AnimationType = EFacingAnimationType::Auto;
    this->TurnAnimationDefinitions.AddDefaulted(1);
}


