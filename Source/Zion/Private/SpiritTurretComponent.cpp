#include "SpiritTurretComponent.h"

USpiritTurretComponent::USpiritTurretComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDismissOnZoneSwitch = true;
    this->SummonerLinkFX = NULL;
    this->SpiritOwner = NULL;
    this->CommandComponent = NULL;
    this->BoneComponent = NULL;
    this->AutoCommandSet = NULL;
}


