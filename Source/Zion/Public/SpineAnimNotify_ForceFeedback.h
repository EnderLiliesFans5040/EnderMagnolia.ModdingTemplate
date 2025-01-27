#pragma once
#include "CoreMinimal.h"
#include "SpineAnimNotify.h"
#include "SpineAnimNotify_ForceFeedback.generated.h"

class UForceFeedbackEffect;

UCLASS(Blueprintable, CollapseCategories)
class USpineAnimNotify_ForceFeedback : public USpineAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ForceFeedbackEffect;
    
public:
    USpineAnimNotify_ForceFeedback();

};

