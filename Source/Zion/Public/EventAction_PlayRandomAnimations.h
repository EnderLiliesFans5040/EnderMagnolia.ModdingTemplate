#pragma once
#include "CoreMinimal.h"
#include "EventAction_SubjectBinding.h"
#include "SpineAnimationDefinition.h"
#include "EventAction_PlayRandomAnimations.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_PlayRandomAnimations : public UEventAction_SubjectBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> StartAnimationDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> RandomAnimationDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FinishActionKey;
    
public:
    UEventAction_PlayRandomAnimations();

private:
    UFUNCTION(BlueprintCallable)
    void OnAnimationFinished();
    
};

