#include "RecollectionBossRushComponent.h"

URecollectionBossRushComponent::URecollectionBossRushComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentBossRushIndex = -1;
}

void URecollectionBossRushComponent::UnbindEvents() {
}

int32 URecollectionBossRushComponent::TryAddNewRecord(const FRecollectionBossRushRecordData& NewRecordData) {
    return 0;
}

void URecollectionBossRushComponent::StartBossRush() {
}

bool URecollectionBossRushComponent::SetTimerPaused(bool bIsPaused) {
    return false;
}

void URecollectionBossRushComponent::ResetRecords() {
}





bool URecollectionBossRushComponent::IsTimerPaused() const {
    return false;
}

bool URecollectionBossRushComponent::IsBossRushActive() const {
    return false;
}

void URecollectionBossRushComponent::GoToNextBoss() {
}

FRecollectionBossRushRecordData URecollectionBossRushComponent::GetRecordData(const int32 RecordIndex) const {
    return FRecollectionBossRushRecordData{};
}

float URecollectionBossRushComponent::GetBossRushTime() const {
    return 0.0f;
}

void URecollectionBossRushComponent::EndBossRush() {
}

void URecollectionBossRushComponent::ClearBossRush() {
}

bool URecollectionBossRushComponent::CanUpdateTime_Implementation() const {
    return false;
}

void URecollectionBossRushComponent::BindEvents() {
}


