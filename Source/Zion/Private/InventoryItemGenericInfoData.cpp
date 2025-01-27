#include "InventoryItemGenericInfoData.h"

FInventoryItemGenericInfoData::FInventoryItemGenericInfoData() {
    this->bIsPlayer = false;
    this->bOverrideNormalBlendMaterial = false;
    this->NormalBlendMaterial = NULL;
    this->bOverrideScreenBlendMaterial = false;
    this->ScreenBlendMaterial = NULL;
    this->LocomotionMode = EExtraInfoLocomotionMode::Grounded;
    this->RootMotionMode = EExtraAnimationRootMotionMode::None;
}

