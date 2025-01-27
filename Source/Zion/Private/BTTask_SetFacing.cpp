#include "BTTask_SetFacing.h"

UBTTask_SetFacing::UBTTask_SetFacing() {
    this->NodeName = TEXT("[Zion] Set Facing");
    this->bInvert = false;
    this->bPlayAnimation = true;
    this->TurnAnimations.AddDefaulted(1);
}


