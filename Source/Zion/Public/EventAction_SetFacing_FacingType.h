#pragma once
#include "CoreMinimal.h"
#include "EFacingType.h"
#include "EventAction_SetFacing.h"
#include "EventAction_SetFacing_FacingType.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_SetFacing_FacingType : public UEventAction_SetFacing {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFacingType FacingType;
    
public:
    UEventAction_SetFacing_FacingType();

};

