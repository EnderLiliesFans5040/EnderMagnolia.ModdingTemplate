#include "BTDecorator_IsInBorderRange.h"

UBTDecorator_IsInBorderRange::UBTDecorator_IsInBorderRange() {
    this->NodeName = TEXT("[Zion] Is in border range");
    this->BorderType = EBorderType::LeftOrRight;
    this->AcceptableRange = 500.00f;
}


