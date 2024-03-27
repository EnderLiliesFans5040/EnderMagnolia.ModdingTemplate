#include "RenderLayerComponent.h"

URenderLayerComponent::URenderLayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RenderLayerType = ERenderLayerTypes::Default;
}


