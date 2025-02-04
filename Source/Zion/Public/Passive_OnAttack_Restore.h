#pragma once
#include "CoreMinimal.h"
#include "EPassiveOnAttackRestoreType.h"
#include "Passive_OnAttack.h"
#include "Passive_OnAttack_Restore.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_OnAttack_Restore : public UPassive_OnAttack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPassiveOnAttackRestoreType RestoreType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FlatAmountToRestore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagePercentageToRestore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StatPercentageToRestore;
    
public:
    UPassive_OnAttack_Restore();

};

