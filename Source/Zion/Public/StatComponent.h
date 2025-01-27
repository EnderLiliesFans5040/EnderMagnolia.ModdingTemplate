#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "StatComponent.generated.h"

class UState;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStatComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatDelegate OnCurrValueChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatDelegate OnMaxValueChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatDelegate OnCurrValueReachedZeroDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatDelegate OnCurrValueReachedMaxDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFullyRestoreOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> SubtractBlockingStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> AddBlockingStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrValue;
    
public:
    UStatComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    int32 Subtract(int32 ValueToSubtract);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxValue(int32 NewMaxValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrRatio() const;
    
    UFUNCTION(BlueprintCallable)
    void FullyRestore();
    
    UFUNCTION(BlueprintCallable)
    int32 Add(int32 ValueToAdd);
    
};

