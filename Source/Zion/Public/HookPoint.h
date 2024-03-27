#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EHookType.h"
#include "MapIconProviderInterface.h"
#include "HookPoint.generated.h"

class USceneComponent;
class USphereComponent;

UCLASS(Blueprintable)
class AHookPoint : public AActor, public IMapIconProviderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHookType HookType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComponent;
    
public:
    AHookPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHookType GetHookType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetHookTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHookLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetHookAttachComponent() const;
    

    // Fix for true pure virtual functions not being implemented
};

