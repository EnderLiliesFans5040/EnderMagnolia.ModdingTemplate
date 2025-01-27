#pragma once
#include "CoreMinimal.h"
#include "ActorBindingKey.h"
#include "EventAction_SetFacing.h"
#include "EventAction_SetFacing_Actor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_SetFacing_Actor : public UEventAction_SetFacing {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorBindingKey TargetBinding;
    
public:
    UEventAction_SetFacing_Actor();

};

