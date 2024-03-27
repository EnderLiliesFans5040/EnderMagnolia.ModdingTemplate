#pragma once
#include "CoreMinimal.h"
#include "CommandModule.h"
#include "CommandModule_PhaseLevel_Set.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_PhaseLevel_Set : public UCommandModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PhaseLevel;
    
public:
    UCommandModule_PhaseLevel_Set();

};

