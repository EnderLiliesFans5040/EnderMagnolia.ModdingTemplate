#include "FMODAudioLinkComponent.h"

UFMODAudioLinkComponent::UFMODAudioLinkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Settings = NULL;
    this->Sound = NULL;
    this->AudioComponent = NULL;
}


