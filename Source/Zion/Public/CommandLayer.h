#pragma once
#include "CoreMinimal.h"
#include "ECommandLayerType.h"
#include "CommandLayer.generated.h"

class UCommand;

USTRUCT(BlueprintType)
struct FCommandLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommand* CurrCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCommand*> CommandQueue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommandLayerType LayerType;
    
public:
    ZION_API FCommandLayer();
};

