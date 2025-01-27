#pragma once
#include "CoreMinimal.h"
#include "NameSet.h"
#include "RenderStateManagerSaveData.generated.h"

USTRUCT(BlueprintType)
struct FRenderStateManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FNameSet> SeenActors;
    
    ZION_API FRenderStateManagerSaveData();
};

