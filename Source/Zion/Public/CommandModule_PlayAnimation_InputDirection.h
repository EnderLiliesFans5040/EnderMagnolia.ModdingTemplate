#pragma once
#include "CoreMinimal.h"
#include "AnimationDefinitionList.h"
#include "CommandModule_PlayAnimation.h"
#include "EInputDirection.h"
#include "CommandModule_PlayAnimation_InputDirection.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_PlayAnimation_InputDirection : public UCommandModule_PlayAnimation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInputDirection, FAnimationDefinitionList> AnimationsForDirections;
    
public:
    UCommandModule_PlayAnimation_InputDirection();

};

