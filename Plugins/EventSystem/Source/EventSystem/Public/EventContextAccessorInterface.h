#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EventContextAccessorInterface.generated.h"

class UEventContext;

UINTERFACE(Blueprintable, MinimalAPI)
class UEventContextAccessorInterface : public UInterface {
    GENERATED_BODY()
};

class IEventContextAccessorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEventContext(UEventContext* InEventContext);
    
};

