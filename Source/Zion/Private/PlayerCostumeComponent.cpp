#include "PlayerCostumeComponent.h"

UPlayerCostumeComponent::UPlayerCostumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultCostumeID = TEXT("p0000");
    this->SpineAtlasAsset = NULL;
    this->SpineSkeletonDataAsset = NULL;
    this->SpineNotifyAsset = NULL;
}

void UPlayerCostumeComponent::SetPendingCostumeID(const FName& InCostumeID) {
}

FName UPlayerCostumeComponent::GetPendingOrEquippedCostumeID() const {
    return NAME_None;
}

FName UPlayerCostumeComponent::GetEquippedCostumeID() const {
    return NAME_None;
}

void UPlayerCostumeComponent::EquipCostume(const FName& InCostumeID) {
}

void UPlayerCostumeComponent::ApplyPendingCostume() {
}


