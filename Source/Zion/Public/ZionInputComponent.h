#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EInputMappingPriority.h"
#include "ZionInputComponent.generated.h"

class UInputAction;
class UInputMappingContext;

UCLASS(Blueprintable, ClassGroup=Custom, Within=Character, meta=(BlueprintSpawnableComponent))
class ZION_API UZionInputComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UInputMappingContext*, EInputMappingPriority> InputContexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction_Movement;
    
public:
    UZionInputComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveInputMappingContext(const UInputMappingContext* InputMappingContext);
    
    UFUNCTION(BlueprintCallable)
    void AddInputMappingContext(const UInputMappingContext* InputMappingContext, EInputMappingPriority Priority);
    
};

