#pragma once
#include "CoreMinimal.h"
#include "DamageData.h"
#include "HPChangeDelegateDelegate.h"
#include "HPDamageDelegateDelegate.h"
#include "StatComponent.h"
#include "StatHPComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStatHPComponent : public UStatComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHPDamageDelegate OnReceivedDamageDataDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHPChangeDelegate OnReceivedDamageDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHPChangeDelegate OnReceivedHealDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeInstantKilled;
    
public:
    UStatHPComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetLastDamageSource() const;
    
    UFUNCTION(BlueprintCallable)
    bool DoHeal(AActor* Source, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    bool DoDamage(AActor* Source, const FDamageData& DamageData);
    
};

