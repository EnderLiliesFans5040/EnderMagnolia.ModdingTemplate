#pragma once
#include "CoreMinimal.h"
#include "Passive_OnAttack_Restore.h"
#include "Passive_OnAttack_RestoreSP.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_OnAttack_RestoreSP : public UPassive_OnAttack_Restore {
    GENERATED_BODY()
public:
    UPassive_OnAttack_RestoreSP();

};

