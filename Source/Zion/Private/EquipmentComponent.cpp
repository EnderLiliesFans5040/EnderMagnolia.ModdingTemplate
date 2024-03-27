#include "EquipmentComponent.h"

UEquipmentComponent::UEquipmentComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UEquipmentComponent::UnEquipAll() {
}

void UEquipmentComponent::UnEquip(EEquipmentSlot EquipmentSlot) {
}

void UEquipmentComponent::OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn) {
}

bool UEquipmentComponent::IsEquippedOnSlot(EEquipmentSlot EquipmentSlot, const FName& EquipmentID) const {
    return false;
}

bool UEquipmentComponent::IsEquipped(const FName& EquipmentID) const {
    return false;
}

FName UEquipmentComponent::GetEquipmentIDFromSlot(EEquipmentSlot EquipmentSlot) const {
    return NAME_None;
}

FInventoryItemEquipmentData UEquipmentComponent::GetEquipmentDataFromSlot(EEquipmentSlot EquipmentSlot) const {
    return FInventoryItemEquipmentData{};
}

FInventoryItemEquipmentData UEquipmentComponent::GetEquipmentDataFromID(const FName& EquipmentID) const {
    return FInventoryItemEquipmentData{};
}

void UEquipmentComponent::Equip(EEquipmentSlot EquipmentSlot, const FName& EquipmentID) {
}


