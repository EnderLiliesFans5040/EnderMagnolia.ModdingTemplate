#include "StaticVolume_Audio.h"

AStaticVolume_Audio::AStaticVolume_Audio(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bInfiniteExtent = false;
    this->Priority = 0;
}

bool AStaticVolume_Audio::IsInfiniteExtent() const {
    return false;
}


