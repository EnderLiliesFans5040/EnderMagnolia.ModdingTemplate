#pragma once
#include "CoreMinimal.h"
#include "CommandModule_Summon.h"
#include "SpiritRepeatSummonParameters.h"
#include "CommandModule_SummonRepeat.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ZION_API UCommandModule_SummonRepeat : public UCommandModule_Summon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpiritRepeatSummonParameters RepeatParameters;
    
public:
    UCommandModule_SummonRepeat();

};

