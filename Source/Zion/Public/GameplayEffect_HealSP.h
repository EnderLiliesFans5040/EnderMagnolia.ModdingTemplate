#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "GameplayEffect_HealSP.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGameplayEffect_HealSP : public UGameplayEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealPercentage;
    
public:
    UGameplayEffect_HealSP();

};

