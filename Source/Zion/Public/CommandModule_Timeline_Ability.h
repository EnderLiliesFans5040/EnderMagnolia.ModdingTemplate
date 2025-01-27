#pragma once
#include "CoreMinimal.h"
#include "CommandModule_Timeline.h"
#include "EAbilityOffsetMode.h"
#include "TimelineAbility.h"
#include "CommandModule_Timeline_Ability.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_Timeline_Ability : public UCommandModule_Timeline {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityOffsetMode GlobalOffsetMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimelineAbility TimelineAbility;
    
public:
    UCommandModule_Timeline_Ability();

};

