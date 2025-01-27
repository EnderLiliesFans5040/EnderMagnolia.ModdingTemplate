#pragma once
#include "CoreMinimal.h"
#include "AbilityHitbox.h"
#include "AbilityHitboxFollowGeometry.generated.h"

class UFollowGeometryMovementComponent;
class USphereComponent;

UCLASS(Abstract, Blueprintable)
class AAbilityHitboxFollowGeometry : public AAbilityHitbox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFollowGeometryMovementComponent* FollowGeometryMovementComponent;
    
public:
    AAbilityHitboxFollowGeometry(const FObjectInitializer& ObjectInitializer);

};

