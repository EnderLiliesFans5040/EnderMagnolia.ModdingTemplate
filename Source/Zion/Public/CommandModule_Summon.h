#pragma once
#include "CoreMinimal.h"
#include "CommandModule.h"
#include "EDismissType.h"
#include "SpiritSummonParameters.h"
#include "Templates/SubclassOf.h"
#include "CommandModule_Summon.generated.h"

class ACharacterZionSpirit;
class UCommand;

UCLASS(Blueprintable, EditInlineNew)
class ZION_API UCommandModule_Summon : public UCommandModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACharacterZionSpirit> SpiritClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCommand>> CommandClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpiritSummonParameters SummonParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDismissType OnFinishDismissType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DismissDelay;
    
public:
    UCommandModule_Summon();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacterZionSpirit* GetSpirit() const;
    
};

