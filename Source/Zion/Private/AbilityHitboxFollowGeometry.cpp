#include "AbilityHitboxFollowGeometry.h"
#include "Components/SphereComponent.h"
#include "EAbilityDirectionMode.h"
#include "FollowGeometryMovementComponent.h"

AAbilityHitboxFollowGeometry::AAbilityHitboxFollowGeometry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USphereComponent>(TEXT("Sphere"))) {
    const FProperty* p_DirectionMode = GetClass()->FindPropertyByName("DirectionMode");
    (*p_DirectionMode->ContainerPtrToValuePtr<EAbilityDirectionMode>(this)) = EAbilityDirectionMode::AbilityLocation;
    this->SphereCollision = (USphereComponent*)RootComponent;
    this->FollowGeometryMovementComponent = CreateDefaultSubobject<UFollowGeometryMovementComponent>(TEXT("Follow Geometry"));
}


