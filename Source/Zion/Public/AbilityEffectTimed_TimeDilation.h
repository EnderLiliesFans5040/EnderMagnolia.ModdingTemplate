#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectTimed.h"
#include "TimedDilationData.h"
#include "AbilityEffectTimed_TimeDilation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAbilityEffectTimed_TimeDilation : public UAbilityEffectTimed {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimedDilationData Settings;
    
public:
    UAbilityEffectTimed_TimeDilation();

};

