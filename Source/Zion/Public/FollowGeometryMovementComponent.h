#pragma once
#include "CoreMinimal.h"
#include "GameFramework/MovementComponent.h"
#include "FollowGeometryMovementData.h"
#include "FollowGeometryMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFollowGeometryMovementComponent : public UMovementComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFollowGeometryMovementData MovementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartMovementAtBeginPlay;
    
public:
    UFollowGeometryMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopMovement();
    
    UFUNCTION(BlueprintCallable)
    void StartMovement();
    
    UFUNCTION(BlueprintCallable)
    void SetSpeedFactor(float NewSpeedFactor);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedFactor() const;
    
};

