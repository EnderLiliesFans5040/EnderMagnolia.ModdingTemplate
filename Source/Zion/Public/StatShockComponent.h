#pragma once
#include "CoreMinimal.h"
#include "StatBreakableComponent.h"
#include "StatShockComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStatShockComponent : public UStatBreakableComponent {
    GENERATED_BODY()
public:
    UStatShockComponent(const FObjectInitializer& ObjectInitializer);

};

