#pragma once
#include "CoreMinimal.h"
#include "Command.h"
#include "PileAttackChargeLevel.h"
#include "Templates/SubclassOf.h"
#include "Command_PileAttack.generated.h"

class AAbility;
class UNiagaraComponent;
class UState;

UCLASS(Abstract, Blueprintable)
class UCommand_PileAttack : public UCommand {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargePhaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> ChargePhaseStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPileAttackChargeLevel> DiveChargeLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiveLaunchVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> CurrentDiveChargeLevelStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* CurrentDiveLoopFXInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAbility* CurrentDiveAbility;
    
public:
    UCommand_PileAttack();

};

