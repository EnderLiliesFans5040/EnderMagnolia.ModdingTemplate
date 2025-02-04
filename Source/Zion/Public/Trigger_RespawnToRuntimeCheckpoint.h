#pragma once
#include "CoreMinimal.h"
#include "AbilityData.h"
#include "FadeDescriptionData.h"
#include "Trigger.h"
#include "Trigger_RespawnToRuntimeCheckpoint.generated.h"

class UAbilityComponent;
class UFactionComponent;

UCLASS(Abstract, Blueprintable)
class ATrigger_RespawnToRuntimeCheckpoint : public ATrigger {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeDescriptionData FadeOutDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeDescriptionData FadeInDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityData AbilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilityComponent* AbilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFactionComponent* FactionComponent;
    
public:
    ATrigger_RespawnToRuntimeCheckpoint(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnRespawnTimerFinished();
    
};

