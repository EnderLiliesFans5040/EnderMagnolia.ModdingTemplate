#pragma once
#include "CoreMinimal.h"
#include "InputActions.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct FInputActions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* SpecialInputAction;
    
    ZION_API FInputActions();
};

