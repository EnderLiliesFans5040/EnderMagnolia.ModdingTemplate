#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "EventAction_SubjectBinding.h"
#include "EventAction_WaitMove.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ZION_API UEventAction_WaitMove : public UEventAction_SubjectBinding {
    GENERATED_BODY()
public:
    UEventAction_WaitMove();

private:
    UFUNCTION(BlueprintCallable)
    void OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);
    
};

