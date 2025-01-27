#include "SpineHighlightComponent.h"

USpineHighlightComponent::USpineHighlightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StencilCategory = EStencilCategory::None;
}

void USpineHighlightComponent::OnAnimationStart(UTrackEntry* Entry) {
}


