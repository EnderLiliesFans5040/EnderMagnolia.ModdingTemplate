#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityEffectInstant.h"
#include "EKnockbackDirectionMode.h"
#include "EKnockbackTriggerCondition.h"
#include "KnockbackData.h"
#include "AbilityEffectInstant_Knockback.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAbilityEffectInstant_Knockback : public UAbilityEffectInstant {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EKnockbackTriggerCondition Condition;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EKnockbackDirectionMode DirectionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AbsoluteDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKnockbackData KnockbackData;
    
public:
    UAbilityEffectInstant_Knockback();

};

