#include "InteractableNPCData.h"

FInteractableNPCData::FInteractableNPCData() {
    this->bOverrideEventAsset = false;
    this->bOverrideAnimations = false;
    this->bOverrideFacing = false;
    this->Facing = EFacingType::None;
}

