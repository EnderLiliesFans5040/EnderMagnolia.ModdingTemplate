#pragma once
#include "CoreMinimal.h"
#include "AbilityData.h"
#include "Command.h"
#include "ECommandFinishType.h"
#include "Command_FinalAbility.generated.h"

UCLASS(Abstract, Blueprintable)
class UCommand_FinalAbility : public UCommand {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECommandFinishType> ValidFinishTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAbilityData> AbilityDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKillCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KillDelay;
    
public:
    UCommand_FinalAbility();

};

