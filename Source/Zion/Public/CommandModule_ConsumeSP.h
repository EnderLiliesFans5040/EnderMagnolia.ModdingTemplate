#pragma once
#include "CoreMinimal.h"
#include "CommandModule.h"
#include "CommandModule_ConsumeSP.generated.h"

class UFMODEvent;

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_ConsumeSP : public UCommandModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* UISoundEvent;
    
public:
    UCommandModule_ConsumeSP();

};

