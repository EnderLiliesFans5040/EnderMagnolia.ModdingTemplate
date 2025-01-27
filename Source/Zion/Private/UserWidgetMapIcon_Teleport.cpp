#include "UserWidgetMapIcon_Teleport.h"

UUserWidgetMapIcon_Teleport::UUserWidgetMapIcon_Teleport() {
}

FVector2D UUserWidgetMapIcon_Teleport::GetToDestination_MapSpace() const {
    return FVector2D{};
}

FVector UUserWidgetMapIcon_Teleport::GetStartWorldLocation() const {
    return FVector{};
}

FDataTableRowHandle UUserWidgetMapIcon_Teleport::GetMapTransitionHandle() const {
    return FDataTableRowHandle{};
}

FVector UUserWidgetMapIcon_Teleport::GetDestinationWorldLocation() const {
    return FVector{};
}


