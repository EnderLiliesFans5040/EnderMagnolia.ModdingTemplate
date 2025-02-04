#include "SpiritSkinUpdaterComponent.h"

USpiritSkinUpdaterComponent::USpiritSkinUpdaterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NecessaryAptitude = EAptitudeType::None;
    this->AnimationComponent = NULL;
}


