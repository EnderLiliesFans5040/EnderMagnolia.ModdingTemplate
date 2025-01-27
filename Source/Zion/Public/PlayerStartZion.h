#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "PlayerStartZion.generated.h"

UCLASS(Abstract, Blueprintable)
class APlayerStartZion : public APlayerStart {
    GENERATED_BODY()
public:
    APlayerStartZion(const FObjectInitializer& ObjectInitializer);

};

