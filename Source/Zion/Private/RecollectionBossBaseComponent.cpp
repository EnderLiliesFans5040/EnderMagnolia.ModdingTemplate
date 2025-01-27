#include "RecollectionBossBaseComponent.h"

URecollectionBossBaseComponent::URecollectionBossBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExitRespawnReason = ERespawnReason::Death;
}

void URecollectionBossBaseComponent::Start() {
}

void URecollectionBossBaseComponent::RetryRecollectionMode() {
}

void URecollectionBossBaseComponent::OnRetryDialogYes() {
}

void URecollectionBossBaseComponent::OnRetryDialogNo() {
}

void URecollectionBossBaseComponent::OnDialogClosed() {
}

bool URecollectionBossBaseComponent::IsStarted() const {
    return false;
}

bool URecollectionBossBaseComponent::IsEnemyDead() const {
    return false;
}

AEnemySpawner* URecollectionBossBaseComponent::GetCachedEnemySpawner() const {
    return NULL;
}

void URecollectionBossBaseComponent::GameMapChange() {
}

void URecollectionBossBaseComponent::Finish() {
}

void URecollectionBossBaseComponent::ExitRecollectionMode() const {
}

void URecollectionBossBaseComponent::BossDeathStart(AEnemySpawner* EnemySpawner) {
}

void URecollectionBossBaseComponent::BossDeathEndPostDelay() {
}

void URecollectionBossBaseComponent::BossDeathEnd(AEnemySpawner* EnemySpawner) {
}


