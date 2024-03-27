#include "UserWidgetGameMenu.h"

UUserWidgetGameMenu::UUserWidgetGameMenu() {
    this->PageSwitcher = NULL;
    this->bAtRestPoint = false;
    this->bAllowEquipmentSwitch = false;
}



void UUserWidgetGameMenu::NotifyFastTravelRequested(const FName& RestPointID, const FRestPointData& RestPointData) {
}

bool UUserWidgetGameMenu::IsAtRestPoint() const {
    return false;
}

void UUserWidgetGameMenu::GoToPage(int32 PageIndex) {
}

int32 UUserWidgetGameMenu::GetPageCount() const {
    return 0;
}


int32 UUserWidgetGameMenu::GetCurrentPageIndex() const {
    return 0;
}

bool UUserWidgetGameMenu::CanSwitchEquipment() const {
    return false;
}


