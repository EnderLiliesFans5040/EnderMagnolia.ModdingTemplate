#include "UserWidgetPlayerTrail.h"

UUserWidgetPlayerTrail::UUserWidgetPlayerTrail() {
    this->PlayerTrailIconsHolder = NULL;
    this->bDisplayPlayerTrailIcon = true;
    this->bRegisterEvents = true;
    this->MaxPlayerTrailIconCount = 40;
    this->PlayerTrailIconOpacityChangeCount = 10;
    this->PlayerTrailIconMinOpacity = 0.20f;
    this->PlayerTrailIconMaxOpacity = 1.00f;
    this->PlayerTrailIconMinScale = 0.40f;
    this->PlayerTrailIconMaxScale = 1.00f;
}


