#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "TalkData.h"
#include "EventAction_Talk.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_Talk : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Speaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTalkData> TalkData;
    
public:
    UEventAction_Talk();

};

