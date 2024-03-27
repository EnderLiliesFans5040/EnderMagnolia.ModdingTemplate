#pragma once
#include "CoreMinimal.h"
#include "StatBreakableComponent.h"
#include "StatTuningComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStatTuningComponent : public UStatBreakableComponent {
    GENERATED_BODY()
public:
    UStatTuningComponent(const FObjectInitializer& ObjectInitializer);

};

