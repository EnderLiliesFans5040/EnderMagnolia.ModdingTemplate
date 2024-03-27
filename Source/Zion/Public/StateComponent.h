#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "TimedStateData_Frame.h"
#include "TimedStateData_Time.h"
#include "StateComponent.generated.h"

class UInputAction;
class UState;

UCLASS(Blueprintable, ClassGroup=Custom, Within=Character, meta=(BlueprintSpawnableComponent))
class ZION_API UStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> DefaultStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> ActiveStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimedStateData_Time> TimedStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimedStateData_Frame> FrameTimedStates;
    
public:
    UStateComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveStates(const TArray<TSubclassOf<UState>>& States);
    
    UFUNCTION(BlueprintCallable)
    void RemoveState(const TSubclassOf<UState> State);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllStates();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovementLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputActionLocked(const UInputAction* InputAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFacingLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasState(const TSubclassOf<UState> State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBusyState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyState(const TArray<TSubclassOf<UState>>& States) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllStates(const TArray<TSubclassOf<UState>>& States) const;
    
    UFUNCTION(BlueprintCallable)
    void AddStatesForFrameCount(const TArray<TSubclassOf<UState>>& States, int32 FrameCount);
    
    UFUNCTION(BlueprintCallable)
    void AddStatesForDuration(const TArray<TSubclassOf<UState>>& States, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void AddStates(const TArray<TSubclassOf<UState>>& States);
    
    UFUNCTION(BlueprintCallable)
    void AddState(const TSubclassOf<UState> State);
    
};

