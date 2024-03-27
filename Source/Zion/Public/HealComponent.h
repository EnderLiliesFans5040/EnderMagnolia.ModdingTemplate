#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealEventDelegate.h"
#include "RestoreHealsEventDelegate.h"
#include "HealComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Within=PlayerController, meta=(BlueprintSpawnableComponent))
class ZION_API UHealComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealEvent OnUseHealDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRestoreHealsEvent OnRestoreHealsDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealEvent OnFullyRestoreHealsDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealEvent OnHealCountChangedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseHealPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBonusHealPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBonusHealCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseHealCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BonusHealCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditiveBonusHealCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HealPowerPercentageBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrHealCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BonusHealPower;
    
public:
    UHealComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UseHeal();
    
    UFUNCTION(BlueprintCallable)
    int32 SubHealPowerPercentageBonus(int32 HealPercentBonusToSub);
    
    UFUNCTION(BlueprintCallable)
    int32 SubHealCountBonus(int32 HealCountBonusToSub);
    
    UFUNCTION(BlueprintCallable)
    int32 RestoreHeals(const int32 RestoreCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHealCountMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingHealCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxHealCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHealValue() const;
    
    UFUNCTION(BlueprintCallable)
    bool FullyRestoreHeals();
    
    UFUNCTION(BlueprintCallable)
    int32 AddHealPowerPercentageBonus(int32 HealPercentBonusToAdd);
    
    UFUNCTION(BlueprintCallable)
    int32 AddHealCountBonus(int32 HealCountBonusToAdd);
    
};

