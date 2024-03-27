#pragma once
#include "CoreMinimal.h"
#include "EAttackElement.h"
#include "Passive.h"
#include "Passive_DamageCutElementType.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_DamageCutElementType : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImmuneToStatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAttackElement> ElementTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PercentageBonus;
    
public:
    UPassive_DamageCutElementType();

};

