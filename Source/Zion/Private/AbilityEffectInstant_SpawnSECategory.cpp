#include "AbilityEffectInstant_SpawnSECategory.h"

UAbilityEffectInstant_SpawnSECategory::UAbilityEffectInstant_SpawnSECategory() {
    const FProperty* p_bExecuteWhenGuarded = GetClass()->FindPropertyByName("bExecuteWhenGuarded");
    (*p_bExecuteWhenGuarded->ContainerPtrToValuePtr<bool>(this)) = true;
    this->AttackType = EEffectAttackType::Medium;
    this->Action = EEffectActionType::None;
}


