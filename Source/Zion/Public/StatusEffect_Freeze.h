#pragma once
#include "CoreMinimal.h"
#include "AbilityData.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "StatusEffect_Freeze.generated.h"

class UState;

UCLASS(Abstract, Blueprintable)
class UStatusEffect_Freeze : public UStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityData AbilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> AdditionalStates;
    
public:
    UStatusEffect_Freeze();

};

