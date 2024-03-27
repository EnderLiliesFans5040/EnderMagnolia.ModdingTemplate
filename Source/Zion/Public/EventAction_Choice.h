#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "ChoiceEntryData.h"
#include "EventAction_Choice.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_Choice : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Speaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChoiceLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChoiceSaveKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChoiceEntryData> ChoicesData;
    
public:
    UEventAction_Choice();

};

