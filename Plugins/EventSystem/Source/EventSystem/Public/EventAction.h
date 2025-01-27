#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EventAction.generated.h"

class UEventContext;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class EVENTSYSTEM_API UEventAction : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitForCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPostSkipAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEventContext* EventContext;
    
public:
    UEventAction();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateAction(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSkipAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinishAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAbortAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEventContext* GetContext() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishAction();
    
};

