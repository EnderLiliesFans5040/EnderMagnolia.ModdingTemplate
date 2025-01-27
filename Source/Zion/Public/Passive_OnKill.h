#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "Passive.h"
#include "Passive_OnKill.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_OnKill : public UPassive {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFaction> AffectedFactions;
    
public:
    UPassive_OnKill();

};

