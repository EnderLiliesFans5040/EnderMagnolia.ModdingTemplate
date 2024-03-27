#pragma once
#include "CoreMinimal.h"
#include "CommandCondition.h"
#include "MovementModeData.h"
#include "CommandCondition_MovementMode.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ZION_API UCommandCondition_MovementMode : public UCommandCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovementModeData> ValidMovementModes;
    
public:
    UCommandCondition_MovementMode();

};

