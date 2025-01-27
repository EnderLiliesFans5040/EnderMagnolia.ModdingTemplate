#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EventAction_SubjectBinding.h"
#include "EventAction_SnapToGround.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class EVENTSYSTEM_API UEventAction_SnapToGround : public UEventAction_SubjectBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
public:
    UEventAction_SnapToGround();

};

