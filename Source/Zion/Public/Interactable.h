#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayConditionChecker.h"
#include "MapIconProviderInterface.h"
#include "Templates/SubclassOf.h"
#include "Interactable.generated.h"

class APlayerController;
class UBillboardComponent;
class UCommand;
class UFMODEvent;
class USceneComponent;
class UWidgetComponent;

UCLASS(Abstract, Blueprintable)
class ZION_API AInteractable : public AActor, public IMapIconProviderInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InteractionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayConditionChecker ConditionChecker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommand> OnSuccessCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommand> OnFailureCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* OnSuccessFMODEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* OnFailureFMODEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComponent;
    
public:
    AInteractable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCanBeInteracted(bool bCanInteract);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PlaySoundEvent(UFMODEvent* SoundEffect) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInteract_ConditionCheckFailed(APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInteract(APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeactivateInteractable(APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCanBeInteractedChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivateInteractable(APlayerController* Controller);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetInteractionText() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetInteractingController() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ConditionsChecked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanBeInteracted() const;
    

    // Fix for true pure virtual functions not being implemented
};

