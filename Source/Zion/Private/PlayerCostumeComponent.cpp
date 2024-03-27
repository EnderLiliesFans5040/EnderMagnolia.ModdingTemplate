#include "PlayerCostumeComponent.h"

UPlayerCostumeComponent::UPlayerCostumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultCostumeID = TEXT("p0000");
    this->SpineAtlasAsset = NULL;
    this->SpineSkeletonDataAsset = NULL;
    this->SpineNotifyAsset = NULL;
}

FName UPlayerCostumeComponent::GetEquippedCostumeID() const {
    return NAME_None;
}

void UPlayerCostumeComponent::EquipCostume(const FName& InCostumeID) {
}


