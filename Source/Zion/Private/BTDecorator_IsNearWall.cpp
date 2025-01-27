#include "BTDecorator_IsNearWall.h"

UBTDecorator_IsNearWall::UBTDecorator_IsNearWall() {
    this->NodeName = TEXT("[Zion] Is near wall");
    this->CheckOperator = EConditionOperator::Or;
}


