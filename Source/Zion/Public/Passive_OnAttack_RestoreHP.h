#pragma once
#include "CoreMinimal.h"
#include "Passive_OnAttack_Restore.h"
#include "Passive_OnAttack_RestoreHP.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_OnAttack_RestoreHP : public UPassive_OnAttack_Restore {
    GENERATED_BODY()
public:
    UPassive_OnAttack_RestoreHP();

};

