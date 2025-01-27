#include "PlayerControllerZionBase.h"
#include "PlayerCameraManagerZion.h"

APlayerControllerZionBase::APlayerControllerZionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = APlayerCameraManagerZion::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
}


