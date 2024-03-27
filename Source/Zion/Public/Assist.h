#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Assist.generated.h"

class UAssistTrigger;

UCLASS(Abstract, Blueprintable)
class UAssist : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAssistTrigger*> Triggers;
    
public:
    UAssist();

};

