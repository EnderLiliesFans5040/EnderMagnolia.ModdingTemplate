#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorZion.h"
#include "BTDecorator_RandomChooseOne_ChildChance.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_RandomChooseOne_ChildChance : public UBTDecoratorZion {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChildChance;
    
public:
    UBTDecorator_RandomChooseOne_ChildChance();

};

