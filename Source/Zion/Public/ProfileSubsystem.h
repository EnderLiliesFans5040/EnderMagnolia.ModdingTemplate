#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ProfileSubsystem.generated.h"

UCLASS(Blueprintable)
class UProfileSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UProfileSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingProfileSystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentProfileName() const;
    
};

