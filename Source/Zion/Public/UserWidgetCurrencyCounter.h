#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "ECurrencyType.h"
#include "UserWidgetZion.h"
#include "UserWidgetCurrencyCounter.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetCurrencyCounter : public UUserWidgetZion {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccumulatingCurrencyDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve AddingCurrencyDurationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitingDuration;
    
public:
    UUserWidgetCurrencyCounter();

    UFUNCTION(BlueprintCallable)
    void WaitingTimerFinished();
    
    UFUNCTION(BlueprintCallable)
    void StartAddingCurrency();
    
    UFUNCTION(BlueprintCallable)
    void StartAccumulatingCurrency(const int32 InAccumulatedCurrency);
    
    UFUNCTION(BlueprintCallable)
    void Show(const bool bRefreshCurrencyText);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrencyText(const int32 Currency);
    
    UFUNCTION(BlueprintCallable)
    void SetAccumulatedCurrencyText(const int32 Currency);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartAccumulatingCurrency();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetCurrencyText(const int32 Currency);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetAccumulatedCurrencyText(const int32 Currency);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAccumulatingCurrencyTimerFinished();
    
    UFUNCTION(BlueprintCallable)
    void Hide();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrencyFromInventory() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void AddCurrency(const ECurrencyType& CurrencyType, const int32 AddedCount, const int32 PreviousCount);
    
public:
    UFUNCTION(BlueprintCallable)
    void AccumulatingCurrencyTimerFinished();
    
};

