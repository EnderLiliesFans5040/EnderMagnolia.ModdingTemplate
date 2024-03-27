#pragma once
#include "CoreMinimal.h"
#include "CommandModule.h"
#include "TimedDilationData.h"
#include "CommandModule_TimeDilation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_TimeDilation : public UCommandModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimedDilationData Settings;
    
public:
    UCommandModule_TimeDilation();

};

