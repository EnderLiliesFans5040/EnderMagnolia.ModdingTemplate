#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AssistTrigger.generated.h"

class UAssistAction;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAssistTrigger : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAssistAction*> Actions;
    
public:
    UAssistTrigger();

};

