#pragma once
#include "CoreMinimal.h"
#include "UMGSubsystemSubtitleDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUMGSubsystemSubtitleDelegate, const FText&, Subtitle);

