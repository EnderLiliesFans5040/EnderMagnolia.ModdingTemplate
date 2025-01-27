#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SpineNotifyAsset.generated.h"

class USpineAnimSequence;

UCLASS(Blueprintable)
class SPINEEXTENSION_API USpineNotifyAsset : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, USpineAnimSequence*> AnimSequencePerAnims;
    
public:
    USpineNotifyAsset();

};

