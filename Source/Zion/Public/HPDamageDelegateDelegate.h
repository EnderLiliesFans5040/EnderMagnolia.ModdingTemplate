#pragma once
#include "CoreMinimal.h"
#include "DamageData.h"
#include "HPDamageDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHPDamageDelegate, AActor*, Source, const FDamageData&, DamageData);

