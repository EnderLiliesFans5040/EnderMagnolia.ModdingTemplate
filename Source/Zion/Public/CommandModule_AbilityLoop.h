#pragma once
#include "CoreMinimal.h"
#include "AbilityAdditionalData.h"
#include "AbilityData.h"
#include "CommandModule.h"
#include "CommandModule_AbilityLoop.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_AbilityLoop : public UCommandModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityData AbilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityAdditionalData AbilityAdditionalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeLaunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoopTimer;
    
public:
    UCommandModule_AbilityLoop();

};

