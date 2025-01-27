#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ConditionedTexture.h"
#include "ConditionedTextureData.generated.h"

UCLASS(Blueprintable)
class UConditionedTextureData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConditionedTexture> ConditionedTextures;
    
public:
    UConditionedTextureData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FConditionedTexture> GetConditionedTextures() const;
    
};

