#include "SpineBoneFollowerComponent.h"

USpineBoneFollowerComponent::USpineBoneFollowerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->UsePosition = true;
    this->UseRotation = true;
    this->UseScale = false;
    this->bAllowLowPerformanceMode = true;
    this->TranslationEqualityTolerance = 25.00f;
    this->RotationEqualityTolerance = 25.00f;
    this->ScaleEqualityTolerance = 0.10f;
    this->MaxTimeBeforeForceUpdate = 1.00f;
    this->SpineSkeletonComponent = NULL;
}


