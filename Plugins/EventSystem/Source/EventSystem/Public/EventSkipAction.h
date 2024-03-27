#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EventSkipAction.generated.h"

class AActor;
class UEventContext;

UCLASS(Abstract, Blueprintable)
class EVENTSYSTEM_API UEventSkipAction : public UObject {
    GENERATED_BODY()
public:
    UEventSkipAction();

protected:
    UFUNCTION(BlueprintCallable)
    void TeleportPlayerPawnToBinding(FName TargetBinding, bool bOffsetByHalfHeight);
    
    UFUNCTION(BlueprintCallable)
    void TeleportActorToTransform(AActor* Actor, FTransform Transform, bool bOffsetByHalfHeight);
    
    UFUNCTION(BlueprintCallable)
    void TeleportActorBindingToTransform(FName Binding, const FTransform& Transform, bool bOffsetByHalfHeight);
    
    UFUNCTION(BlueprintCallable)
    void TeleportActorBindingToBinding(FName Binding, FName TargetBinding, bool bOffsetByHalfHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExecute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEventContext* GetContext() const;
    
};

