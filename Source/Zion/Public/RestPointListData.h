#pragma once
#include "CoreMinimal.h"
#include "RestPointListData.generated.h"

class UUserWidgetMapIcon_RestPoint;

USTRUCT(BlueprintType)
struct FRestPointListData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapAreaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUserWidgetMapIcon_RestPoint*> RestPointIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompletionPercentage;
    
    ZION_API FRestPointListData();
};

