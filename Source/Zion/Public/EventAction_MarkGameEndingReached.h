#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "EGameEndingType.h"
#include "EventAction_MarkGameEndingReached.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_MarkGameEndingReached : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameEndingType ReachedEnding;
    
public:
    UEventAction_MarkGameEndingReached();

};

