#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SpineAnimInstance.generated.h"

class USpineAnimSequence;
class USpineSkeletonAnimationComponent;

UCLASS(Blueprintable)
class SPINEEXTENSION_API USpineAnimInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpineSkeletonAnimationComponent* SpineAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USpineAnimSequence* SourceSequence;
    
    USpineAnimInstance();

};

