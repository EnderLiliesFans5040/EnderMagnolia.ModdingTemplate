#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "EventAction_SetValueName.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_SetValueName : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyToSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Value;
    
public:
    UEventAction_SetValueName();

};

