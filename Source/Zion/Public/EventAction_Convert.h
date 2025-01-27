#pragma once
#include "CoreMinimal.h"
#include "ActorBindingKey.h"
#include "EventAction_SubjectBinding.h"
#include "EActorHideMode.h"
#include "SpineAnimationDefinition.h"
#include "EventAction_Convert.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UEventAction_Convert : public UEventAction_SubjectBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorBindingKey TargetBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> SpawnAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActorHideMode HideMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HideAnimation;
    
public:
    UEventAction_Convert();

};

