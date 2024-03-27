#include "UserWidgetMapArea.h"

UUserWidgetMapArea::UUserWidgetMapArea() {
    this->Map = NULL;
    this->ZonesHolder = NULL;
    this->IconsHolder = NULL;
    this->bIconsRequireRealtimeCheck = true;
}

void UUserWidgetMapArea::ShowAllMapAreaIcons() {
}

void UUserWidgetMapArea::OnZoneVisited(AStaticVolume_Zone* ZoneVisited) const {
}

FName UUserWidgetMapArea::GetMapName() const {
    return NAME_None;
}


