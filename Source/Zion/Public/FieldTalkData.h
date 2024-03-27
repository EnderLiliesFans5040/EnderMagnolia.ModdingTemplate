#pragma once
#include "CoreMinimal.h"
#include "FieldTalkEntry.h"
#include "FieldTalkData.generated.h"

USTRUCT(BlueprintType)
struct FFieldTalkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFieldTalkEntry> Entries;
    
    ZION_API FFieldTalkData();
};

