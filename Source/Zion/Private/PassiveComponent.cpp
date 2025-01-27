#include "PassiveComponent.h"

UPassiveComponent::UPassiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxPassiveCount = 10;
    this->DefaultSlotCount = 10;
    this->AdditionalSlotCount = 0;
    this->UsedSlotCount = 0;
}

bool UPassiveComponent::UnequipPassive(const FName& PassiveID) {
    return false;
}

void UPassiveComponent::OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn) {
}

bool UPassiveComponent::IsPassiveEquipped(const FName& PassiveID) const {
    return false;
}

int32 UPassiveComponent::GetUsedSlotCount() const {
    return 0;
}

int32 UPassiveComponent::GetSlotCount() const {
    return 0;
}

TArray<FPassiveRuntimeData> UPassiveComponent::GetEquippedPassives() const {
    return TArray<FPassiveRuntimeData>();
}

int32 UPassiveComponent::GetAvailableSlotCount() const {
    return 0;
}

EPassiveEquipResult UPassiveComponent::EquipPassive(const FName& PassiveID) {
    return EPassiveEquipResult::Success;
}

EPassiveEquipResult UPassiveComponent::CanEquipPassive(const FInventoryItemPassiveData& ItemPassiveData) const {
    return EPassiveEquipResult::Success;
}


