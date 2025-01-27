#pragma once
#include "CoreMinimal.h"
#include "StatBreakableComponent.h"
#include "StatFreezeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStatFreezeComponent : public UStatBreakableComponent {
    GENERATED_BODY()
public:
    UStatFreezeComponent(const FObjectInitializer& ObjectInitializer);

};

