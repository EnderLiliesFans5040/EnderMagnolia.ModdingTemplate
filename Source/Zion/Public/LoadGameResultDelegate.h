#pragma once
#include "CoreMinimal.h"
#include "ESaveExistsType.h"
#include "LoadGameResultDelegate.generated.h"

class USaveGameZion;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FLoadGameResult, ESaveExistsType, Result, USaveGameZion*, LoadedData);

