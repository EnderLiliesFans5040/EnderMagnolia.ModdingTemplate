#pragma once
#include "CoreMinimal.h"
#include "AutomaticBreadcrumbs.generated.h"

USTRUCT(BlueprintType)
struct FAutomaticBreadcrumbs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnMapLoadingStarted;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnMapLoaded;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnGameStateClassChanged;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnGameSessionIDChanged;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnUserActivityStringChanged;
    
    SENTRY_API FAutomaticBreadcrumbs();
};

