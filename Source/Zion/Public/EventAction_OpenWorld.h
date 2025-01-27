#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "FadeDescriptionData.h"
#include "EventAction_OpenWorld.generated.h"

class UWorld;

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_OpenWorld : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerStartTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeDescriptionData FadeOutDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeDescriptionData FadeInDescription;
    
public:
    UEventAction_OpenWorld();

};

