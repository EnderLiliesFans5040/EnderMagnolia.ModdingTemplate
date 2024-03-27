#pragma once
#include "CoreMinimal.h"
#include "Passive.h"
#include "Passive_CommandSetOverride.generated.h"

class UCommandSet;

UCLASS(Abstract, Blueprintable)
class UPassive_CommandSetOverride : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommandSet* CommandSet;
    
public:
    UPassive_CommandSetOverride();

};

