#pragma once
#include "CoreMinimal.h"
#include "AbilityHitbox.h"
#include "AbilityHitboxMoving.generated.h"

class UZionProjectileMovementComponent;

UCLASS(Abstract, Blueprintable)
class AAbilityHitboxMoving : public AAbilityHitbox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UZionProjectileMovementComponent* ZionProjectileMovementComponent;
    
public:
    AAbilityHitboxMoving(const FObjectInitializer& ObjectInitializer);

};

