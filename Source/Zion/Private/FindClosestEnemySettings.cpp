#include "FindClosestEnemySettings.h"

FFindClosestEnemySettings::FFindClosestEnemySettings() {
    this->TargetDetectionType = EAITargetDetectionType::None;
    this->MinDetectionDistance = 0.00f;
    this->MaxDetectionDistance = 0.00f;
    this->bCheckFront = false;
    this->bCheckLineOfSight = false;
}

