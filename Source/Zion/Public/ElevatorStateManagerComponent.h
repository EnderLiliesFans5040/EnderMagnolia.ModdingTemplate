#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ClearActorData.h"
#include "EElevatorState.h"
#include "ElevatorStateManagerComponent.generated.h"

class AMovingPlatform_Elevator;
class UElevatorStateManagerComponent;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, Within=GameModeBase, meta=(BlueprintSpawnableComponent))
class UElevatorStateManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FClearActorData, EElevatorState> ElevatorStates;
    
public:
    UElevatorStateManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    EElevatorState RegisterElevatorState(const AMovingPlatform_Elevator* ElevatorActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameMapChangeFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EElevatorState GetElevatorState(const AMovingPlatform_Elevator* ElevatorActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UElevatorStateManagerComponent* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void ClearElevatorStates();
    
};

