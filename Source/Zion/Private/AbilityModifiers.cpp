#include "AbilityModifiers.h"

FAbilityModifiers::FAbilityModifiers() {
    this->bDirectionModeOverride = false;
    this->DirectionModeOverride = EAbilityDirectionMode::SourceLocation;
    this->DamageHPFactor = 0.00f;
    this->bTypeOverride = false;
    this->TypeOverride = EAttackType::Physic;
    this->bElementOverride = false;
    this->ElementOverride = EAttackElement::None;
    this->bWeightCategoryOverride = false;
    this->WeightCategoryOverride = EAbilityWeightCategory::None;
    this->bWarnLongExecution = false;
}

