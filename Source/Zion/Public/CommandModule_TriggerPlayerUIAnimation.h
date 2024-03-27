#pragma once
#include "CoreMinimal.h"
#include "CommandModule.h"
#include "EPlayerUIAnimation.h"
#include "CommandModule_TriggerPlayerUIAnimation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_TriggerPlayerUIAnimation : public UCommandModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerUIAnimation Animation;
    
public:
    UCommandModule_TriggerPlayerUIAnimation();

};

