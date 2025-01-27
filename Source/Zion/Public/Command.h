#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ECommandCategory.h"
#include "ECommandFinishType.h"
#include "ECommandLayerType.h"
#include "InputSnapshot.h"
#include "Templates/SubclassOf.h"
#include "Command.generated.h"

class ACharacter;
class APawn;
class UCommandCondition;
class UCommandModule;
class UCommandSet;
class UInputAction;
class UMovementComponent;

UCLASS(Abstract, Blueprintable)
class ZION_API UCommand : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCommandCondition*> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCommandModule*> Modules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCommandCondition*> FinishConditions;
    
public:
    UCommand();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialize(APawn* PawnOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinish(ECommandFinishType FinishType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnCanBeStarted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInvokedInputPressed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommandSet* GetSourceCommandSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovementComponent* GetMovementComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommandModule* GetModule(TSubclassOf<UCommandModule> CommandModuleClass, bool bEnsureIfMissing) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInputAction* GetInvokedInputAction() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInputSnapshot GetInputSnapshot() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExecutionTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECommandLayerType GetCommandLayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECommandCategory GetCommandCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetCharacter() const;
    
};

