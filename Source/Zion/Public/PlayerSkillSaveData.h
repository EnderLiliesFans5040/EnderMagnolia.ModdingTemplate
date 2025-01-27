#pragma once
#include "CoreMinimal.h"
#include "ESkillSlot.h"
#include "PlayerSkillSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSkillSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESkillSlot, FName> SkillIDForSkillSlots;
    
    ZION_API FPlayerSkillSaveData();
};

