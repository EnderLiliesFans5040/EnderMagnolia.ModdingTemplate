#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "Command.h"
#include "Command_WallDash_Release.generated.h"

UCLASS(Abstract, Blueprintable)
class UCommand_WallDash_Release : public UCommand {
    GENERATED_BODY()
public:
    UCommand_WallDash_Release();

private:
    UFUNCTION(BlueprintCallable)
    void OnMoveBlocked(const FHitResult& Hit);
    
};

