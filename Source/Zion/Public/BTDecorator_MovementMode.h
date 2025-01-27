#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_MovementModeBase.h"
#include "MovementModeData.h"
#include "BTDecorator_MovementMode.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_MovementMode : public UBTDecorator_MovementModeBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovementModeData> ValidMovementModes;
    
public:
    UBTDecorator_MovementMode();

};

