#pragma once
#include "CoreMinimal.h"
#include "Passive_OnKill_Restore.h"
#include "Passive_OnKill_RestoreSP.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_OnKill_RestoreSP : public UPassive_OnKill_Restore {
    GENERATED_BODY()
public:
    UPassive_OnKill_RestoreSP();

};

