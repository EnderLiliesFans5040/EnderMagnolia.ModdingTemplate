#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "EventAction_PlayBGM.generated.h"

class UFMODEvent;

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_PlayBGM : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* BGM;
    
public:
    UEventAction_PlayBGM();

};

