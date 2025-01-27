#include "SpineMeshMaskComponent.h"

USpineMeshMaskComponent::USpineMeshMaskComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRenderInMainPass = false;
    this->bRenderInDepthPass = false;
    this->bReceivesDecals = false;
    this->bUseAsOccluder = false;
    this->bRenderCustomDepth = true;
    this->ScaleOffsetParameterName = TEXT("ScaleOffset");
    this->ScaleOffset = 0.03f;
    this->UseAlternatePivotComputationParameterName = TEXT("UseAlternatePivotComputation");
    this->bUseAlternatePivotComputation = false;
}

void USpineMeshMaskComponent::SetScaleOffset(float InScaleOffset) {
}


