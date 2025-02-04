#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingBlock_Elevator.generated.h"

class UElevatorDestinationComponent;
class UElevatorMovementComponent;
class URopeComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class ZION_API AMovingBlock_Elevator : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MovingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Destination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RopeAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UElevatorDestinationComponent* RopeDestinationPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UElevatorMovementComponent* ElevatorMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URopeComponent* RopeComponent;
    
public:
    AMovingBlock_Elevator(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnStartMovement(bool bInstant, bool bWasMoving);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishMovement(bool bInstant, bool bWasMoving);
    
public:
    UFUNCTION(BlueprintCallable)
    void CallToOrigin(bool bInstant);
    
    UFUNCTION(BlueprintCallable)
    void CallToDestination(bool bInstant);
    
};

