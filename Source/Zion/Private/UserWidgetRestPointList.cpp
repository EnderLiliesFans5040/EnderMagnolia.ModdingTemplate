#include "UserWidgetRestPointList.h"

UUserWidgetRestPointList::UUserWidgetRestPointList() {
}

int32 UUserWidgetRestPointList::SetCurrentMapAreaIndex(int32 NewMapAreaIndex) {
    return 0;
}

void UUserWidgetRestPointList::Open(const FVector2D& CurrentMapPosition) {
}



bool UUserWidgetRestPointList::IsOpened() const {
    return false;
}


void UUserWidgetRestPointList::GoToPreviousMapArea() {
}

void UUserWidgetRestPointList::GoToNextMapArea() {
}


int32 UUserWidgetRestPointList::GetNewMapAreaIndex(int32 IndexOffset) const {
    return 0;
}

int32 UUserWidgetRestPointList::GetIndexFromMapAreaName(const FName& MapAreaName) const {
    return 0;
}

UUserWidgetMapIcon_RestPoint* UUserWidgetRestPointList::FindNearestRestPointIcon(const FVector2D& CurrentMapPosition, int32& OutMapAreaIndex) {
    return NULL;
}

void UUserWidgetRestPointList::Close() {
}

UUserWidgetMapIcon_RestPoint* UUserWidgetRestPointList::ChangeMapArea(int32 IndexOffset) {
    return NULL;
}

bool UUserWidgetRestPointList::CanChangeMapArea() const {
    return false;
}

bool UUserWidgetRestPointList::CanBeOpened() const {
    return false;
}


