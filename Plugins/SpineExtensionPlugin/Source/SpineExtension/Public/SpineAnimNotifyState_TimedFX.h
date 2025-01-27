#pragma once
#include "CoreMinimal.h"
#include "SpineAnimNotifyState.h"
#include "SpineFXData.h"
#include "SpineAnimNotifyState_TimedFX.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SPINEEXTENSION_API USpineAnimNotifyState_TimedFX : public USpineAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData FXData;
    
public:
    USpineAnimNotifyState_TimedFX();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CustomizeFX(UNiagaraComponent* FX) const;
    
};

