#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ConditionedFieldMessageData.h"
#include "EFieldMessageType.h"
#include "FieldMessageAsset.generated.h"

UCLASS(Blueprintable)
class ZION_API UFieldMessageAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFieldMessageType FieldMessageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConditionedFieldMessageData> ConditionedMessages;
    
    UFieldMessageAsset();

};

