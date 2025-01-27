#pragma once
#include "CoreMinimal.h"
#include "StatBreakableComponent.h"
#include "StatStaminaComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStatStaminaComponent : public UStatBreakableComponent {
    GENERATED_BODY()
public:
    UStatStaminaComponent(const FObjectInitializer& ObjectInitializer);

};

