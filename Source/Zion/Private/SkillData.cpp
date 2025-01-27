#include "SkillData.h"

FSkillData::FSkillData() {
    this->Rank = 0;
    this->RatingPower = 0;
    this->RatingBreak = 0;
    this->RatingSpeed = 0;
    this->RatingRange = 0;
    this->Type = EAttackType::Physic;
    this->Element = EAttackElement::None;
    this->Category = ECommandSetCategory::None;
    this->Cooldown = 0.00f;
    this->CostSP = 0;
    this->Video = NULL;
}

