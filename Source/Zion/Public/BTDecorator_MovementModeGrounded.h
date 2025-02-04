#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_MovementModeBase.h"
#include "MovementModeData.h"
#include "BTDecorator_MovementModeGrounded.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_MovementModeGrounded : public UBTDecorator_MovementModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovementModeData> ValidMovementModes;
    
public:
    UBTDecorator_MovementModeGrounded();

};

