#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "EventAction_StopBGM.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_StopBGM : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutTime;
    
public:
    UEventAction_StopBGM();

};

