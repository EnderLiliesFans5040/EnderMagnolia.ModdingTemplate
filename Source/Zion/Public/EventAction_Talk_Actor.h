#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventAction_SubjectBinding.h"
#include "ETalkAnimationType.h"
#include "EWidgetActorAnchor.h"
#include "SpineAnimationDefinition.h"
#include "TalkData.h"
#include "Templates/SubclassOf.h"
#include "EventAction_Talk_Actor.generated.h"

class UUserWidgetWorldSpaceText_Talk;

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_Talk_Actor : public UEventAction_SubjectBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidgetWorldSpaceText_Talk> WidgetWorldSpaceTalk_Class;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetActorAnchor ActorAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ActorLocalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachToSubject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETalkAnimationType AnimationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> StartAnimationDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> EndAnimationDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTalkData> TalkData;
    
public:
    UEventAction_Talk_Actor();

};

