#include "GameplayCamera.h"

AGameplayCamera::AGameplayCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InputAction_CameraOffset = NULL;
    this->bUseOscillation = false;
    this->OscillationScale = 0.00f;
    this->DebugAction_Zoom = NULL;
    this->DebugZoomOffset_Speed = 1000.00f;
    this->DebugMinZoomOffset = -5000.00f;
    this->DebugMaxZoomOffset = 0.00f;
    this->DebugAction_FOV = NULL;
    this->DebugFOV_Speed = 5.00f;
    this->DebugMinFOV = 0.00f;
    this->DebugMaxFOV = 120.00f;
    this->DebugAction_LocalOffset = NULL;
    this->DebugLocalOffset_Speed = 100.00f;
}

void AGameplayCamera::UnregisterEnemyPawns(const TArray<APawn*>& EnemyPawnsToRemove) {
}

void AGameplayCamera::UnregisterEnemyPawn(APawn* EnemyPawnToRemove) {
}

void AGameplayCamera::SetSettings(const FGameplayCameraSettings& NewSettings) {
}

void AGameplayCamera::ResetCameraToDefault() {
}

void AGameplayCamera::RegisterEnemyPawns(const TArray<APawn*>& EnemyPawnsToAdd) {
}

void AGameplayCamera::RegisterEnemyPawn(APawn* EnemyPawnToAdd) {
}

void AGameplayCamera::FlushCamera() {
}

void AGameplayCamera::ClearSettings() {
}


