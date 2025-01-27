#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESpineBone.h"
#include "CommandModule.h"
#include "MovementModeData.h"
#include "SimpleAnimationDefinitionList.h"
#include "SpineSimpleAnimationDefinition.h"
#include "Templates/SubclassOf.h"
#include "CommandModule_SpineActor.generated.h"

class ASpineActor;

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_SpineActor : public UCommandModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASpineActor> SpineActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineSimpleAnimationDefinition> DefaultAnimationDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMovementModeData, FSimpleAnimationDefinitionList> OverrideForMovementModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpineBone OriginBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OriginBoneCustomName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocalSpaceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASpineActor* SpineActor;
    
public:
    UCommandModule_SpineActor();

};

