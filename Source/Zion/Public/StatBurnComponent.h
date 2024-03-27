#pragma once
#include "CoreMinimal.h"
#include "StatBreakableComponent.h"
#include "StatBurnComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStatBurnComponent : public UStatBreakableComponent {
    GENERATED_BODY()
public:
    UStatBurnComponent(const FObjectInitializer& ObjectInitializer);

};

