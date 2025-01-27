#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_Comparator.h"
#include "BTDecorator_Comparator_PhaseLevel.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_Comparator_PhaseLevel : public UBTDecorator_Comparator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
public:
    UBTDecorator_Comparator_PhaseLevel();

};

