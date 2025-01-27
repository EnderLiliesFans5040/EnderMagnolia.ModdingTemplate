#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectInstant.h"
#include "Templates/SubclassOf.h"
#include "AbilityEffectInstant_CameraShake.generated.h"

class UCameraShakeBase;

UCLASS(Blueprintable, EditInlineNew)
class UAbilityEffectInstant_CameraShake : public UAbilityEffectInstant {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Falloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOrientShakeTowardsEpicenter;
    
public:
    UAbilityEffectInstant_CameraShake();

};

