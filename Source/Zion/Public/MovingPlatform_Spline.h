#pragma once
#include "CoreMinimal.h"
#include "OneWayPlatform.h"
#include "ToggleActorInterface.h"
#include "MovingPlatform_Spline.generated.h"

class UFollowSplineComponent;
class USplineComponent;

UCLASS(Abstract, Blueprintable)
class AMovingPlatform_Spline : public AOneWayPlatform, public IToggleActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFollowSplineComponent* FollowSplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
public:
    AMovingPlatform_Spline(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

