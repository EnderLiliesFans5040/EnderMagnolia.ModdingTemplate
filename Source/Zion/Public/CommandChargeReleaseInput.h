#pragma once
#include "CoreMinimal.h"
#include "CommandCharge.h"
#include "CommandChargeReleaseInput.generated.h"

class UInputAction;

UCLASS(Abstract, Blueprintable)
class UCommandChargeReleaseInput : public UCommandCharge {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* ReleaseInputAction;
    
public:
    UCommandChargeReleaseInput();

};

