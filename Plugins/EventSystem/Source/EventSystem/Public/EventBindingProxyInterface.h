#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EventBindingProxyInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UEventBindingProxyInterface : public UInterface {
    GENERATED_BODY()
};

class IEventBindingProxyInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetBindingActor();
    
};

