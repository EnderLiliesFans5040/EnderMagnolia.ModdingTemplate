#pragma once
#include "CoreMinimal.h"
#include "CharacterAbilityDelegateDelegate.generated.h"

class AAbility;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharacterAbilityDelegate, AAbility*, Ability, AActor*, Source);

