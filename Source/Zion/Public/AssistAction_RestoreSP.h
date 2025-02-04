#pragma once
#include "CoreMinimal.h"
#include "AssistAction.h"
#include "AssistAction_RestoreSP.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAssistAction_RestoreSP : public UAssistAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SPPercentage;
    
public:
    UAssistAction_RestoreSP();

};

