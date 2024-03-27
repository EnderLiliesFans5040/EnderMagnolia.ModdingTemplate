#include "SpineFXData.h"

FSpineFXData::FSpineFXData() {
    this->System = NULL;
    this->SpawnBone = ESpineBone::None;
    this->RotationMode = ESpineBoneRotationMode::Actor;
    this->bIgnoreScale = false;
    this->bAttachToBone = false;
    this->bMirrorWhenFacingLeft = false;
    this->bRenderLayerOverride = false;
    this->RenderLayer = ERenderLayerTypes::Default;
    this->bTranslucencyOffsetOverride = false;
    this->TranslucencyOffset = 0;
    this->AttachLocationType = EAttachLocation::KeepRelativeOffset;
    this->bDeactivateOnCommandAbort = false;
    this->IsPlayerEffect = false;
    this->PoolMethod = ENCPoolMethod::None;
}

