#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "StatusEffect_Burn.h"
#include "StatusEffect_BurnPlayer.generated.h"

class ACharacter;

UCLASS(Abstract, Blueprintable)
class UStatusEffect_BurnPlayer : public UStatusEffect_Burn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DodgeDurationReduction;
    
public:
    UStatusEffect_BurnPlayer();

private:
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
    UFUNCTION(BlueprintCallable)
    void OnDodged();
    
};

