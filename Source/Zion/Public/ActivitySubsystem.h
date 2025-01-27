#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ActivitySubsystem.generated.h"

UCLASS(Blueprintable)
class UActivitySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UActivitySubsystem();

};

