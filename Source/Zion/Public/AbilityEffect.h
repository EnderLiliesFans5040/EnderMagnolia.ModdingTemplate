#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EDirectionSource.h"
#include "Templates/SubclassOf.h"
#include "AbilityEffect.generated.h"

class AActor;
class UState;

UCLASS(Abstract, Blueprintable, EditInlineNew, Within=AbilityEffectProcess)
class UAbilityEffect : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecuteWhenDodged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecuteWhenGuarded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecuteWhenParried;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> TargetInvalidStates;
    
public:
    UAbilityEffect();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialize_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFrontalAbility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetToTargetDirection(EDirectionSource DirectionSource, const FVector& Axis) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTargetForward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSourceLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAbilityLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAbilityForward() const;
    
};

