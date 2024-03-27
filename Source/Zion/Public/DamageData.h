#pragma once
#include "CoreMinimal.h"
#include "EAttackElement.h"
#include "EAttackType.h"
#include "DamageData.generated.h"

USTRUCT(BlueprintType)
struct FDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackElement Element;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackType Type;
    
    ZION_API FDamageData();
};

