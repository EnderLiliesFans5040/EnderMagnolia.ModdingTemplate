#include "InventoryItemGenericAnimationData.h"

FInventoryItemGenericAnimationData::FInventoryItemGenericAnimationData() {
    this->bOverrideSkins = false;
    this->bOverrideLocomotionMode = false;
    this->LocomotionMode = EExtraInfoLocomotionMode::Grounded;
    this->bOverrideSceneOffset = false;
    this->bOverrideSpineWidgetOffset = false;
    this->bOverrideRootMotionMode = false;
    this->RootMotionMode = EExtraAnimationRootMotionMode::None;
}

