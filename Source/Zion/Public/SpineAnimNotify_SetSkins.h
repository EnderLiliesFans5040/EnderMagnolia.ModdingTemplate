#pragma once
#include "CoreMinimal.h"
#include "SpineAnimNotify.h"
#include "SpineAnimNotify_SetSkins.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USpineAnimNotify_SetSkins : public USpineAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Skins;
    
public:
    USpineAnimNotify_SetSkins();

};

