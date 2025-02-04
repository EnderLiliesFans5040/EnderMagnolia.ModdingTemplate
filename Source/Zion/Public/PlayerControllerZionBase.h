#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerControllerZionBase.generated.h"

UCLASS(Blueprintable)
class ZION_API APlayerControllerZionBase : public APlayerController {
    GENERATED_BODY()
public:
    APlayerControllerZionBase(const FObjectInitializer& ObjectInitializer);

};

