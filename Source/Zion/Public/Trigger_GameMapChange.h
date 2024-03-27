#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FadeDescriptionData.h"
#include "GameplayConditionChecker.h"
#include "Trigger.h"
#include "Trigger_GameMapChange.generated.h"

UCLASS(Abstract, Blueprintable)
class ATrigger_GameMapChange : public ATrigger {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle GameMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerStartTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeDescriptionData FadeOutDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeDescriptionData FadeInDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayConditionChecker ConditionChecker;
    
public:
    ATrigger_GameMapChange(const FObjectInitializer& ObjectInitializer);

};

