#pragma once
#include "CoreMinimal.h"
#include "Collectable.h"
#include "Collectable_Drop.generated.h"

UCLASS(Abstract, Blueprintable)
class ACollectable_Drop : public ACollectable {
    GENERATED_BODY()
public:
    ACollectable_Drop(const FObjectInitializer& ObjectInitializer);

};

