#pragma once
#include "CoreMinimal.h"
#include "PassiveRuntimeData.generated.h"

class UPassive;

USTRUCT(BlueprintType)
struct FPassiveRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PassiveID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPassive* PassiveInstance;
    
    ZION_API FPassiveRuntimeData();
};

