#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayEffect.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UGameplayEffect : public UObject {
    GENERATED_BODY()
public:
    UGameplayEffect();

};

