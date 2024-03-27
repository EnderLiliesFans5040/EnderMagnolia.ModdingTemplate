#pragma once
#include "CoreMinimal.h"
#include "CommandModule.h"
#include "CommandModule_ConsumeSP.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_ConsumeSP : public UCommandModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SPRequired;
    
public:
    UCommandModule_ConsumeSP();

};

