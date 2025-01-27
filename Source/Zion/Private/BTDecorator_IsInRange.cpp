#include "BTDecorator_IsInRange.h"

UBTDecorator_IsInRange::UBTDecorator_IsInRange() {
    this->NodeName = TEXT("[Zion] Is in range");
    this->AcceptableRange = 500.00f;
    this->DistanceType = EDistanceComparisonType::Distance3D;
}


