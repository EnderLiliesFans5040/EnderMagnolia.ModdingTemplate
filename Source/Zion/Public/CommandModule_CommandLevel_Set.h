#pragma once
#include "CoreMinimal.h"
#include "CommandModule.h"
#include "CommandModule_CommandLevel_Set.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_CommandLevel_Set : public UCommandModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CommandLevel;
    
public:
    UCommandModule_CommandLevel_Set();

};

