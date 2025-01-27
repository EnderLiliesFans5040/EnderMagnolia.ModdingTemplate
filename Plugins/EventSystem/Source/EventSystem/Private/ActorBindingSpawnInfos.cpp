#include "ActorBindingSpawnInfos.h"

FActorBindingSpawnInfos::FActorBindingSpawnInfos() {
    this->bDestroyOnEventFinish = false;
    this->bOffsetByHalfHeight = false;
    this->bSpawnVisible = false;
    this->TransformType = EActorBindingTransformType::LocalSpace;
}

