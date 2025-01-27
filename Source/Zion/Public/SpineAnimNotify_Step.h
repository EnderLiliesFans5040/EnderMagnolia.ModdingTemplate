#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpineAnimNotify.h"
#include "EStepHeavinessCategory.h"
#include "SpineAnimNotify_Step.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USpineAnimNotify_Step : public USpineAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStepHeavinessCategory StepHeaviness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotifyFluidInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocalSpaceOffset;
    
public:
    USpineAnimNotify_Step();

};

