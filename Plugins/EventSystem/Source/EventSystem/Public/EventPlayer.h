#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "EEventPlayerState.h"
#include "EventBlackboardInit.h"
#include "EventPlayerDelegateDelegate.h"
#include "EventPlayerFinishDelegateDelegate.h"
#include "EventPlayer.generated.h"

class AActor;
class AEventCamera;
class APlayerController;
class UEventAction;
class UEventAsset;
class UEventContext;
class UEventNode;
class UEventPlayer;
class UUserWidget;

UCLASS(Blueprintable)
class EVENTSYSTEM_API UEventPlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventPlayerDelegate OnEventStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventPlayerFinishDelegate OnEventFinish;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEventAsset* EventAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEventContext* EventContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* EventUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AEventCamera* EventCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UEventNode*> VisitedNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsToDestroyOnFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEventAction*> RunningActions;
    
public:
    UEventPlayer();

    UFUNCTION(BlueprintCallable)
    void SkipEvent();
    
    UFUNCTION(BlueprintCallable)
    void PlayEvent(APlayerController* PlayerController, UEventAsset* InEventAsset, const TMap<FName, AActor*>& InActorBindings, const FEventBlackboardInit& InDefaultValues);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOwnerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
public:
    UFUNCTION(BlueprintPure)
    EEventPlayerState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEventContext* GetEventContext() const;
    
    UFUNCTION(BlueprintCallable)
    static UEventPlayer* CreateEventPlayer(AActor* Owner);
    
};

