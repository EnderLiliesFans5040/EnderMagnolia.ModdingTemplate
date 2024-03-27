#include "CommandCharge.h"

UCommandCharge::UCommandCharge() {
    this->bAutoRelease = false;
    this->MinimumChargeType = ECommandMinimumChargeType::None;
    this->MinimumChargeTime = 0.00f;
}



bool UCommandCharge::IsReleased() const {
    return false;
}

int32 UCommandCharge::GetChargeLevel() const {
    return 0;
}


