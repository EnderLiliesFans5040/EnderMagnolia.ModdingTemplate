#pragma once
#include "CoreMinimal.h"
#include "PlayerAssistSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerAssistSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AssistID;
    
    ZION_API FPlayerAssistSaveData();
};

