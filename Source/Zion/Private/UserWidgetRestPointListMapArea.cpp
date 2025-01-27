#include "UserWidgetRestPointListMapArea.h"

UUserWidgetRestPointListMapArea::UUserWidgetRestPointListMapArea() {
    this->EntriesHolder = NULL;
    this->MapAreaIndex = 0;
    this->bCompleted = false;
}

void UUserWidgetRestPointListMapArea::SetMapAreaName(const FText& NewMapAreaName) {
}

void UUserWidgetRestPointListMapArea::SetMapAreaIndex(const int32 NewMapAreaIndex) {
}

void UUserWidgetRestPointListMapArea::SetCompleted(bool bIsCompleted) {
}

void UUserWidgetRestPointListMapArea::RestPointEntryPressed(FMapRestPointData RestPointData) {
}

void UUserWidgetRestPointListMapArea::RestPointEntryFocused(UUserWidgetMapIcon_RestPoint* RestPointIcon) {
}

void UUserWidgetRestPointListMapArea::GenerateRestPointListEntries(TArray<UUserWidgetMapIcon_RestPoint*> RestPointIcons) {
}


