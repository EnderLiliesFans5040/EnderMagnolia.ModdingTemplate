#pragma once
#include "CoreMinimal.h"
#include "EPassiveOnKillRestoreType.h"
#include "Passive_OnKill.h"
#include "Passive_OnKill_Restore.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_OnKill_Restore : public UPassive_OnKill {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPassiveOnKillRestoreType RestoreType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FlatAmountToRestore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StatPercentageToRestore;
    
public:
    UPassive_OnKill_Restore();

};

