#pragma once
#include "CoreMinimal.h"
#include "EquippedSkillData.generated.h"

class UCommandSet;

USTRUCT(BlueprintType)
struct FEquippedSkillData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommandSet* CommandSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommandSet* SpecialCommandSet;
    
    ZION_API FEquippedSkillData();
};

