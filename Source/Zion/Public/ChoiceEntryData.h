#pragma once
#include "CoreMinimal.h"
#include "ChoiceEntryData.generated.h"

USTRUCT(BlueprintType)
struct FChoiceEntryData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Value;
    
public:
    ZION_API FChoiceEntryData();
};

