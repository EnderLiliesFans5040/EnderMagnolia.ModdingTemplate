#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "EventCamera.generated.h"

UCLASS(Blueprintable)
class EVENTSYSTEM_API AEventCamera : public ACameraActor {
    GENERATED_BODY()
public:
    AEventCamera(const FObjectInitializer& ObjectInitializer);

};

