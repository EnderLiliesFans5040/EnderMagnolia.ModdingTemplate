#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "ECommandFinishType.h"
#include "Templates/SubclassOf.h"
#include "DebugDisplayComponent.generated.h"

class ACharacter;
class AWorldSpaceWidgetHolder;
class UCommand;
class UTrackEntry;
class UUserWidgetWorldSpaceDebug;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDebugDisplayComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidgetWorldSpaceDebug> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldSpaceLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWorldSpaceWidgetHolder* WidgetHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidgetWorldSpaceDebug* Widget;
    
public:
    UDebugDisplayComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnTickSpineTextureInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnTickLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
    UFUNCTION(BlueprintCallable)
    void OnHPValueChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnCommandStart(const UCommand* Command);
    
    UFUNCTION(BlueprintCallable)
    void OnCommandLevelChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnCommandFinished(const UCommand* Command, ECommandFinishType FinishType);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationStart(UTrackEntry* Entry);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationEnd(UTrackEntry* Entry);
    
};

