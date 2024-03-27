#include "UserWidgetMapIcon.h"
#include "Templates/SubclassOf.h"

UUserWidgetMapIcon::UUserWidgetMapIcon() {
    this->Icon = NULL;
    this->ParentMapArea = NULL;
    this->GenerationType = EMapIconGenerationType::MatchActorLocation;
    this->bUseIconLocationOffset = false;
    this->bUseIconAngleOffset = false;
    this->IconAngleOffset = 0.00f;
    this->bRequireAptitude = false;
    this->AptitudeRequired = EAptitudeType::None;
    this->bRequireGameplayCondition = false;
}

void UUserWidgetMapIcon::ShowIcon_Implementation() {
}

void UUserWidgetMapIcon::SetIconFromSoftSprite(TSoftObjectPtr<UPaperSprite> NewIcon, bool bMatchSize) {
}

void UUserWidgetMapIcon::OnItemAdded(const UInventory* Inventory, const FName& ItemId, int32 AddedCount) {
}

void UUserWidgetMapIcon::OnAptitudesChanged() {
}

void UUserWidgetMapIcon::HideIcon_Implementation() {
}

FText UUserWidgetMapIcon::GetWidgetIconDisplayName() const {
    return FText::GetEmpty();
}

TSubclassOf<UUserWidgetMapIconDetails> UUserWidgetMapIcon::GetWidgetIconDetailsClass() const {
    return NULL;
}

FDataTableRowHandle UUserWidgetMapIcon::GetItemRequired() const {
    return FDataTableRowHandle{};
}

EAptitudeType UUserWidgetMapIcon::GetAptitudeRequired() const {
    return EAptitudeType::None;
}


