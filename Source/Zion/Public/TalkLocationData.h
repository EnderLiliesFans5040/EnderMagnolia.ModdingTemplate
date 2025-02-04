#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TalkLocationData.generated.h"

USTRUCT(BlueprintType)
struct FTalkLocationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultTalkOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FVector> TalkOffsetPerAnimations;
    
    ZION_API FTalkLocationData();
};

