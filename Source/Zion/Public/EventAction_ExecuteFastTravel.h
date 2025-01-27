#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "EventAction_ExecuteFastTravel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_ExecuteFastTravel : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FastTravelDestinationKey;
    
public:
    UEventAction_ExecuteFastTravel();

};

