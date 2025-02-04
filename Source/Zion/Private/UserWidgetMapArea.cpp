#include "UserWidgetMapArea.h"

UUserWidgetMapArea::UUserWidgetMapArea() {
    this->Map = NULL;
    this->ZonesHolder = NULL;
    this->IconsHolder = NULL;
    this->ZoomScaled_IconsHolder = NULL;
    this->MapTransitionsHolder = NULL;
    this->bIconsRequireRealtimeCheck = true;
}

void UUserWidgetMapArea::ShowAllMapAreaIcons() {
}

void UUserWidgetMapArea::OnZoneVisited(AStaticVolume_Zone* ZoneVisited) const {
}

int32 UUserWidgetMapArea::GetZoneCount() const {
    return 0;
}

FName UUserWidgetMapArea::GetMapName() const {
    return NAME_None;
}

int32 UUserWidgetMapArea::GetCompletionPercentage() const {
    return 0;
}

int32 UUserWidgetMapArea::GetClearedZoneCount() const {
    return 0;
}


