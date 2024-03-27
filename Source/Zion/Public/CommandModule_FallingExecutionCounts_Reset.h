#pragma once
#include "CoreMinimal.h"
#include "CommandModule.h"
#include "ECommandCategory.h"
#include "CommandModule_FallingExecutionCounts_Reset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_FallingExecutionCounts_Reset : public UCommandModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetSpecificCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECommandCategory> SpecificCategories;
    
public:
    UCommandModule_FallingExecutionCounts_Reset();

};

