#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "Passive.h"
#include "Passive_OnAttack.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_OnAttack : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFaction> AffectedFactions;
    
public:
    UPassive_OnAttack();

};

