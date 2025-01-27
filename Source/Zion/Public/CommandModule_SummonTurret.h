#pragma once
#include "CoreMinimal.h"
#include "CommandModule_Summon.h"
#include "SpiritTurretSummonParameters.h"
#include "CommandModule_SummonTurret.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ZION_API UCommandModule_SummonTurret : public UCommandModule_Summon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpiritTurretSummonParameters TurretParameters;
    
public:
    UCommandModule_SummonTurret();

};

