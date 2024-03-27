#include "StencilComponent.h"

UStencilComponent::UStencilComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StencilCategory = EStencilCategory::None;
}


