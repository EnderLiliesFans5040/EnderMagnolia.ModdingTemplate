#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventNode.h"
#include "EventNode_Proxy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class EVENTSYSTEM_API UEventNode_Proxy : public UEventNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid TargetNodeGuid;
    
public:
    UEventNode_Proxy();

};

