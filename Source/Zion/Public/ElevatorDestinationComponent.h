#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ElevatorDestinationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UElevatorDestinationComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UElevatorDestinationComponent(const FObjectInitializer& ObjectInitializer);

};

