#pragma once
#include "CoreMinimal.h"
#include "SummonedIdleSpiritData.generated.h"

class ACharacterZionSpirit;

USTRUCT(BlueprintType)
struct FSummonedIdleSpiritData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ACharacterZionSpirit> Spirit;
    
    ZION_API FSummonedIdleSpiritData();
};

