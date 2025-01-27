#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "EFadeLayer.h"
#include "EFadeType.h"
#include "FadeDescriptionData.h"
#include "EventAction_Fade.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_Fade : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFadeType FadeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeDescriptionData FadeDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFadeLayer FadeLayer;
    
public:
    UEventAction_Fade();

private:
    UFUNCTION(BlueprintCallable)
    void OnFadeCompleted();
    
};

