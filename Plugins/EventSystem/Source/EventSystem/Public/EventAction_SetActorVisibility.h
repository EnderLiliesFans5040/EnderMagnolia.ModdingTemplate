#pragma once
#include "CoreMinimal.h"
#include "EventAction_SubjectBinding.h"
#include "EventAction_SetActorVisibility.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_SetActorVisibility : public UEventAction_SubjectBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisible;
    
public:
    UEventAction_SetActorVisibility();

};

