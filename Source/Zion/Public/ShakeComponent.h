#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ShakeData.h"
#include "ShakeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UShakeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UShakeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void LaunchShake(const FShakeData& ShakeData);
    
};

