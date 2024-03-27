#pragma once
#include "CoreMinimal.h"
#include "AnimationDefinitionList.h"
#include "CommandModule.h"
#include "MovementModeData.h"
#include "SpineAnimationDefinition.h"
#include "CommandModule_PlayAnimation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_PlayAnimation : public UCommandModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> AnimationDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMovementModeData, FAnimationDefinitionList> OverrideForMovementModes;
    
public:
    UCommandModule_PlayAnimation();

};

