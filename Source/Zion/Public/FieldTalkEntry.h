#pragma once
#include "CoreMinimal.h"
#include "FieldTalkEntry.generated.h"

USTRUCT(BlueprintType)
struct ZION_API FFieldTalkEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TextDuration;
    
    FFieldTalkEntry();
};

