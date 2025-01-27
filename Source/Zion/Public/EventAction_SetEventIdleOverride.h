#pragma once
#include "CoreMinimal.h"
#include "EventAction_SubjectBinding.h"
#include "SpineAnimationDefinition.h"
#include "EventAction_SetEventIdleOverride.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_SetEventIdleOverride : public UEventAction_SubjectBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> IdleDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> TurnDefinitions;
    
public:
    UEventAction_SetEventIdleOverride();

};

