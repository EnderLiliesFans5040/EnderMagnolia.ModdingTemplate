#pragma once
#include "CoreMinimal.h"
#include "EventAction_SubjectBinding.h"
#include "SpineAnimationDefinition.h"
#include "EventAction_PlayAnimations.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_PlayAnimations : public UEventAction_SubjectBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> AnimationDefinitions;
    
public:
    UEventAction_PlayAnimations();

};

