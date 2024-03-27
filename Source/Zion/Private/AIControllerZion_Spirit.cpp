#include "AIControllerZion_Spirit.h"
#include "ECollisionProfile.h"

AAIControllerZion_Spirit::AAIControllerZion_Spirit(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    const FProperty* p_CollisionProfile = GetClass()->FindPropertyByName("CollisionProfile");
    (*p_CollisionProfile->ContainerPtrToValuePtr<ECollisionProfile>(this)) = ECollisionProfile::Spirit;
}


