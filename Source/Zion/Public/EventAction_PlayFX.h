#pragma once
#include "CoreMinimal.h"
#include "EventAction_SubjectBinding.h"
#include "SpineFXData.h"
#include "EventAction_PlayFX.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_PlayFX : public UEventAction_SubjectBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData FXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardID;
    
public:
    UEventAction_PlayFX();

private:
    UFUNCTION(BlueprintCallable)
    void OnSystemCompleted(UNiagaraComponent* PSystem);
    
};

