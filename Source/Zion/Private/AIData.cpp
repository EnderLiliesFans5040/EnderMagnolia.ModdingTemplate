#include "AIData.h"

FAIData::FAIData() {
    this->TargetDetectionType = EAITargetDetectionType::None;
    this->MinDetectionDistance = 0.00f;
    this->MaxDetectionDistance = 0.00f;
    this->bCheckFront = false;
    this->bCheckLineOfSight = false;
    this->bInAmbush = false;
    this->PatrolRange = 0.00f;
}

