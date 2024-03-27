#pragma once
#include "CoreMinimal.h"
#include "EventAction_SubjectBinding.h"
#include "EventAction_PlaySE.generated.h"

class UFMODEvent;

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_PlaySE : public UEventAction_SubjectBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* SoundEvent;
    
public:
    UEventAction_PlaySE();

};

