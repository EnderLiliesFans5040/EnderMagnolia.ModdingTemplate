#pragma once
#include "CoreMinimal.h"
#include "EventBindingProxyInterface.h"
#include "InteractableNPCData.h"
#include "Interactable_Event.h"
#include "Interactable_EventNPC.generated.h"

class ACharacterZionNPC;
class UChildActorComponent;
class UGameplayConditionRefreshComponent;

UCLASS(Blueprintable)
class AInteractable_EventNPC : public AInteractable_Event, public IEventBindingProxyInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ChildActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayConditionRefreshComponent* ConditionRefreshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACharacterZionNPC> NPCClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInteractableNPCData> NPCDataList;
    
public:
    AInteractable_EventNPC(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacterZionNPC* GetNPC() const;
    

    // Fix for true pure virtual functions not being implemented
};

