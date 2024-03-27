#include "CommandCondition_ImmersionDepth.h"

UCommandCondition_ImmersionDepth::UCommandCondition_ImmersionDepth() {
    this->Operator = ECommonOperator::SuperiorOrEqual;
    this->ComparingImmersionDepth = 0.50f;
}


