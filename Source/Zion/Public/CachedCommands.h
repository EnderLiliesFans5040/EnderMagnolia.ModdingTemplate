#pragma once
#include "CoreMinimal.h"
#include "CachedCommands.generated.h"

class UCommand;

USTRUCT(BlueprintType)
struct FCachedCommands {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCommand*> Commands;
    
    ZION_API FCachedCommands();
};

