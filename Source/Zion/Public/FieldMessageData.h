#pragma once
#include "CoreMinimal.h"
#include "FieldMessageData.generated.h"

USTRUCT(BlueprintType)
struct FFieldMessageData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
public:
    ZION_API FFieldMessageData();
};

