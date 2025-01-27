#pragma once
#include "CoreMinimal.h"
#include "Command.h"
#include "Templates/SubclassOf.h"
#include "Command_Fall.generated.h"

UCLASS(Abstract, Blueprintable)
class UCommand_Fall : public UCommand {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCommand>> LandingCommandClasses;
    
public:
    UCommand_Fall();

};

