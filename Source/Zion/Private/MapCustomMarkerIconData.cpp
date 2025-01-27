#include "MapCustomMarkerIconData.h"

FMapCustomMarkerIconData::FMapCustomMarkerIconData() {
    this->MarkerID = 0;
}


uint32 GetTypeHash(const FMapCustomMarkerIconData& mapCustomMarkerIconData)
{
    return 0;
}