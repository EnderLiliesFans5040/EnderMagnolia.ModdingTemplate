#include "CommandCondition_FallingExecutionCount.h"

UCommandCondition_FallingExecutionCount::UCommandCondition_FallingExecutionCount() {
    this->CountType = EFallingExecutionCountType::Command;
    this->MaxFallingExecutionCount = 1;
}


