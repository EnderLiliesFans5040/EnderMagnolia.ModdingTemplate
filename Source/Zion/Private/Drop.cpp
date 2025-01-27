#include "Drop.h"

FDrop::FDrop() {
    this->Type = EDropType::None;
    this->CurrencyType = ECurrencyType::Default;
    this->CountType = EValueType::Fixed;
    this->Count = 0;
    this->RandomMinCount = 0;
    this->RandomMaxCount = 0;
}

