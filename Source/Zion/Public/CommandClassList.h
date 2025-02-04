#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CommandClassList.generated.h"

class UCommand;

USTRUCT(BlueprintType)
struct FCommandClassList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCommand>> List;
    
    ZION_API FCommandClassList();
};

