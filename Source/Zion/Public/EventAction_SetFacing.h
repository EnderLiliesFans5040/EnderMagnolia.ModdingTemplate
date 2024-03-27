#pragma once
#include "CoreMinimal.h"
#include "EventAction_SubjectBinding.h"
#include "EFacingAnimationType.h"
#include "SpineAnimationDefinition.h"
#include "EventAction_SetFacing.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UEventAction_SetFacing : public UEventAction_SubjectBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayAnimation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFacingAnimationType AnimationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> TurnAnimationDefinitions;
    
public:
    UEventAction_SetFacing();

};

