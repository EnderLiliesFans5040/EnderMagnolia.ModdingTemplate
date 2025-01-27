#include "CommandCondition.h"

UCommandCondition::UCommandCondition() {
    this->bInvertCondition = false;
}

void UCommandCondition::OnInitialize_Implementation() {
}

bool UCommandCondition::OnCheckCondition_Implementation() const {
    return false;
}

UCommand* UCommandCondition::GetCommand() const {
    return NULL;
}

ACharacter* UCommandCondition::GetCharacter() const {
    return NULL;
}


