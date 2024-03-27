#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "GameplayEffect_HealHP.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGameplayEffect_HealHP : public UGameplayEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealPercentage;
    
public:
    UGameplayEffect_HealHP();

};

