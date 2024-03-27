#include "PlayerCameraManagerZion.h"

APlayerCameraManagerZion::APlayerCameraManagerZion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
    this->GameplayCameraClass = NULL;
    this->MainMPC = NULL;
    this->bSimulateAspectRatioLock = false;
}

void APlayerCameraManagerZion::SetViewTargetToGameplayCamera(FViewTargetTransitionParams ViewTargetTransitionParams, bool bInterruptOnGoingBlend) {
}

void APlayerCameraManagerZion::ResetCameraLocation() {
}

AGameplayCamera* APlayerCameraManagerZion::GetGameplayCamera() const {
    return NULL;
}

FBox APlayerCameraManagerZion::GetActiveCameraClampBox() const {
    return FBox{};
}

APlayerCameraManagerZion* APlayerCameraManagerZion::Get(const UObject* WorldContextObject, int32 PlayerControllerIndex) {
    return NULL;
}


