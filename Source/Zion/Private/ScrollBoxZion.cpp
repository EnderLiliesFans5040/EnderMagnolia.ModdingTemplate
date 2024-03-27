#include "ScrollBoxZion.h"

UScrollBoxZion::UScrollBoxZion() {
    this->bIsVolatile = true;
    this->NavigationDestination = EDescendantScrollDestination::Center;
    this->ElementCountsPerLine = 1;
    this->NavigationOrientation = Orient_Horizontal;
    this->bAnimateScrollOnNavigation = false;
}

void UScrollBoxZion::SimulateNavigation(EUINavigation InNavigation) {
}

void UScrollBoxZion::SetNavigationOrientation(TEnumAsByte<EOrientation> NewNavigationOrientation) {
}

void UScrollBoxZion::SetElementCountPerLine(int32 NewElementCountsPerLine) {
}

void UScrollBoxZion::ScrollWidgetHostIntoView(UNativeWidgetHost* NativeWidgetHost, bool InAnimateScroll, EDescendantScrollDestination InDestination, float InScrollPadding) {
}

void UScrollBoxZion::CopyWidgetNavigation(UWidgetNavigation* WidgetNavigation) {
}


