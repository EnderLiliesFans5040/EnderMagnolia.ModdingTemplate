#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TuningTargetInterface.generated.h"

class UTuningTargetComponent;

UINTERFACE(Blueprintable)
class UTuningTargetInterface : public UInterface {
    GENERATED_BODY()
};

class ITuningTargetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UTuningTargetComponent* GetTuningTargetComponent() const;
    
};

