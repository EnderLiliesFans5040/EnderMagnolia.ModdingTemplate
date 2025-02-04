#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EClearStatus.h"
#include "FakeWall.generated.h"

class UBoxComponent;
class UClearComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class ZION_API AFakeWall : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoManageLinkedVisibilityActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireLinkedVisibilityActorsOnSameLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> LinkedVisibilityActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentReference> FogOfWarBlockerReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UClearComponent* ClearComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBoxComponent*> FogOfWarBlockers;
    
public:
    AFakeWall(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnClearStatusChecked(EClearStatus ClearStatus);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCleared() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Hide(bool bInstant);
    
public:
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

