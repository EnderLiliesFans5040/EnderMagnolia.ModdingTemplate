#pragma once
#include "CoreMinimal.h"
#include "CommandModule_Timeline.h"
#include "TimelineSE.h"
#include "CommandModule_Timeline_SE.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_Timeline_SE : public UCommandModule_Timeline {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimelineSE TimelineSE;
    
public:
    UCommandModule_Timeline_SE();

};

