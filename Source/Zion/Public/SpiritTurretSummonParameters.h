#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SpiritTurretSummonParameters.generated.h"

class UCommand;

USTRUCT(BlueprintType)
struct FSpiritTurretSummonParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCommand>> InitialCommandClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCommand>> AttackCommandClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCommand>> IdleCommandClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSummonerDistanceForAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireSummonerLineOfSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceForAutoDismiss;
    
    ZION_API FSpiritTurretSummonParameters();
};

