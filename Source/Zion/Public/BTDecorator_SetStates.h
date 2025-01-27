#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorZion.h"
#include "Templates/SubclassOf.h"
#include "BTDecorator_SetStates.generated.h"

class UState;

UCLASS(Blueprintable)
class UBTDecorator_SetStates : public UBTDecoratorZion {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> States;
    
public:
    UBTDecorator_SetStates();

};

