#pragma once
#include "CoreMinimal.h"
#include "ConfigureScopeDelegateDelegate.generated.h"

class USentryScope;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FConfigureScopeDelegate, USentryScope*, Scope);

