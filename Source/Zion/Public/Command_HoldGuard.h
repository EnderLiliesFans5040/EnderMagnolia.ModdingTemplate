#pragma once
#include "CoreMinimal.h"
#include "AbilityData.h"
#include "Command.h"
#include "Templates/SubclassOf.h"
#include "Command_HoldGuard.generated.h"

class AAbility;
class AActor;
class AWorldSpaceWidgetHolder;
class UUserWidgetWorldSpaceGauge;

UCLASS(Abstract, Blueprintable)
class UCommand_HoldGuard : public UCommand {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxEnergy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnergyCostPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnergyRegenPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageCutPercentageBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityData OnGuardedAbilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAbilityCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbilityCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidgetWorldSpaceGauge> GaugeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWorldSpaceWidgetHolder* GaugeWidgetHolder;
    
public:
    UCommand_HoldGuard();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRelease();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReceivedDamage(AActor* Source, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnGuarded(AAbility* Ability, AActor* Source);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReleased() const;
    
};

