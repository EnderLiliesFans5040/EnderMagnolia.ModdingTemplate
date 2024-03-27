#include "BTDecorator_IsNearGround.h"

UBTDecorator_IsNearGround::UBTDecorator_IsNearGround() {
    this->NodeName = TEXT("[Zion] Is near ground");
    this->CheckOperator = EConditionOperator::Or;
    this->UpVectorMode = EDecoratorNearGroundUpVectorMode::World;
}


