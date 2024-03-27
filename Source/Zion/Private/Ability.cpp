#include "Ability.h"
#include "AbilityComponent.h"

AAbility::AAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoStopByTime = false;
    this->AutoStopTime = 1.00f;
    this->bAutoStopByTriggerCount = false;
    this->AutoStopTriggerCount = 0;
    this->bCanBeDodged = true;
    this->bCanBeParried = true;
    this->bCanBeGuarded = true;
    this->DirectionMode = EAbilityDirectionMode::SourceLocation;
    this->bExecuteAbilitiesOnStop = false;
    this->WeightCategory = EAbilityWeightCategory::Medium;
    this->AbilityComponent = CreateDefaultSubobject<UAbilityComponent>(TEXT("Ability"));
    this->AbilityEffectProcessClass = NULL;
}

void AAbility::RequestStop() {
}





EAbilityWeightCategory AAbility::GetWeightCategory() const {
    return EAbilityWeightCategory::None;
}

AActor* AAbility::GetSource() const {
    return NULL;
}

float AAbility::GetExecutionTime() const {
    return 0.0f;
}


