#pragma once
#include "CoreMinimal.h"
#include "CommandCondition.h"
#include "ECommandSetCategory.h"
#include "ESpiritActivationCheckMode.h"
#include "Templates/SubclassOf.h"
#include "CommandCondition_IsSpiritActive.generated.h"

class ACharacterZionSpirit;

UCLASS(Blueprintable, EditInlineNew)
class UCommandCondition_IsSpiritActive : public UCommandCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACharacterZionSpirit> SpiritClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpiritActivationCheckMode CheckMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ECommandSetCategory> ValidCategories;
    
public:
    UCommandCondition_IsSpiritActive();

};

