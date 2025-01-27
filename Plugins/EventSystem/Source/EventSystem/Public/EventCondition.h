#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EventCondition.generated.h"

class UEventContext;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class EVENTSYSTEM_API UEventCondition : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
public:
    UEventCondition();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Evaluate(UEventContext* Context) const;
    
};

