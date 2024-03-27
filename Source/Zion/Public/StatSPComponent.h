#pragma once
#include "CoreMinimal.h"
#include "StatComponent.h"
#include "StatSPComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStatSPComponent : public UStatComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SPRegenPercentageBonus;
    
public:
    UStatSPComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    int32 SubSPRegenPercentageBonus(int32 SPRegenPercentBonusToSub);
    
    UFUNCTION(BlueprintCallable)
    int32 AddSPRegenPercentageBonus(int32 SPRegenPercentBonusToAdd);
    
};

