#pragma once
#include "CoreMinimal.h"
#include "EUpgradeType.h"
#include "SkillUpgradeInfo.generated.h"

USTRUCT(BlueprintType)
struct FSkillUpgradeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUpgradeType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OldComboCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewComboCount;
    
    ZION_API FSkillUpgradeInfo();
};

