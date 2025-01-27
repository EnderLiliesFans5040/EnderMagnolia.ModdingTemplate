#pragma once
#include "CoreMinimal.h"
#include "RecollectionItemData.h"
#include "RecollectionMovieData.generated.h"

class UPlatformMediaSource;

USTRUCT(BlueprintType)
struct FRecollectionMovieData : public FRecollectionItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlatformMediaSource* MediaSource;
    
    ZION_API FRecollectionMovieData();
};

