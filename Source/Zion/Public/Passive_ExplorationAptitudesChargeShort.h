#pragma once
#include "CoreMinimal.h"
#include "Passive.h"
#include "Passive_ExplorationAptitudesChargeShort.generated.h"

class UCommandSet;

UCLASS(Abstract, Blueprintable)
class UPassive_ExplorationAptitudesChargeShort : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommandSet* CommandSet;
    
public:
    UPassive_ExplorationAptitudesChargeShort();

};

