#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ToggleActorInterface.generated.h"

UINTERFACE(Blueprintable)
class UToggleActorInterface : public UInterface {
    GENERATED_BODY()
};

class IToggleActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActorToggle();
    
};

