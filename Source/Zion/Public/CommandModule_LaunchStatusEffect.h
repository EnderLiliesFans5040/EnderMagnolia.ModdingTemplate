#pragma once
#include "CoreMinimal.h"
#include "CommandModule.h"
#include "Templates/SubclassOf.h"
#include "CommandModule_LaunchStatusEffect.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_LaunchStatusEffect : public UCommandModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UStatusEffect>> StatusEffectClasses;
    
public:
    UCommandModule_LaunchStatusEffect();

};

