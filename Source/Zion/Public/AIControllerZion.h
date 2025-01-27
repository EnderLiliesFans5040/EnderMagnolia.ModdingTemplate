#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "GameplayTagContainer.h"
#include "AIData.h"
#include "ECollisionProfile.h"
#include "EFaction.h"
#include "AIControllerZion.generated.h"

class AActor;
class UBehaviorTree;
class UBlackboardData;

UCLASS(Abstract, Blueprintable)
class AAIControllerZion : public AAIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollisionProfile CollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlackboardData* BlackboardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree_Aggression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BehaviorTree_Aggression_Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree_Idle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BehaviorTree_Idle_Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIData AIData;
    
public:
    AAIControllerZion(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopLogic();
    
    UFUNCTION(BlueprintCallable)
    void StartLogic();
    
    UFUNCTION(BlueprintCallable)
    void ResumeLogic();
    
    UFUNCTION(BlueprintCallable)
    void RestartLogic();
    
    UFUNCTION(BlueprintCallable)
    void PauseLogic();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnDeathProcessStart();
    
    UFUNCTION(BlueprintCallable)
    void OnPawnDeathProcessEnd();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeTarget(const AActor* NewTarget);
    
};

