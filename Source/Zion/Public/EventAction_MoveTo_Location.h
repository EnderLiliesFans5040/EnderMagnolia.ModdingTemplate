#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventAction_MoveTo.h"
#include "EventAction_MoveTo_Location.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_MoveTo_Location : public UEventAction_MoveTo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseEventOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
public:
    UEventAction_MoveTo_Location();

};

