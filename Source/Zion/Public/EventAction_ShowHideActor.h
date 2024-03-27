#pragma once
#include "CoreMinimal.h"
#include "EventAction_SubjectBinding.h"
#include "EventAction_ShowHideActor.generated.h"

class UCurveFloat;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UEventAction_ShowHideActor : public UEventAction_SubjectBinding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FadeParameterName;
    
public:
    UEventAction_ShowHideActor();

};

