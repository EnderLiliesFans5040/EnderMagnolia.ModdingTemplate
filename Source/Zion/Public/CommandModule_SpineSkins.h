#pragma once
#include "CoreMinimal.h"
#include "CommandModule.h"
#include "CommandModule_SpineSkins.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ZION_API UCommandModule_SpineSkins : public UCommandModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Skins;
    
public:
    UCommandModule_SpineSkins();

};

