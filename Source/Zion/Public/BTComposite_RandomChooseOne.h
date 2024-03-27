#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "BTComposite_RandomChooseOne.generated.h"

UCLASS(Blueprintable)
class UBTComposite_RandomChooseOne : public UBTCompositeNode {
    GENERATED_BODY()
public:
    UBTComposite_RandomChooseOne();

};

