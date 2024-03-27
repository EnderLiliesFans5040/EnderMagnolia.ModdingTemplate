#include "MovingPlatform_Spline.h"
#include "Components/SplineComponent.h"
#include "FollowSplineComponent.h"

AMovingPlatform_Spline::AMovingPlatform_Spline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FollowSplineComponent = CreateDefaultSubobject<UFollowSplineComponent>(TEXT("FollowSplineComponent"));
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->SplineComponent->SetupAttachment(RootComponent);
}


