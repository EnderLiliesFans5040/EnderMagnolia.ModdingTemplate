#pragma once
#include "CoreMinimal.h"
#include "ChargeReleaseData.h"
#include "Command.h"
#include "ECommandMinimumChargeType.h"
#include "CommandCharge.generated.h"

UCLASS(Abstract, Blueprintable)
class UCommandCharge : public UCommand {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChargeReleaseData> ReleaseDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommandMinimumChargeType MinimumChargeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumChargeTime;
    
public:
    UCommandCharge();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRelease();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChargeLevelUp(int32 NewChargeLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReleased() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChargeLevel() const;
    
};

