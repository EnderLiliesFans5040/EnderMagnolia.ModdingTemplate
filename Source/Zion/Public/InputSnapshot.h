#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputActionValue.h"
#include "EInputDirection.h"
#include "InputSnapshot.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct FInputSnapshot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MoveInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputDirection InputDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UInputAction*, FInputActionValue> TriggeringInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UInputAction*, FInputActionValue> JustTriggeredInputs;
    
    ZION_API FInputSnapshot();
};

