#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EMovementSpeedMode.h"
#include "SplashSettings.h"
#include "FluidInteractionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFluidInteractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMovementSpeedMode, FSplashSettings> SplashSettingsForSpeedModes;
    
public:
    UFluidInteractionComponent(const FObjectInitializer& ObjectInitializer);

};

