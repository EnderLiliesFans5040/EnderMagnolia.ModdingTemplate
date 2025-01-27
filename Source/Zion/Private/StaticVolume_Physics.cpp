#include "StaticVolume_Physics.h"

AStaticVolume_Physics::AStaticVolume_Physics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Priority = 0;
    this->FluidFriction = 1.00f;
    this->TerminalVelocity = 100.00f;
    this->VirtualPhysicsVolume = NULL;
}


