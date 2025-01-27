#pragma once
#include "CoreMinimal.h"
#include "PhaseLevelChangeDelegateDelegate.h"
#include "StatsControllerComponent.h"
#include "StatsControllerAIComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Within=AIController, meta=(BlueprintSpawnableComponent))
class UStatsControllerAIComponent : public UStatsControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhaseLevelChangeDelegate OnPhaseLevelChangeDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PhaseLevel;
    
public:
    UStatsControllerAIComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    int32 IncrementPhaseLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPhaseLevel() const;
    
};

