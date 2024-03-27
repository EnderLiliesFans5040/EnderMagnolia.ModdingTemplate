#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ActorBPFLibrary.generated.h"

class AActor;
class ACharacter;
class USceneComponent;

UCLASS(Blueprintable)
class UActorBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UActorBPFLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static void ToggleActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void ResetVelocity(AActor* Actor, bool bResetX, bool bResetY, bool bResetZ);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayer(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetWorldIDForActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetTopLocation(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetTargetPivotLocation(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USceneComponent* GetTargetPivotComponent(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetHalfHeight(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetBottomLocation(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetActorID(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void ClearMovementBase(ACharacter* Character);
    
};

