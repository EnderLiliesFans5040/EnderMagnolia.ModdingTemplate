#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FieldTalkData.h"
#include "FieldTalkAsset.generated.h"

UCLASS(Blueprintable)
class ZION_API UFieldTalkAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeSkipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldTalkData FieldTalk;
    
    UFieldTalkAsset();

};

