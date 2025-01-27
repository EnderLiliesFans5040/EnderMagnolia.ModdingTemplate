#pragma once
#include "CoreMinimal.h"
#include "CommandModule.h"
#include "ECommandModuleActiveType.h"
#include "Templates/SubclassOf.h"
#include "CommandModule_AddCommands.generated.h"

class UCommand;
class UCommandCondition;

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_AddCommands : public UCommandModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCommandCondition*> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCommand>> CommandClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAbortOnSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommandModuleActiveType ActiveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndTime;
    
public:
    UCommandModule_AddCommands();

};

