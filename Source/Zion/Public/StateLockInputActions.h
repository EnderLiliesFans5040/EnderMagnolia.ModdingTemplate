#pragma once
#include "CoreMinimal.h"
#include "State.h"
#include "StateLockInputActions.generated.h"

class UInputAction;

UCLASS(Abstract, Blueprintable)
class UStateLockInputActions : public UState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInputAction*> InputActions;
    
    UStateLockInputActions();

};

