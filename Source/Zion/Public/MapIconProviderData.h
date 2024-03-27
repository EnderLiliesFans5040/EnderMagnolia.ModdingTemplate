#pragma once
#include "CoreMinimal.h"
#include "MapIconProviderData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ZION_API FMapIconProviderData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MainActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DependentActors;
    
    FMapIconProviderData();
};

