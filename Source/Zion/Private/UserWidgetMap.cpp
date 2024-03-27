#include "UserWidgetMap.h"

UUserWidgetMap::UUserWidgetMap() {
    this->RetainerBox = NULL;
    this->ScaleBox = NULL;
    this->MapHolder = NULL;
    this->MapCursor = NULL;
    this->PlayerIcon = NULL;
    this->MapLegend = NULL;
    this->RestPointList = NULL;
    this->StoryEventIconsHolder = NULL;
    this->StoryEventDirectionsHolder = NULL;
    this->bShowAllMapIcons = false;
    this->MouseWheelSpeed = 0.40f;
    this->ZoomSpeed = 4.00f;
    this->ZoomMin = 1.00f;
    this->ZoomMax = 2.40f;
    this->MoveSpeed = 1000.00f;
    this->MoveSpeedFactors.AddDefaulted(4);
    this->MoveSpeedFactorRampUpDuration = 0.50f;
    this->MoveSpeedFactorRampUpTime = 3.00f;
    this->StickToIconBlendSpeed = 1.00f;
}

void UUserWidgetMap::Zoom(float InZoomDelta) {
}

void UUserWidgetMap::ShowAllMapIcons() {
}

void UUserWidgetMap::SetNewZoomScale(float NewZoomScale) {
}







void UUserWidgetMap::MoveMap(const FVector2D& InMoveDelta) {
}

bool UUserWidgetMap::IsRestPointListOpened() const {
    return false;
}

bool UUserWidgetMap::IsMapAreaVisited(const UUserWidgetMapArea* MapAreaWidget) const {
    return false;
}

void UUserWidgetMap::ForceTargetIcon(UUserWidgetMapIcon* Icon) {
}

void UUserWidgetMap::DebugMarkAllMapZonesAsVisited() {
}

void UUserWidgetMap::DebugMarkAllMapIconsAsSeen() {
}

void UUserWidgetMap::ClearInputs() {
}

void UUserWidgetMap::Clear() {
}


