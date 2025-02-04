#include "DamageData.h"

FDamageData::FDamageData() {
    this->Damage = 0;
    this->Element = EAttackElement::None;
    this->Type = EAttackType::Physic;
    this->AppliedRate = 0.00f;
    this->AppliedDamagePercentageBonus = 0;
    this->AppliedDamageCutPercentage = 0;
}

