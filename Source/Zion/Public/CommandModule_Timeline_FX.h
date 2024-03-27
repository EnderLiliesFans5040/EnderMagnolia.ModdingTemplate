#pragma once
#include "CoreMinimal.h"
#include "CommandModule_Timeline.h"
#include "TimelineFX.h"
#include "CommandModule_Timeline_FX.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_Timeline_FX : public UCommandModule_Timeline {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimelineFX TimelineFX;
    
public:
    UCommandModule_Timeline_FX();

};

