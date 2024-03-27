#pragma once
#include "CoreMinimal.h"
#include "EClearStatus.h"
#include "Trigger.h"
#include "Trigger_FieldMessage.generated.h"

class UClearComponent;
class UFieldMessageAsset;
class UFieldMessageComponent;

UCLASS(Blueprintable)
class ATrigger_FieldMessage : public ATrigger {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFieldMessageComponent* FieldMessageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UClearComponent* ClearComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFieldMessageAsset* FieldMessageAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
public:
    ATrigger_FieldMessage(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnFieldMessageFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnClearStatusChecked(EClearStatus ClearStatus);
    
};

