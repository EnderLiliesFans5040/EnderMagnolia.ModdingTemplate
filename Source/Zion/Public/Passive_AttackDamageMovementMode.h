#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Passive.h"
#include "Passive_AttackDamageMovementMode.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_AttackDamageMovementMode : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> MovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PercentageBonus;
    
public:
    UPassive_AttackDamageMovementMode();

};

