#pragma once
#include "CoreMinimal.h"
#include "CommandModule_Timeline.h"
#include "TimelineState.h"
#include "CommandModule_Timeline_State.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_Timeline_State : public UCommandModule_Timeline {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimelineState TimelineState;
    
public:
    UCommandModule_Timeline_State();

};

