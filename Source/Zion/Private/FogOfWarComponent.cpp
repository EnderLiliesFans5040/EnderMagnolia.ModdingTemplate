#include "FogOfWarComponent.h"

UFogOfWarComponent::UFogOfWarComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MapAreaMaterial = NULL;
    this->ClearZoneMaterial = NULL;
    this->ClearZoneMID = NULL;
    this->ClearFogOfWarMaterial = NULL;
    this->ClearFogOfWarMID = NULL;
    this->FogOfWarBlockerMID = NULL;
    this->FogOfWarMaskRTBuffer = NULL;
    this->ZonesClearedMaskRTBuffer = NULL;
}

void UFogOfWarComponent::ResetMapFogOfWar(const FName& MapName) {
}

void UFogOfWarComponent::ResetAllMapsFogOfWar() {
}

void UFogOfWarComponent::ClearMapFogOfWar(const FName& MapName) {
}

void UFogOfWarComponent::ClearAllMapsFogOfWar() {
}


