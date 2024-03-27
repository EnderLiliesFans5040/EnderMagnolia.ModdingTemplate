#pragma once
#include "CoreMinimal.h"
#include "HitData.h"
#include "CharacterAbilityFullDelegateDelegate.generated.h"

class AAbility;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCharacterAbilityFullDelegate, AAbility*, Ability, AActor*, Source, const FHitData&, HitData);

