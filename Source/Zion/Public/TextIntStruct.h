#pragma once
#include "CoreMinimal.h"
#include "TextIntStruct.generated.h"

USTRUCT(BlueprintType)
struct FTextIntStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    ZION_API FTextIntStruct();
};

