#pragma once
#include "CoreMinimal.h"
#include "SpineFXData.h"
#include "Command.h"
#include "Command_Heal.generated.h"

UCLASS(Abstract, Blueprintable)
class UCommand_Heal : public UCommand {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBeforeHeal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData OnHealFXData;
    
public:
    UCommand_Heal();

};

