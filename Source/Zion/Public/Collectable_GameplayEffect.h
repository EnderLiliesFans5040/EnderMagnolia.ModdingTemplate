#pragma once
#include "CoreMinimal.h"
#include "Collectable.h"
#include "Collectable_GameplayEffect.generated.h"

class UGameplayEffect;

UCLASS(Abstract, Blueprintable)
class ACollectable_GameplayEffect : public ACollectable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGameplayEffect*> Effects;
    
public:
    ACollectable_GameplayEffect(const FObjectInitializer& ObjectInitializer);

};

