#pragma once
#include "CoreMinimal.h"
#include "SpineAnimNotifyState.h"
#include "SoundData.h"
#include "SpineAnimNotifyState_TimedSE.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ZION_API USpineAnimNotifyState_TimedSE : public USpineAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundData SoundData;
    
public:
    USpineAnimNotifyState_TimedSE();

};

