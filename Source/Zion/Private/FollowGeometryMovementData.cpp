#include "FollowGeometryMovementData.h"

FFollowGeometryMovementData::FFollowGeometryMovementData() {
    this->HalfWidth = 0.00f;
    this->HalfHeight = 0.00f;
    this->DetectionSphereRadius = 0.00f;
    this->GroundDetectionRange = 0.00f;
    this->MaxSpeed = 0.00f;
    this->bSweep = false;
    this->TeleportType = ETeleportType::None;
}

