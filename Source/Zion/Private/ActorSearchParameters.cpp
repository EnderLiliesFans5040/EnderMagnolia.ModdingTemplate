#include "ActorSearchParameters.h"

FActorSearchParameters::FActorSearchParameters() {
    this->MinDistance = 0.00f;
    this->MaxDistance = 0.00f;
    this->bNeedLineOfSight = false;
    this->VisibilityChannel = ECC_WorldStatic;
    this->bFrontCheck = false;
}

