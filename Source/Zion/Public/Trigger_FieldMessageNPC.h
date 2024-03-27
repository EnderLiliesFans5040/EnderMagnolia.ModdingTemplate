#pragma once
#include "CoreMinimal.h"
#include "EventBindingProxyInterface.h"
#include "FieldMessageNPCData.h"
#include "Trigger_FieldMessage.h"
#include "Trigger_FieldMessageNPC.generated.h"

class AActor;
class ACharacterZionNPC;
class UChildActorComponent;
class UFieldMessageAsset;
class UGameplayConditionRefreshComponent;

UCLASS(Blueprintable)
class ATrigger_FieldMessageNPC : public ATrigger_FieldMessage, public IEventBindingProxyInterface {
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
    TArray<FFieldMessageNPCData> NPCDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFieldMessageAsset* OverrideFieldMessageAsset;
    
public:
    ATrigger_FieldMessageNPC(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnNPCDestroyed(AActor* DestroyedActor);
    

    // Fix for true pure virtual functions not being implemented
};

