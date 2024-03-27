#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorBindingKey.h"
#include "EActorBindingTransformType.h"
#include "EActorPivotTarget.h"
#include "EventAction_SubjectBinding.h"
#include "EventAction_SetActorTransform.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_SetActorTransform : public UEventAction_SubjectBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActorPivotTarget PivotTarget;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EActorBindingTransformType TransformType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorBindingKey ActorBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActorPivotTarget PivotSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SpawnTransform;
    
public:
    UEventAction_SetActorTransform();

};

