#pragma once
#include "CoreMinimal.h"
#include "CommandModule_Summon.h"
#include "SpiritAutoSummonParameters.h"
#include "CommandModule_SummonAuto.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ZION_API UCommandModule_SummonAuto : public UCommandModule_Summon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpiritAutoSummonParameters AutoParameters;
    
public:
    UCommandModule_SummonAuto();

};

