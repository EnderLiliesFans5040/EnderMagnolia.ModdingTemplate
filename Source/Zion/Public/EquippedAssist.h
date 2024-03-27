#pragma once
#include "CoreMinimal.h"
#include "EquippedAssist.generated.h"

class AAssistVisual;
class UAssist;

USTRUCT(BlueprintType)
struct FEquippedAssist {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAssist* AssistInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAssistVisual* AssistVisual;
    
    ZION_API FEquippedAssist();
};

