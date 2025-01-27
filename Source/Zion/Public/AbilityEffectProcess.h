#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AbilityEffectProcess.generated.h"

class UAbilityEffect;

UCLASS(Abstract, Blueprintable)
class UAbilityEffectProcess : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAbilityEffect*> Effects;
    
public:
    UAbilityEffectProcess();

};

