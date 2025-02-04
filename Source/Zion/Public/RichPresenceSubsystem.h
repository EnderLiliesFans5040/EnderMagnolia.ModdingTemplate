#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RichPresenceSubsystem.generated.h"

UCLASS(Blueprintable)
class URichPresenceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    URichPresenceSubsystem();

    UFUNCTION(BlueprintCallable)
    void RefreshPresence();
    
};

