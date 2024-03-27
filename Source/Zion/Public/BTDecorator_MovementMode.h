#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorZion.h"
#include "MovementModeData.h"
#include "BTDecorator_MovementMode.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_MovementMode : public UBTDecoratorZion {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovementModeData> ValidMovementModes;
    
public:
    UBTDecorator_MovementMode();

};

