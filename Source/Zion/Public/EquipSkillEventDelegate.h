#pragma once
#include "CoreMinimal.h"
#include "ESkillSlot.h"
#include "EquipSkillEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEquipSkillEvent, ESkillSlot, SkillSlot);

