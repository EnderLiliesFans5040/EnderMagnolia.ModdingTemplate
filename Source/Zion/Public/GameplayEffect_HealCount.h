#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "GameplayEffect_HealCount.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGameplayEffect_HealCount : public UGameplayEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HealCount;
    
public:
    UGameplayEffect_HealCount();

};

