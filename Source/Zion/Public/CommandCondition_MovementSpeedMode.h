#pragma once
#include "CoreMinimal.h"
#include "CommandCondition.h"
#include "EMovementSpeedMode.h"
#include "CommandCondition_MovementSpeedMode.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ZION_API UCommandCondition_MovementSpeedMode : public UCommandCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMovementSpeedMode> ValidMovementSpeedModes;
    
public:
    UCommandCondition_MovementSpeedMode();

};

