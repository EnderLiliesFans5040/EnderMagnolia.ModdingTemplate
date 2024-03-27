#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EStatusEffectType.h"
#include "StatusEffect.generated.h"

class UFMODEvent;

UCLASS(Abstract, Blueprintable)
class UStatusEffect : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEditStatusEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatusEffectType StatusEffectType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* OnLaunchSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* LoopSound;
    
public:
    UStatusEffect();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStatusEffectType GetStatusEffectType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDuration() const;
    
};

