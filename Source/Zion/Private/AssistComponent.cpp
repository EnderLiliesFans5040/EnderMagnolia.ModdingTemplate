#include "AssistComponent.h"

UAssistComponent::UAssistComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UAssistComponent::UnEquipAssist() {
}

void UAssistComponent::OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn) {
}

FInventoryItemAssistData UAssistComponent::GetEquippedAssistData() const {
    return FInventoryItemAssistData{};
}

FName UAssistComponent::GetAssistID() const {
    return NAME_None;
}

FInventoryItemAssistData UAssistComponent::GetAssistDataFromID(const FName& AssistID) const {
    return FInventoryItemAssistData{};
}

void UAssistComponent::EquipAssist(const FName& AssistID) {
}


