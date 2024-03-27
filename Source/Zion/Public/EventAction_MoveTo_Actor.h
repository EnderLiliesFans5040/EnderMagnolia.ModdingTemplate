#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorBindingKey.h"
#include "EventAction_MoveTo.h"
#include "EventAction_MoveTo_Actor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_MoveTo_Actor : public UEventAction_MoveTo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorBindingKey TargetBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldOffset;
    
public:
    UEventAction_MoveTo_Actor();

};

