#include "FactionComponent.h"

UFactionComponent::UFactionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Faction = EFaction::None;
}


