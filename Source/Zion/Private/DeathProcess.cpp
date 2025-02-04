#include "DeathProcess.h"

UDeathProcess::UDeathProcess() {
    this->FacingMode = EDeathFacingMode::None;
    this->BorderDistanceForFallback = 500.00f;
}

void UDeathProcess::Update_Implementation(AActor* Actor, float DeltaTime) {
}

void UDeathProcess::OnFinish_Implementation() {
}

void UDeathProcess::Launch_Implementation(AActor* Actor) {
}

void UDeathProcess::Initialize_Implementation(AActor* Actor) {
}

void UDeathProcess::FinishProcess() {
}

void UDeathProcess::Destroy_Implementation() {
}


