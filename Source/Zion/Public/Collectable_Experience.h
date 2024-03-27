#pragma once
#include "CoreMinimal.h"
#include "Collectable.h"
#include "Collectable_Experience.generated.h"

UCLASS(Abstract, Blueprintable)
class ACollectable_Experience : public ACollectable {
    GENERATED_BODY()
public:
    ACollectable_Experience(const FObjectInitializer& ObjectInitializer);

};

