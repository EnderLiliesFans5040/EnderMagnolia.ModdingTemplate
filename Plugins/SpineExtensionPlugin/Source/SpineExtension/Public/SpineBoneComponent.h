#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESpineBone.h"
#include "SpineBoneComponent.generated.h"

class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPINEEXTENSION_API USpineBoneComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpineBone DefaultBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultCustomBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESpineBone, FName> OverrideBoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, USceneComponent*> BoneFollowers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, USceneComponent*> BoneFollowers_NoRotation;
    
public:
    USpineBoneComponent(const FObjectInitializer& ObjectInitializer);

};

