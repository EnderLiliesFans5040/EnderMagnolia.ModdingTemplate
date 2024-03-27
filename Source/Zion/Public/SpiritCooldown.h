#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpiritCooldown.generated.h"

class APawn;
class APlayerControllerZion;
class UCommandSet;
class UFollowTargetComponent;
class UMaterialInstanceDynamic;
class UNiagaraComponent;
class UPaperSpriteComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class ASpiritCooldown : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFollowTargetComponent* FollowTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPaperSpriteComponent* SpriteComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerControllerZion* PlayerControllerZion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MID_Sprite;
    
public:
    ASpiritCooldown(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnUnPossessPlayer(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnNiagaraSystemFinished(UNiagaraComponent* PSystem);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLaunch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCooldownCompleted();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCommandFinishCooldown(const UCommandSet* CommandSetFinished, bool bReset);
    
};

