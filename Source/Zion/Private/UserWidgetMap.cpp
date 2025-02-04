#include "UserWidgetMap.h"

UUserWidgetMap::UUserWidgetMap() {
    this->RetainerBox = NULL;
    this->ScaleBox = NULL;
    this->MapHolder = NULL;
    this->MapAreaHolder = NULL;
    this->MapCursor = NULL;
    this->PlayerIcon = NULL;
    this->MapLegend = NULL;
    this->RestPointList = NULL;
    this->WBP_PlayerTrail = NULL;
    this->StoryEventIconsHolder = NULL;
    this->StoryEventDirectionsHolder = NULL;
    this->MapAreaTransitionsHolder = NULL;
    this->CustomMarkerIconsHolder = NULL;
    this->bShowAllMapIcons = false;
    this->MouseWheelSpeed = 0.20f;
    this->ZoomSpeed = 4.00f;
    this->ZoomMin = 1.00f;
    this->ZoomDefault = 1.00f;
    this->ZoomMax = 2.40f;
    this->HideIconsZoomThreshold = 0.50f;
    this->ZoomScaledIconsScaleMin = 1.00f;
    this->ZoomScaledIconsScaleMax = 5.00f;
    this->MoveSpeed = 1000.00f;
    this->MoveSpeedFactors.AddDefaulted(4);
    this->MoveSpeedFactorRampUpDuration = 0.50f;
    this->MoveSpeedFactorRampUpTime = 3.00f;
    this->CompletionPercentage = 0;
    this->StickToIconBlendSpeed = 1.00f;
    this->RemoveAllCustomMarkersHoldDuration = 1.50f;
}

void UUserWidgetMap::Zoom(float InZoomDelta) {
}

void UUserWidgetMap::ShowAllMapIcons() {
}

void UUserWidgetMap::SetNewZoomScale(float NewZoomScale) {
}

void UUserWidgetMap::RemoveCustomMarkerUnderCursor(UUserWidgetMapIcon_CustomMarker* CustomMarkerIcon) {
}











void UUserWidgetMap::MoveMap(const FVector2D& InMoveDelta) {
}

bool UUserWidgetMap::IsRestPointListOpened() const {
    return false;
}

bool UUserWidgetMap::IsMapAreaVisited(const UUserWidgetMapArea* MapAreaWidget) const {
    return false;
}

bool UUserWidgetMap::HasValidData() const {
    return false;
}

int32 UUserWidgetMap::GetMapCompletionPercentage() const {
    return 0;
}

int32 UUserWidgetMap::GetCustomMarkerAvailableCount() const {
    return 0;
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


