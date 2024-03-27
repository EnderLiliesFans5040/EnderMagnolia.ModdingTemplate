#pragma once
#include "CoreMinimal.h"
#include "EEventPlayerResult.h"
#include "EventBlackboardInit.h"
#include "EClearStatus.h"
#include "Interactable.h"
#include "Templates/SubclassOf.h"
#include "Interactable_Event.generated.h"

class AActor;
class ASpawner;
class UClearComponent;
class UEventAsset;
class UEventPlayer;
class UState;

UCLASS(Abstract, Blueprintable)
class AInteractable_Event : public AInteractable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UClearComponent* ClearComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEventAsset> EventAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEventAsset> FailureEventAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, AActor*> ActorBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, ASpawner*> SpawnerBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventBlackboardInit DefaultEventValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> PostEventStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostEventStatesDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEventAsset* LoadedEventAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEventAsset* LoadedFailureEventAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEventPlayer* EventPlayer;
    
public:
    AInteractable_Event(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupAdditionalBlackboardValues(UPARAM(Ref) FEventBlackboardInit& EventBlackboardInit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupAdditionalBindings(TMap<FName, AActor*>& AdditionalBindings);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostEventProcess();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEventFinished(UEventPlayer* InEventPlayer, bool bCompletedEvent, EEventPlayerResult EventResult);
    
    UFUNCTION(BlueprintCallable)
    void OnClearStatusChecked(EClearStatus ClearStatus);
    
};

