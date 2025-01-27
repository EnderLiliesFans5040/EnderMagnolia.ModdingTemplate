#include "GameplayCondition.h"
#include "Templates/SubclassOf.h"

UGameplayCondition::UGameplayCondition() {
    this->bInvertCondition = false;
}

bool UGameplayCondition::OnCheckCondition_Implementation(APlayerController* PlayerController) {
    return false;
}

bool UGameplayCondition::CheckGameplayCondition(const TSubclassOf<UGameplayCondition>& GameplayConditionClass, APlayerController* PlayerController) {
    return false;
}


