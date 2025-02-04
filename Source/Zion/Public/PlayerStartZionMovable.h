#pragma once
#include "CoreMinimal.h"
#include "PlayerStartZion.h"
#include "PlayerStartZionMovable.generated.h"

UCLASS(Abstract, Blueprintable)
class APlayerStartZionMovable : public APlayerStartZion {
    GENERATED_BODY()
public:
    APlayerStartZionMovable(const FObjectInitializer& ObjectInitializer);

};

