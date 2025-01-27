#include "BTDecorator_IsOnSide.h"

UBTDecorator_IsOnSide::UBTDecorator_IsOnSide() {
    this->NodeName = TEXT("[Zion] Is on side");
    this->CheckOperator = EConditionOperator::And;
    this->bCheckRight = false;
    this->bCheckLeft = false;
    this->bCheckUp = false;
    this->bCheckDown = false;
}


