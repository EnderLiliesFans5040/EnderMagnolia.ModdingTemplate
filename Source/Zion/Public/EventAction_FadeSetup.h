#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "EFadeLayer.h"
#include "FadeDescriptionData.h"
#include "EventAction_FadeSetup.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_FadeSetup : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeDescriptionData FadeDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFadeLayer FadeLayer;
    
public:
    UEventAction_FadeSetup();

};

