#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SpineFXData.h"
#include "EDeathFacingMode.h"
#include "DeathProcess.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class UDeathProcess : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDeathFacingMode FacingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BorderDistanceForFallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData FXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData OnFinishFXData;
    
public:
    UDeathProcess();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Update(AActor* Actor, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Launch(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishProcess();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Destroy();
    
};

