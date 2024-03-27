#pragma once
#include "CoreMinimal.h"
#include "EventCondition.h"
#include "EventCondition_HasSeenEvent.generated.h"

class UEventAsset;

UCLASS(Blueprintable, EditInlineNew)
class UEventCondition_HasSeenEvent : public UEventCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEventAsset> Event;
    
public:
    UEventCondition_HasSeenEvent();

};

