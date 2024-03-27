#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_Comparator.h"
#include "BTDecorator_Comparator_HP.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_Comparator_HP : public UBTDecorator_Comparator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Percentage;
    
public:
    UBTDecorator_Comparator_HP();

};

