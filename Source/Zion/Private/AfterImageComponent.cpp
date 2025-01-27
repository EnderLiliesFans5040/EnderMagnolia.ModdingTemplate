#include "AfterImageComponent.h"
#include "Components/SceneCaptureComponent.h"

UAfterImageComponent::UAfterImageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PrimitiveRenderMode = ESceneCapturePrimitiveRenderMode::PRM_UseShowOnlyList;
    this->bCaptureEveryFrame = false;
    this->bCaptureOnMovement = false;
    this->ProjectionType = ECameraProjectionMode::Orthographic;
    this->RenderTargetSize = 256;
    this->AfterImageCount = 5;
    this->UpdatePeriod = 0.05f;
    this->bAlwaysEnabled = false;
    this->AfterImageType = EAfterImageType::None;
    this->AfterImageRendererClass = NULL;
}

void UAfterImageComponent::SetAfterImageType(EAfterImageType NewAfterImageType) {
}

EAfterImageType UAfterImageComponent::GetAfterImageType() const {
    return EAfterImageType::None;
}


