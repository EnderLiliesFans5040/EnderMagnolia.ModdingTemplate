#pragma once
#include "CoreMinimal.h"
#include "CommandModule.h"
#include "EEnableCustomHurtboxActiveType.h"
#include "CommandModule_EnableCustomHurtbox.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_EnableCustomHurtbox : public UCommandModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HurtboxTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnableCustomHurtboxActiveType ActiveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndTime;
    
public:
    UCommandModule_EnableCustomHurtbox();

};

