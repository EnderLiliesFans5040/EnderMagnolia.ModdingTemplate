#pragma once
#include "CoreMinimal.h"
#include "SpineAnimNotify.h"
#include "SpineFXData.h"
#include "SpineAnimNotify_PlayFX.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable, CollapseCategories)
class SPINEEXTENSION_API USpineAnimNotify_PlayFX : public USpineAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData FXData;
    
public:
    USpineAnimNotify_PlayFX();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CustomizeFX(UNiagaraComponent* FX) const;
    
};

