#include "EventAction_SetActorTransform.h"

UEventAction_SetActorTransform::UEventAction_SetActorTransform() {
    this->PivotTarget = EActorPivotTarget::Center;
    this->TransformType = EActorBindingTransformType::LocalSpace;
    this->PivotSource = EActorPivotTarget::Center;
}


