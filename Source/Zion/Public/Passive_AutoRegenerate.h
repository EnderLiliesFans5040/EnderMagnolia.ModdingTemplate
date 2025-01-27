#pragma once
#include "CoreMinimal.h"
#include "Passive.h"
#include "Passive_AutoRegenerate.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_AutoRegenerate : public UPassive {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValueToRegenerate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RegenerationTick;
    
public:
    UPassive_AutoRegenerate();

};

